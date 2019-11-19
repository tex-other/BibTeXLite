#include <stdio.h>
#include <texmfmp.h>
#include <sys/types.h>
#include <sys/stat.h>




FILE *
xfopen (const_string filename,  const_string mode)
{
    FILE *f;

    //assert(filename && mode);

    f = fopen(filename, mode);
    if (f == NULL)
    {

        fprintf(stderr, "File Open Failed (%s)\n", filename);
        abort();
    }

    return f;
}

int xfclose ( FILE * stream,  const_string filename )
{
	int ret = fclose(stream);	
	if(ret != 0)
	{
		fprintf(stderr, "File Close Failed %s", filename);
		abort();
	}
	return 0;
}

void
close_file (FILE *f)
{
  if (!f)
    return;
  //printf("closing %p\n",  f);
  xfclose(f, "closefile");
}










void xfseek (FILE *fp, long offset, int wherefrom, const_string filename)
{
	int ret = fseek(fp, offset, wherefrom);
	if(ret != 0)
	{
		fprintf(stderr, "File Seek Failed %s", filename);
		abort();
	}
	
}

long
xftell (FILE *f,  const_string filename)
{
    long where = ftell (f);

    if (where < 0)
    {
		fprintf(stderr, "File Tell Failed %s", filename);
		abort();
	}

    return where;
}


long
xftello (FILE *f,  const_string filename)
{
    long where = ftello (f);

    if (where < 0)
    {
		fprintf(stderr, "File Tello Failed %s", filename);
		abort();
	}

    return where;
}

void
xfseeko (FILE *f,  off_t offset,  int wherefrom,  const_string filename)
{
  if (fseeko (f, offset, wherefrom) != 0) {
        fprintf(stderr, "File fseeko Failed (%s)", filename);
		    abort();
  }
}



boolean
eof (FILE *file)
{
  register int c;

  /* If FILE doesn't exist, return true. This happens, for example,
     when a user does `mft foo.mf' -- there's no change file,
     so we never open it, so we end up calling this with a null pointer. */
  if (!file)
    return true;
    
  /* Maybe we're already at the end?  */
  if (feof (file))
    return true;

  if ((c = getc (file)) == EOF)
    return true;

  /* We weren't at the end.  Back up.  */
  (void) ungetc (c, file);

  return false;
}

boolean bibopenout (FILE **f_ptr,  const_string name)
{

    *f_ptr = fopen (name, "wb");
    //printf("opening %p %s \n", *f_ptr, name);
    return *f_ptr != NULL;
    
}
boolean bibopenin (FILE **f_ptr, int local, const_string name)
{
  //printf("a request %s %d\n", name, local);
  if(local == -1)
  {
      *f_ptr = fopen (name, "rb");
      //printf("opening %p %s \n", *f_ptr, name);
      return *f_ptr != NULL;
  }
  else
  {
      char *tmpname = kpse_find_file (name, (kpse_file_format_type)local,
                                    false);
      if(tmpname == NULL)
        return false;

      *f_ptr = fopen (tmpname, "r");
      free(tmpname);
      //printf("opening %s %p\n", name, *f_ptr);
      return *f_ptr != NULL;
  }
}
