
static void printanewline (void);
static void markwarning (void);
static void markerror (void);
static void markfatal (void);
static cstring zbibmakecstring (strnumber s);
#define bibmakecstring(s) zbibmakecstring((strnumber) (s))
static void printoverflow (void);
static void printconfusion (void);
static void bufferoverflow (void);
static boolean  zbibinputln (alphafile f);
#define bibinputln(f) zbibinputln((alphafile) (f))
static void zoutpoolstr (alphafile f,strnumber s);
#define outpoolstr(f, s) zoutpoolstr((alphafile) (f), (strnumber) (s))
static void zprintapoolstr (strnumber s);
#define printapoolstr(s) zprintapoolstr((strnumber) (s))
static void pooloverflow (void);
static void zouttoken (alphafile f);
#define outtoken(f) zouttoken((alphafile) (f))
static void printatoken (void);
static void printbadinputline (void);
static void printskippingwhateverremains (void);
static void samtoolongfilenameprint (void);
static void samwrongfilenameprint (void);
static void printauxname (void);
static void logprauxname (void);
static void auxerrprint (void);
static void zauxerrillegalanotherprint (integer cmdnum);
#define auxerrillegalanotherprint(cmdnum) zauxerrillegalanotherprint((integer) (cmdnum))
static void auxerrnorightbraceprint (void);
static void auxerrstuffafterrightbraceprint (void);
static void auxerrwhitespaceinargumentprint (void);
static boolean  zstrendswith (strnumber s,strnumber ext);
#define strendswith(s, ext) zstrendswith((strnumber) (s), (strnumber) (ext))
static void printbibname (void);
static void logprbibname (void);
static void printbstname (void);
static void logprbstname (void);
static void hashciteconfusion (void);
static void zcheckciteoverflow (citenumber lastcite);
#define checkciteoverflow(lastcite) zcheckciteoverflow((citenumber) (lastcite))
static void auxend1errprint (void);
static void auxend2errprint (void);
static void bstlnnumprint (void);
static void bsterrprintandlookforblankline (void);
static void bstwarnprint (void);
static void eatbstprint (void);
static void unknwnfunctionclassconfusion (void);
static void zprintfnclass (hashloc fnloc);
#define printfnclass(fnloc) zprintfnclass((hashloc) (fnloc))
static void ztraceprfnclass (hashloc fnloc);
#define traceprfnclass(fnloc) ztraceprfnclass((hashloc) (fnloc))
static void idscanningconfusion (void);
static void bstidprint (void);
static void bstleftbraceprint (void);
static void bstrightbraceprint (void);
static void zalreadyseenfunctionprint (hashloc seenfnloc);
#define alreadyseenfunctionprint(seenfnloc) zalreadyseenfunctionprint((hashloc) (seenfnloc))
static void biblnnumprint (void);
static void biberrprint (void);
static void bibwarnprint (void);
static void zcheckfieldoverflow (integer totalfields);
#define checkfieldoverflow(totalfields) zcheckfieldoverflow((integer) (totalfields))
static void eatbibprint (void);
static void zbiboneoftwoprint (ASCIIcode char1,ASCIIcode char2);
#define biboneoftwoprint(char1, char2) zbiboneoftwoprint((ASCIIcode) (char1), (ASCIIcode) (char2))
static void bibequalssignprint (void);
static void bibunbalancedbracesprint (void);
static void bibfieldtoolongprint (void);
static void macrowarnprint (void);
static void bibidprint (void);
static void bibcmdconfusion (void);
static void citekeydisappearedconfusion (void);
static void zbadcrossreferenceprint (strnumber s);
#define badcrossreferenceprint(s) zbadcrossreferenceprint((strnumber) (s))
static void nonexistentcrossreferenceerror (void);
static void zprintmissingentry (strnumber s);
#define printmissingentry(s) zprintmissingentry((strnumber) (s))
static void bstexwarnprint (void);
static void bstmildexwarnprint (void);
static void bstcantmesswithentriesprint (void);
static void illeglliteralconfusion (void);
static void unknwnliteralconfusion (void);
static void zprintstklit (integer stklt,stktype stktp);
#define printstklit(stklt, stktp) zprintstklit((integer) (stklt), (stktype) (stktp))
static void zprintlit (integer stklt,stktype stktp);
#define printlit(stklt, stktp) zprintlit((integer) (stklt), (stktype) (stktp))
static void outputbblline (void);
static void bst1printstringsizeexceeded (void);
static void bst2printstringsizeexceeded (void);
static void zbracesunbalancedcomplaint (strnumber poplitvar);
#define bracesunbalancedcomplaint(poplitvar) zbracesunbalancedcomplaint((strnumber) (poplitvar))
static void caseconversionconfusion (void);
static void traceandstatprinting (void);
static void zstartname (strnumber filename);
#define startname(filename) zstartname((strnumber) (filename))
static void zaddextension (strnumber ext);
#define addextension(ext) zaddextension((strnumber) (ext))
static strnumber makestring (void);
static boolean zstreqbuf (strnumber s,buftype buf,bufpointer bfptr,bufpointer len);
#define streqbuf(s, buf, bfptr, len) zstreqbuf((strnumber) (s),  (buf), (bufpointer) (bfptr), (bufpointer) (len))
static boolean zstreqstr (strnumber s1,strnumber s2);
#define streqstr(s1, s2) zstreqstr((strnumber) (s1), (strnumber) (s2))
static void zlowercase (buftype buf,bufpointer bfptr,bufpointer len);
#define lowercase(buf, bfptr, len) zlowercase( (buf), (bufpointer) (bfptr), (bufpointer) (len))
static void zuppercase (buftype buf,bufpointer bfptr,bufpointer len);
#define uppercase(buf, bfptr, len) zuppercase( (buf), (bufpointer) (bfptr), (bufpointer) (len))
static hashloc zstrlookup (buftype buf,bufpointer j,bufpointer l,strilk ilk,boolean insertit);
#define strlookup(buf, j, l, ilk, insertit) zstrlookup( (buf), (bufpointer) (j), (bufpointer) (l), (strilk) (ilk), (boolean) (insertit))
static void zpredefine (pdstype pds,pdslen len,strilk ilk);
#define predefine(pds, len, ilk) zpredefine( (pds), (pdslen) (len), (strilk) (ilk))
static void zzinttoASCII (integer theint,buftype intbuf,bufpointer intbegin,bufpointer * intend);
#define inttoASCII(theint, intbuf, intbegin, intend) zzinttoASCII((integer) (theint),  (intbuf), (bufpointer) (intbegin), (bufpointer *) &(intend))
static void zzadddatabasecite (citenumber * newcite);
#define adddatabasecite(newcite) zzadddatabasecite((citenumber *) &(newcite))
static boolean  zfindcitelocsforthiscitekey (strnumber citestr);
#define findcitelocsforthiscitekey(citestr) zfindcitelocsforthiscitekey((strnumber) (citestr))
static void zswap (citenumber swap1,citenumber swap2);
#define swap(swap1, swap2) zswap((citenumber) (swap1), (citenumber) (swap2))
static boolean  zlessthan (citenumber arg1,citenumber arg2);
#define lessthan(arg1, arg2) zlessthan((citenumber) (arg1), (citenumber) (arg2))
static void zquicksort (citenumber leftend,citenumber rightend);
#define quicksort(leftend, rightend) zquicksort((citenumber) (leftend), (citenumber) (rightend))
static void zzbuildin (pdstype pds,pdslen len,hashloc * fnhashloc,bltinrange bltinnum);
#define buildin(pds, len, fnhashloc, bltinnum) zzbuildin( (pds), (pdslen) (len), (hashloc *) &(fnhashloc), (bltinrange) (bltinnum))
static void predefcertainstrings (void);
static boolean  zscan1 (ASCIIcode char1);
#define scan1(char1) zscan1((ASCIIcode) (char1))
static boolean  zscan1white (ASCIIcode char1);
#define scan1white(char1) zscan1white((ASCIIcode) (char1))
static boolean  zscan2 (ASCIIcode char1,ASCIIcode char2);
#define scan2(char1, char2) zscan2((ASCIIcode) (char1), (ASCIIcode) (char2))
static boolean  zscan2white (ASCIIcode char1,ASCIIcode char2);
#define scan2white(char1, char2) zscan2white((ASCIIcode) (char1), (ASCIIcode) (char2))
static boolean  zscan3 (ASCIIcode char1,ASCIIcode char2,ASCIIcode char3);
#define scan3(char1, char2, char3) zscan3((ASCIIcode) (char1), (ASCIIcode) (char2), (ASCIIcode) (char3))
static boolean  scanalpha (void);
static void zscanidentifier (ASCIIcode char1,ASCIIcode char2,ASCIIcode char3);
#define scanidentifier(char1, char2, char3) zscanidentifier((ASCIIcode) (char1), (ASCIIcode) (char2), (ASCIIcode) (char3))
static boolean  scannonneginteger (void);
static boolean  scaninteger (void);
static boolean scanwhitespace (void);
static boolean eatbstwhitespace (void);
static void skiptokenprint (void);
static void printrecursionillegal (void);
static void skptokenunknownfunctionprint (void);
static void skipillegalstuffaftertokenprint (void);
static void zscanfndef (hashloc fnhashloc);
#define scanfndef(fnhashloc) zscanfndef((hashloc) (fnhashloc))
static boolean eatbibwhitespace (void);
static boolean compressbibwhite (void);
static boolean scanbalancedbraces (void);
static boolean scanafieldtokenandeatwhite (void);
static boolean scanandstorethefieldvalueandeatwhite (void);
static void zdecrbracelevel (strnumber poplitvar);
#define decrbracelevel(poplitvar) zdecrbracelevel((strnumber) (poplitvar))
static void zcheckbracelevel (strnumber poplitvar);
#define checkbracelevel(poplitvar) zcheckbracelevel((strnumber) (poplitvar))
static void znamescanforand (strnumber poplitvar);
#define namescanforand(poplitvar) znamescanforand((strnumber) (poplitvar))
static boolean vontokenfound (void);
static void vonnameendsandlastnamestartsstuff (void);
static void skipstuffatspbracelevelgreaterthanone (void);
static void bracelvloneletterscomplaint (void);
static boolean zenoughtextchars (bufpointer enoughchars);
#define enoughtextchars(enoughchars) zenoughtextchars((bufpointer) (enoughchars))
static void figureouttheformattedname (void);
static void zpushlitstk (integer pushlt,stktype pushtype);
#define pushlitstk(pushlt, pushtype) zpushlitstk((integer) (pushlt), (stktype) (pushtype))
static void zzpoplitstk (integer * poplit,stktype * poptype);
#define poplitstk(poplit, poptype) zzpoplitstk((integer *) &(poplit), (stktype *) &(poptype))
static void zprintwrongstklit (integer stklt,stktype stktp1,stktype stktp2);
#define printwrongstklit(stklt, stktp1, stktp2) zprintwrongstklit((integer) (stklt), (stktype) (stktp1), (stktype) (stktp2))
static void poptopandprint (void);
static void popwholestack (void);
static void initcommandexecution (void);
static void checkcommandexecution (void);
static void addpoolbufandpush (void);
static void zaddbufpool (strnumber pstr);
#define addbufpool(pstr) zaddbufpool((strnumber) (pstr))
static void zaddoutpool (strnumber pstr);
#define addoutpool(pstr) zaddoutpool((strnumber) (pstr))
static void xequals (void);
static void xgreaterthan (void);
static void xlessthan (void);
static void xplus (void);
static void xminus (void);
static void xconcatenate (void);
static void xgets (void);
static void xaddperiod (void);
static void xchangecase (void);
static void xchrtoint (void);
static void xcite (void);
static void xduplicate (void);
static void xempty (void);
static void xformatname (void);
static void xinttochr (void);
static void xinttostr (void);
static void xmissing (void);
static void xnumnames (void);
static void xpreamble (void);
static void xpurify (void);
static void xquote (void);
static void xsubstring (void);
static void xswap (void);
static void xtextlength (void);
static void xtextprefix (void);
static void xtype (void);
static void xwarning (void);
static void xwidth (void);
static void xwrite (void);
static void zexecutefn (hashloc exfnloc);
#define executefn(exfnloc) zexecutefn((hashloc) (exfnloc))
static void getthetoplevelauxfilename (void);
static void auxbibdatacommand (void);
static void auxbibstylecommand (void);
static void auxcitationcommand (void);
static void auxinputcommand (void);
static void poptheauxstack (void);
static void getauxcommandandprocess (void);
static void lastcheckforauxerrors (void);
static void bstentrycommand (void);
static boolean badargumenttoken (void);
static void bstexecutecommand (void);
static void bstfunctioncommand (void);
static void bstintegerscommand (void);
static void bstiteratecommand (void);
static void bstmacrocommand (void);
static void getbibcommandorentryandprocess (void);
static void bstreadcommand (void);
static void bstreversecommand (void);
static void bstsortcommand (void);
static void bststringscommand (void);
static void getbstcommandandprocess (void);
static void setupparams (void);
static void computehashprime (void);
static void initialize (void);
static void parsearguments (void);