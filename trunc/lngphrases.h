/*
  Free Download Manager Copyright (c) 2003-2014 FreeDownloadManager.ORG
*/

#ifndef __LNGPHRASES_H_
#define __LNGPHRASES_H_

enum LangPhrase
{
	L_SAVEALL,
	L_CUT,
	L_COPY,
	L_PASTE,
	L_LIGHT, 
	L_MEDIUM,
	L_HEAVY,
	L_DLDR_OPTIONS,
	L_DIALUP,
	L_ABOUT,
	L_EXIT,
	L_FILE,
	L_EDIT,
	L_VIEW,
	L_OPTIONS,
	L_TOOLS,
	L_HELP,
	L_TOOLBAR,
	L_STATUSBAR,
	L_OPTMASTER,
	L_DLDDEFOPT,
	L_PRGGENSET,
	L_DIAL,
	L_HANGUPWD,
	L_TURNOFFWD,
	L_DOCUMENTATION,
	L_HOMEPAGE,
	L_RECOMMEND,
	L_TOSUPPORT,
	L_AUTOUPDATE,
	L_UPDATENOW,
	L_HOWTOREG,

	L_REGISTER,
	L_SWITCHTO,
	L_TUM,
	L_REGISTRATION,
	L_DOWNLOADS,
	L_SCHEDULER,
	L_EXPLORER,
	L_HFE,
	L_SITESMGR,
	L_NEWDLD,
	L_STARTDLDS,
	L_STOPDLDS,
	L_SCHEDULEDLDS,
	L_NEWTASK,
	L_TASKPROP,
	L_DOWNLOADSELECTED,
	L_STOP,
	L_REFRESH,
	L_ADDSITE,
	L_SITEPROP,
	L_DLGROUPS,
	L_DLINFO,
	L_SCHEDULERLOG,
	L_EXPLORERLOG,
	L_SWBAR,
	L_NEWDL,
	L_DELETEDLD,
	L_LAUNCHFILE,
	L_OPENFOLDER,
	L_AUTOSTARTDLD,
	L_DLDPROP,
	L_ENABLETASK,
	L_DISABLETASK,
	L_DELETETASK,
	L_OPENPARENTFOLDER,
	L_DISCONNECT,
	L_DOWNLOAD,
	L_EXPLORERSETTINGS,
	L_DELETESITE,
	L_TEMPENTRY,
	L_SITES,
	L_SHOWMAINWND,
	L_MONITORBROWSER,
	L_MONITORCLIPBOARD,
	L_STARTALLDLDS,
	L_STOPALLDLDS,
	L_NOTREGISTERED,
	L_CONTINUE,
	L_NAG_REGISTER,

	L_ENTERKEY,
	L_KEY,
	L_KEYNOTE,
	L_GETKEY,
	L_CANCEL,
	L_SPECKEY,
	L_CLICKAFTER,
	L_DONTREGISTER,
	L_ALLGROUPS,
	L_FILTERS,
	L_COMPLETED,
	L_INPROGRESS,
	L_SCHEDULED,
	L_STOPPED,
	L_OTHER,
	L_CREATEGRP,
	L_DELGRP,
	L_DELETEALLDLDS,
	L_DELSUCCDLDS,
	L_OPENGRPFOLDER,
	L_GRPPROP,
	L_GRPNAME,
	L_GRPFOLDER,
	L_GRPEXTS,
	L_GRPDEFPRIOR,
	L_VERYLOW,
	L_LOW,
	L_AVERAGE,
	L_HIGH,
	L_VERYHIGH,
	L_ENTERGRPNAME,
	L_INPERR,
	L_GRPALREXISTS,
	L_ENTERFLRNAME,
	L_CHOOSEGRPFLDR,
	L_ENTERGRPNAMEHERE,
	L_FOLDERINWHICH,
	L_BROWSEFOR,
	L_GRPFILESEXTS,
	L_GRPDEFPRIORHERE,
	L_DONTACCEPTCHANGES,
	L_ACCEPTCHANGES,
	L_ERRLOADGRPS,
	L_REINSTALL,
	L_ERR,
	L_ERRLOADLISTOFDLDS,
	L_ERRIE,
	L_AREYOUSURE,
	L_THISDELGRPDLDS,
	L_CONFIRMATION,
	L_FILENAME,
        L_SIZE,
        L_DOWNLOADED,
        L_TIMELEFT,
        L_SECTIONS,
        L_SPEED,
        L_COMMENT,
        L_LOG,
        L_PROGRESS,
        L_TIME,
        L_DATE,
        L_INFORMATION,
        L_CLEAR,
        L_AUTOSCROLL,
        L_UNKNETERR,
        L_INVLOGIN,
        L_INVPWD,
        L_SUCCESS,
        L_CANTCONNECT,
        L_NOTFOUND,
        L_CONNWASLOST,
        L_NOTRESPONSE,
        L_NOTRESOLVED,
        L_NORESUME,
        L_PROXYLOGINREQ,
        L_EXTERR,
        L_BADREQ,
        L_UNKSERVERR,
        L_CONNABORTED,
        L_BADURL,
        L_NOINETCONN,
        L_HTTPNOTSUPP,
        L_UNKERR,
        L_CANTDELETE,
        L_LIMITREACHED,
        L_TOTALLIMITREACHED,
        L_PAUSESECS,
        L_SECTION,
        L_STARTED,
        L_DONE,
        L_DLDCOMPLETED,
	L_CONNECTING,
	L_CONNSUCC,
	L_REDIRECTING,
	L_REDIRSUCC,
	L_STARTINGDLD,
	L_DLDSTOPPED,
	L_NEWSECTION,
	L_CANCELED,
	L_RESTARTINGDLD,
	L_OPENINGFILE,
	L_FILENAMETOOLONG,
    L_FILEALREXISTSRENAMING,
    L_RENAMINGTO,
    L_WASDELETED,
    L_REWRITINGIT,
    L_RESUMINGDLD,
    L_ALREXISTS,
    L_FAILEDTOOPEN,
    L_FILESIZEWASCHANGED,
    L_ADJFORNEWSIZE,
    L_CANTREWRITE,
    L_WILLBERENAMED,
    L_CANTRENAMEBACK,
    L_CANTSAVEGRPS,
    L_CANTSAVEDLDS,
    L_DIALCONNECTION,
    L_CONNECTTO,
    L_AUTODIAL,
    L_CONNECT,
    L_CHOOSEENTRY,
    L_AUTODIALHERE,
    L_DIALNOW,
    L_DONTDIAL,
    L_NODIALENTRIES,
    L_LINEBUSY,
    L_HARDWAREFAILURE,
    L_NODIALTONE,
    L_DIALING,
    L_ATTEMPT,
    L_OPENPORT,
    L_DIALTOPROVIDER,
    L_CONNECTEDTOREMOTE,
    L_VERUSERANDPASS,
    L_CONNSPEEDNOW,
    L_HANGUPIT,
    L_REPETITION,
    L_AUTHORIZATION,
    L_USER,
    L_PASSWORD,
    L_GROUP,
    L_SAVETO,
    L_SAVEAS,
    L_START,
    L_AUTOMATICALLY,
    L_MANUALLY,
    L_SCHEDULE,
    L_DLDPRIOR,
    L_ADVANCED,
    L_ADDROFFILE,
    L_USERHERE,
    L_PWDHERE,
    L_LOGINHERE,
    L_GROUPHERE,
    L_DLDFOLDERHERE,
    L_SAVEASHERE,
    L_DLDSHORTDESC,
    L_STARTNOWHERE,
    L_MANUALLYSTARTHERE,
    L_SCHEDULESTARTHERE,
    L_SETTIMEHERE,
    L_PRIORHERE,
    L_ADVANCEDHERE,
    L_CHECKURL,
    L_ENTERUSER,
    L_CHOOSEOUTFOLDER,
    L_GENERAL,
    L_GENERALINFO,
    L_SAVEDAS,
    L_SAVEDASHERE,
    L_CANTCHANGEURL,
    L_CANTCHANGEFILENAME,
    L_CANTRENAME,
    L_FILENOTFOUND,
    L_PATHNOTFOUND,
    L_BADEXE,
    L_FILEINUSE,
    L_ACCDENIED,
    L_DEVNOTREADY,
    L_DISKFULL,
    L_BADFILENAME,
    L_LOGINREQ,
    L_CONNECTION,
    L_NETWORK,
    L_ERRS,
    L_PAUSEBETWEEN,
    L_MAXATTEMPTS,
    L_TIMEOUTINSEC,
    L_MINSIZE,
    L_MAXCOUNT,
    L_NETUSAGERESTR,
    L_LIMITTRAFF,
    L_IGNOREALLRESTR,
    L_B,
    L_KB,
    L_MB,
    L_S,
    L_ENTERGREATER,
    L_ENTERDIM,
    L_PAUSEBETWEENHERE,
    L_MAXATTEMPTSHERE,
    L_TIMEOUTHERE,
    L_MINSECTSIZEHERE,
    L_MAXSECTHERE,
    L_TRAFFLIMITHERE,
    L_IGNOREALLHERE,
    L_DIMHERE,
    L_PROTOCOL,
    L_IDAS,
    L_REFERER,
    L_USEHTTP11,
    L_USECOOKIE,
    L_USEPASSIVEMODE,
    L_TRANSFERMODE,
    L_BINARY,
    L_ASCIIFOR,
    L_IDASHERE,
    L_REFERERHERE,
    L_USEHTTP11HERE,
    L_USECOOKIEHERE,
    L_USEPASSIVEMODEHERE,
    L_BINARYHERE,
    L_ASCIIHERE,
    L_ASCIIFORHERE,
    L_PROXY,
    L_GETFROM,
    L_FROMIE,
    L_FROMMANUALLY,
    L_FROMDONTUSE,
    L_SETTINGS,
    L_ADDR,
    L_PORT,
    L_ENTERPROXY,
    L_ENTERPROXYPORT,
    L_FROMIEHERE,
    L_FROMMANUALHERE,
    L_FROMDONTUSEHERE,
    L_PROTOCOLHERE,
    L_PROXYADDRHERE,
    L_PROXYPORTHERE,
    L_PROXYLOGINHERE,
    L_MISC,
    L_LOCALFILE,
    L_IFEXISTS,
    L_RESERVESPACE,
    L_ADDEXT,
    L_INETSERV,
    L_DONTRESTARTIFNORESUME,
    L_IFSIZECHANGED,
    L_STOPONERRS,
    L_ASK,
    L_REWRITE,
    L_RENAME,
    L_RESUME,
    L_RESTART,
    L_ADJUST,
    L_ENTEREXT,
    L_IFEXISTSHERE,
    L_RESERVESPACEHERE,
    L_ADDEXTHERE,
    L_DONTRESTARTHERE,
    L_IFSIZECHANGEDHERE,
    L_FILENOTFOUNDHERE,
    L_ACCDENIEDHERE,
    L_TUMS,
    L_MODETOADJUST,
    L_MAXCOUNTOFCONNS,
    L_MAXCOUNTOFCONNSPERSERV,
    L_TUR,
    L_UNLIMITED,
    L_TUMHERE,
    L_MAXCONNSHERE,
    L_MAXCONNSPERSERVHERE,
    L_TURHERE,
    L_ALLDLDS,
    L_LISTOFDLDS,
    L_AUTOSAVE,
    L_MIN,
    L_WHENDEL,
    L_AUTODEL,
    L_DONTDELFILE,
    L_DELFILE,
    L_AUTOSAVEHERE,
    L_WHENDELHERE,
    L_AUTODELHERE,
    L_MONITOR,
    L_MONITORFOR,
    L_CLIPBOARD,
    L_MONITOREXTS,
    L_IGNOREEXTS,
    L_ATLSHOULDNOT,
    L_ALTSHOULD,
    L_ENTEREXTS,
    L_IEXPLOREHERE,
    L_CLIPBOARDHERE,
    L_MONITOREXTSHERE,
    L_IGNOREEXTSHERE,
    L_ALTSHOULDNOTHERE,
    L_ALTSHOULDHERE,
    L_STARTUP,
    L_AUTOSTART,
    L_STARTMINIMIZED,
    L_SYSTEM,
    L_MINTOTRAY,
    L_CLOSEASMINIMIZE,
    L_AUTOSTARTHERE,
    L_STARTMINIMIZEDHERE,
    L_MINTOTRAYHERE,
    L_CLOSEASMINHERE,
    L_UPDATE,
    L_UPDSERVURLHERE,
    L_AUTOUPDATEHERE,
    L_NOW,
    L_WELCOMETONOW,
    L_NOWDESC,
    L_SELECTCONNTYPE,
    L_FINISH,
    L_CONNTYPEHERE,
    L_ADJUSTFDM,
    L_WTS,
    L_HTS,
    L_NEXTSTART,
    L_LASTSTART,
    L_CANTLOADSCHEDULES,
    L_CANTLOADSCHEDULERLOG,
    L_CANTSAVESCHEDULES,
    L_STARTIT,
    L_CHANGINGTUM,
    L_HANGUP,
    L_ALLCONNS,
    L_CHANGETUMTO,
    L_SHUTDOWN,
    L_RESTARTCOMP,
    L_LOGOFF,
    L_ONCE,
    L_SUN,
    L_MON,
    L_TUE,
    L_WED,
    L_THU,
    L_FRI,
    L_SAT,
    L_ONDAYS,
    L_EVERY,
    L_DAYS,
    L_HOURS,
    L_ATSTARTUP,
    L_AFTERDIALOK,
    L_DIALWASFAILED,
    L_WHENNOACTIVEDLDS,
    L_WHENSPEEDLESS,
    L_WHENALLDLDSINERR,
    L_NEVER,
    L_UNKNOWN,
    L_SUCCCONNECTED,
    L_FAILEDCONNECTTO,
    L_LAUNCHEDSUCC,
    L_OUTOFMEMORY,
    L_CANTLAUNCH,
    L_SCHEDULERESTOEXIT,
    L_MAXDIALATTEMPTS,
    L_PAUSEBETWEENDIAL,
    L_HANGUPIFLESS,
    L_TRYAGAIN,
    L_NOMORETHAN,
    L_CONNECTIONTOUSE,
    L_IFSUCC,
    L_TIMES,
    L_HANGUPALL,
    L_CONNTOHANG,
    L_PRGNAME,
    L_ARGS,
    L_SHUTDOWNTYPE,
    L_FORCEAPPS,
    L_LAUNCHPRG,
    L_DIALVIAMODEM,
    L_HANGMODEM,
    L_CHANGETUM,
    L_EXITFROM,
    L_SHUTDOWNCOMP,
    L_DLDSTOSTART,
    L_DLDSTOSTOP,
    L_APPS,
    L_ALLFILES,
    L_AVAILON2000,
    L_ENTERPRGNAME,
    L_ENTERDLDS,
    L_SETTUMHERE,
    L_MAXDIALSHERE,
    L_USEPAUSEHERE,
    L_HANGUPIFLESSHERE,
    L_MINBPSHERE,
    L_TRYAGAINHERE,
    L_NOMORETHANHERE,
    L_SELDLDSHERE,
    L_ALLDLDSHERE,
    L_TOSELHERE,
    L_TOUNSELHERE,
    L_PROGNAMEHERE,
    L_CHOOSEPROGHERE,
    L_ARGSHERE,
    L_TYPEHERE,
    L_FORCEEXITHERE,
    L_WTSHERE,
    L_HANGALLHERE,
    L_CONNTOHANGHERE,
    L_INCERTAINDAYS,
    L_SUNDAY,
    L_MONDAY,
    L_TUESDAY,
    L_WEDNESDAY,
    L_THURSDAY,
    L_FRIDAY,
    L_SATURDAY,
    L_ONEVENT,
    L_DURING,
    L_LOWSPEED,
    L_MIN_SMALL,
    L_B_MINUTES,
    L_B_HOURS,
    L_B_DAYS,
    L_WHENSPEEDSMALL,
    L_WHENALLDLDSINERRSTATE,
    L_ENTERDAYS,
    L_STARTTIMEHERE,
    L_TIMEHERE,
    L_ONCEHERE,
    L_DATEHERE,
    L_DAILYHERE,
    L_SUNHERE,
    L_MONHERE,
    L_TUEHERE,
    L_WEDHERE,
    L_THUHERE,
    L_FRIHERE,
    L_SATHERE,
    L_ONEVERYHERE,
    L_EVERYDIMHERE,
    L_ONEVENTHERE,
    L_EVENTHERE,
    L_DURINGHERE,
    L_LOWSPEEDHERE,
    L_CONFIRMREQ,
    L_WAITFORCONFIRM,
    L_SECS,
    L_USECONFIRMHERE,
    L_WAITFORCONFIRMHERE,
    L_ADDRESS,
    L_BUILDINGLIST,
    L_CONNECTINGTOSERV,
    L_TRYINGSITEMGR,
    L_RETRLIST,
    L_CONNLOSTTRYINGTORESTORE,
    L_BUILDINGLIST2,
    L_RETRADDINFO,
    L_USINGMAYDECREASE,
    L_RETRADDINFOHERE,
    L_SITENAME,
    L_CONNS,
    L_LOGIN,
    L_GROUP2,
    L_CANTLOADSITES,
    L_CANTSAVESITES,
    L_MAXSITECONNS,
    L_USEDEFGRP,
    L_USESITEFTPPASSIVE,
    L_ENTERSITE,
    L_SITEALREXISTS,
    L_MAXCONNSMUST,
    L_ENTERGRP,
    L_SITEHERE,
    L_MAXCONNSHERE2,
    L_USEDEFGRPHERE,
    L_ASKUSER,
    L_DONTASKAGAIN,
    L_WRITEERR,
    L_FILEEXISTSWHATTODO,
    L_DONTASKAGAINHERE,
    L_REWRITEHERE,
    L_RENAMEHERE,
    L_RESUMEHERE,
    L_STOPHERE,
    L_YES,
    L_NO,
    L_DOWNLOAD2,
    L_WBDELETED,
    L_LOGINREQENTERLOGIN,
    L_LOGINTO,
    L_SENDLOGIN,
    L_DONTCONNECTTOSERV,
    L_SIZECHANGEDWTD,
    L_RESTARTHERE,
    L_ADJUSTHERE,
    L_PLEASEWAIT,
    L_TOUPDATE,
    L_DESC,
    L_UPDATEUSING,
    L_CHECKINGUPD,
    L_ALRNEWESTVER,
    L_DOWNLOADING,
    L_VERAVAIL,
    L_FULLDISTR,
    L_UPGTOVER,
    L_UPGTOVER2,
    L_NEEDRESTART,
    L_UPDDONE,
    L_CANTFINDUPDATER,
    L_UPDTYPEHERE,
    L_USINGFULLHERE,
    L_USINGPARTHERE,
    L_UPDHELPHERE,
    L_DESCHERE,
    L_UPDATEHERE,
    L_UPDCANCELHERE,
    L_CREATEDLDS,
    L_SELECTCONTENT,
    L_UNSELECTCONTENT,
    L_LISTOFDLDSHERE,
    L_SELFOLDERHERE,
    L_UNSELFOLDERHERE,
    L_ABOUT2,
    L_COPYRIGHT,
    L_ALLRIGHTS,
    L_LICTO,
    L_ALRUPDATED,
    L_INVLOGIN2,
    L_CANTLOADHIST,
    L_CANTSAVEHIST,
    L_SPIDERDEFSETTINGS,
    L_HTMLSPIDER,
    L_WEBPAGETREE,
    L_DLWEBPAGE,
    L_PROPOFDL,
    L_STARTDL,
    L_STOPDL,
    L_SCHEDULEDL,
    L_DELETE,
    L_OPENWEBPAGE,
    L_STARTDLAUTO,
    L_WEBPAGEURL,
    L_FILES,
    L_DELETEDLSALSO,
    L_CANTLOADWEBPAGES,
    L_CANTSAVEWEBPAGES,
    L_WEBPAGEURLHERE,
    L_STARTWEBPAGEURLHERE,
    L_SAVEDINHERE,
    L_SAVEDIN,
    L_WEBPAGES,
    L_PAGES,
    L_HTMLEXTS,
    L_DLWPSTYLES,
    L_DLWPFROMOTHERSITES,
    L_IMAGES,
    L_DLIMAGES,
    L_DLIMAGESFROMOTHERSITES,
    L_DLDEPTH,
    L_HTMLEXTSHERE,
    L_DLSTYLESHERE,
    L_DLWPFROMHERE,
    L_DLIMAGESHERE,
    L_DLIMAGESFROMHERE,
    L_DLDEPTHHERE,
    L_DLFILES,
    L_DLFILESFROMOTHERSITES,
    L_ELIMINATION,
    L_TURNON,
    L_TODONWLOAD,
    L_DONTDOWNLOAD,
    L_FILESTHISEXTS,
    L_DLFILESHERE,
    L_DLFILESFROMHERE,
    L_ELONHERE,
    L_ELDLHERE,
    L_ELDONTDLHERE,
    L_EXPORTSETTINGS,
    L_IMPORTSETTINGS,
    L_REGEDITRUNFAILED,
    L_FAILEDTOEXPORT,
    L_FAILEDTOIMPORT,
    L_REGFILES,
    L_IMGELIMINATION,
    L_IMGSTHISEXTS,
    L_IMGELONHERE,
    L_IMGELDLHERE,
    L_IMGELDONTDLHERE,
    L_DONTDOWNLOADANDDEL,
    L_NORESUMERESTARTING,
    L_ERROPENURL,
    L_FAILEDTOREG,
    L_THANKSFORREG,
    L_DLTHISIEMENU,
    L_DLPAGEIEMENU,
    L_ADDTOIEMENU,
    L_ADDTOIEMENUHERE,
    L_DETECTACTIVITY,
    L_DECBYLEVEL,
    L_SETTOLIGHT,
    L_DETECTACTIVITYHERE,
    L_DECBYLEVELHERE,
    L_SETTOLIGHTHERE,
    L_VALIDFOR,
    L_VALIDFORSUBDOMAINS,
    L_VALIDHTTPHERE,
    L_VALIDHTTPSHERE,
    L_VALIDFTPHERE,
    L_VALIDSUBDOMAINSHERE,
    L_ENTERATLEAST1PROTOCOL,
    L_MAXDLDS,
    L_MAXDLDSHERE,
    L_RESTARTDL,
    L_ADDONEMORESECT,
    L_DELSECTION,
    L_SHESTOPPED,
    L_DROPBOX,
    L_CANTFINDOPERADIR,
    L_CANTFINDNETSCAPEDIR,
    L_CANTINITOPMONITOR,
    L_CANTDEINITOPMONITOR,
    L_CANTINITNETMONITOR,
    L_CANTDEINITNETMONITOR,
    L_OPERAHERE,
    L_NETSCAPEHERE,
    L_QUERYSIZE,
    L_QUERINGSIZE,
    L_QUERYSIZEHERE,
    L_YESTOALL,
    L_NOTOALL,
    L_DETAILEDLOG,
    L_DETAILEDLOGHERE,
    L_BROWSERRESTARTREQ,
    L_LISTOFTASKS,
    L_LISTOFFILES,
    L_LISTOFSITES,
    L_LISTOFPAGES,
    L_DELETINGDLDS,
    L_BUILDINGLISTOFDLDS,
    L_CREATEBATCHDLD,
    L_DLGFROM,
    L_DLGTO,
    L_DLGSTEP,
    L_DLGWILDBYTES,
    L_SEERESULTS,
    L_DLGSAMPLE,
    L_FROMHERE,
    L_TOHERE,
    L_STEPHERE,
    L_WILDBYTESHERE,
    L_SEERESULTSHERE,
    L_ALLOWIETODL,
    L_ALLOWIEDLHERE,
    L_TOMBGTFROM,
    L_USEBDS,
    L_CREATEEXT,
    L_CREATEEXTHERE,
    L_SHOWSIZESINBYTES,
    L_SIZEINBYTESHERE,
    L_PERFVIRCHECK,
    L_DLGARGUMENTS,
    L_DLGEXTS,
    L_VIRCHECKHERE,
    L_VIRNAMEHERE,
    L_VIRARGSHERE,
    L_VIREXTSHERE,
    L_ENTERAVIRNAME,
    L_NAMEISINVALID,
    L_LAUNCHAVIR,
    L_DISAFTEREXEC,
    L_DELAFTEREXEC,
    L_DISSCHEDHERE,
    L_DELSCHEDHERE,
    L_GO,
    L_BACK,
    L_FILEAUTO,
    L_FILEAUTOHERE,
    L_SAVEUNDERHTM,
    L_USEHTMHERE,
    L_QUERYBATCHSIZEHERE,
    L_KEEPFOLDERSTRUCTURE,
    L_KEEPFOLDERHERE,
    L_SETFOLDERASDEF,
    L_DLDALREXISTS,
    L_LAUNCH,
    L_LAUNCHHERE,
    L_VERSION,
    L_SUPPORTANDOTHER,
    L_DLLATESTVERSION,
    L_LICWARN,
    L_DLALLIEMENU,
    L_ADDLISTOFDOWNLOADS,
    L_DELETESELECTED,
    L_URLLISTHERE,
    L_DELETESELECTEDHERE,
    L_CANTFINDFIREFOXDIR,
    L_CANTINITFIREFOXMONITOR,
    L_CANTDEINITFIREFOXMONITOR,
    L_FIREFOXHERE,
    L_DLSELECTEDIEMENU,
    L_STARTING,
    L_WEBSITES,
    L_ACTIVEDLDS,
    L_THEREARENOACTDLDS,
    L_NOTIFICATIONS,
    L_USEBALLOONS,
    L_TIMEOUT,
    L_USEBALLOONSHERE,
    L_BALLOONTIMEOUTHERE,
    L_MIRRORS,
    L_MIRR_AUTOSEARCH,
    L_MIRR_MAXNUMBER,
    L_MIRR_CALCSPEED,
    L_MIRR_RECALCSPEEDEACH,
    L_MIRR_AUTOHERE,
    L_MIRR_MAXMIRRORSHERE,
    L_MIRR_CALCSPEEDHERE,
    L_MIRR_RECALCSPEEDHERE,
    L_MIRR_DONTSEARCH,
    L_MIRR_DONTSEARCHHERE,
    L_MIRR_DONTIFSIZEUNK,
    L_ADDMIRROR,
    L_FINDMIRROR,
    L_ADDMIRRORHERE,
    L_FINDMIRRORHERE,
    L_MIRRURLS,
    L_SERVSPEED,
    L_ISUSED,
    L_CALCMIRRSSPEED,
    L_CALCMIRRSSPEEDHERE,
    L_DLSINFO,
    L_WAITING,
    L_ENTERMIRRURL,
    L_FILESIZEEXCEEDS2GB,
    L_NEWDOWNLOAD,
    L_GROUPBYEXT,
    L_SETGROUPTO,
    L_SAVEDLTOGRPFOLDER,
    L_GROUPBYEXTHERE,
    L_SETGROUPTOHERE,
    L_SAVEDLTOGRPFOLDERHERE,
    L_SAVETOHERE,
    L_SILENTMONITORING,
    L_SILENTMONITORINGHERE,
    L_CUSTOMIZE,
    L_CUSTOMIZEIEMENUHERE,
    L_CUSTOMIZEIEMENU,
    L_ATLEAST1MENUITEMMUSTBESELECTED,
    L_USESOUNDS,
    L_USESOUNDSHERE,
    L_CUSTOMIZESOUNDSHERE,
    L_CUSTOMIZESOUNDS,
    L_SETSOUND,
    L_REMOVE,
    L_TEST,
    L_SNDEVENTSHERE,
    L_DLADDEDHERE,
    L_DLCOMPLETEDHERE,
    L_DLFAILEDHERE,
    L_DIALOKHERE,
    L_DIALFAILEDHERE,
    L_SETSOUNDHERE,
    L_REMOVESOUNDHERE,
    L_TESTSOUNDHERE,
    L_EVENT,
    L_SOUND,
    L_NOSOUND,
    L_DOWNLOADADDED,
    L_DOWNLOADCOMPLETE,
    L_DOWNLOADFAILED,
    L_DIALINGSUCCEDED,
    L_DIALINGFAILED,
    L_SOUNDFILES,
    L_SEARCHINGFORMIRRORS,
    L_CALCULATINGMIRRORSSPEED,
    L_MIRRSEARCHPERFORMEDALREADY,
    L_CONNECTINGSEARCHSERVER,
    L_GETTINGRESULTS,
    L_NMIRRORSFOUND,
    L_MIRRORSEARCHINGDONE,
    L_TRYINGANOTHERMIRROR,
    L_NOMIRRORSFOUND,
    L_FAILED,
    L_MIRRORSSPEEDWASMEASURED,
    L_HISTORY,
    L_SAVEHISTOFLINKSANDFOLDERS,
    L_SAVEFOLDERSHISTONLY,
    L_DELRECTHATEXISTS,
    L_MAXRECORDS,
    L_CLEARHISTORY,
    L_USEHISTHERE,
    L_FOLDERSONLYHERE,
    L_DELRECTHATEXISTSHERE,
    L_HISTMAXNUMBERHERE,
    L_CLEARHISTORYHERE,
    L_IMPORT,
    L_EXPORT,
    L_IMPORTLISTOFDLDS,
    L_EXPORTLISTOFDLDS,
    L_TEXTFILES,                                                                                                                      
    L_CANTOPENFILE,
    L_EXPALLDLDS,
    L_EXPDLDSINLIST,
    L_EXPSELDLDS,
    L_DONTEXPCOMPLDLDS,
    L_APPENDIFFILEEXISTS,
    L_INVALIDGROUPNAME,
    L_EXITWHENDONE,
    L_ADDED,
    L_SAVEDTO,
    L_DELETED,
    L_PROPERTIES,
    L_CLEARDELETED,
    L_DONTUSEDELETED,
    L_MAXDELETED,
    L_DOWNLOADS_,
    L_BYPASSCOMPLETED,
    L_CONFIRMDLDELETION,
    L_DELETEDPROPERTIES,
    L_DONTUSEDELETEDHERE,
    L_MAXDELETEDHERE,
    L_MAXDELETEDVALHERE,
    L_BYPASSCOMPLETEDHERE,
    L_CONFIRMDLDDELETIONHERE,
    L_RESTORE,
    L_RESTORINGDLDS,
    L_TODAY,
    L_YESTERDAY,
    L_LASTWEEK,
    L_LASTMONTH,
    L_CUSTOMttt,
    L_CLEARHISTORY2,
    L_SAVEDLHIST,
    L_DLHISTCOMPONLY,
    L_USEDLHISTHERE,
    L_DLHISTCOMPONLYHERE,
    L_DLHISTSETTINGS,
    L_BUILDINGLISTOFHISTORY,
    L_WASDELETED_,
    L_CHOOSETIMERANGE,
    L_FIND,
    L_FINDNEXT,
    L_FINDWHAT,
    L_SEARCHIN,
    L_LOCFILENAME,
    L_FINDWHATHERE,
    L_SEARCHIN_FILENAMEHERE,
    L_SEARCHIN_URLHERE,
    L_SEARCHIN_COMMENTHERE,
    L_SEARCHIN_LOCALFILENAMEHERE,
    L_SEARCHADVANCEDHERE,
    L_FINDWHERE,
    L_FINDINLISTOFDLDS,
    L_FINDINHISTOFDLDS,
    L_FINDUSETIME,
    L_SETTIME,
    L_FINDINDELETED,
    L_FINDUSESIZE,
    L_MAXIMAL,
    L_MINIMAL,
    L_FINDLISTOFDLDSHERE,
    L_FINDHISTOFDLDSHERE,
    L_FINDUSETIMEHERE,
    L_FINDSETTIMEHERE,
    L_FINDDELETEDHERE,
    L_FINDUSESIZEHERE,
    L_FINDMINSIZEHERE,
    L_FINDMAXSIZEHERE,
    L_FINDINGROUP,
    L_FINDINGROUPHERE,
    L_SEARCHISPERFORMED,
    L_THEREISNOITEMS,
    L_THEREISNOMOREITEMS,
    L_FINDDONE,
    L_URLTOCLIPBOARD,
    L_ZIPPREVIEW,
    L_SELECTATLEAST1FILE,
    L_ZIPDETECTED,
    L_VIDEOPREVIEW,
    L_FAILEDTOOPENFILE,
    L_UNKMEDIATYPE,
    L_NEEDDX8ORBETTER,
    L_MEDIAINFO,
    L_DLGSIZE,
    L_DLGAVAILABLE,
    L_DLGDURATION,
    L_MUTE,
    L_PLAY,
    L_PAUSE,
    L_FILTER,
    L_EXTS_EG,
    L_REMOVEEXTS,
    L_LEAVEEXTS,
    L_ARGSHAVNTFILEMACRO,
    L_CONTINUEANYWAY,
    L_WARNING,
    L_USEHIDDENATTRIB,
    L_APPENDCOMMENT,
    L_DONTSTOREPAGES,
    L_DONTSTOREPAGESHERE,
    L_USEZIPPREVIEW,
    L_USEZIPPREVIEWHERE,
    L_DLGVOLUME,
    L_STARTDLDAUTOMATICALLY,
    L_DLDAUTOSTARTHERE,
    L_CHECKFILESTODL,
    L_MIRRORSHERE,
    L_DONTPREVIEWINFUTURE,
    L_YOUTURNEDOFFPREVIEW,
    L_IGNORELIST,
    L_IGNORELISTHERE,
    L_SUBFOLDERS,
    L_ADD,
    L_IGNORESUBFOLDERS,
    L_USEROLLBACK,
    L_ROLLBACKSIZE,
    L_BYTES,
    L_USEROLLBACKHERE,
    L_ROLLBACKSIZEHERE,
    L_DONTMONSMALL,
    L_DONTMONSMALLHERE,
    L_KBYTES,
    L_RBTOOLARGE,
    L_DONTCHECKAGAIN,
    L_HISTTOOLARGE,
    L_DOUBTFULRANGESRESPONSE,
    L_COPYTOCB,
    L_SKINS,
    L_SKIN,
    L_SKIN_ALLOWICONS,
    L_SKIN_ALLOWBITMAPS,
    L_USEDEFAULT,
    L_AFTERRESTART,
    L_SHOWDLDSINFOWHILEDOWNLOADING,
    L_SKIPFILESWITHEXTS,
    L_SKIPFILESWITHEXTSHERE,
    L_NOACTIVEDOWNLOADS,
    L_NOACTIVEDOWNLOADSSNDHERE,
    L_IMPORTURLSFROMCLIPBOARD,
    L_PASSWORDS,
    L_OPTIONS_SM,
    L_SAVEPASSWORD,
    L_SAVEPASSWORD_0,
    L_SAVEPASSWORD_1,
    L_DONTSUGGESTTOSAVEPWDS,
    L_USESMTOSTOREPWDS,
    L_ASKMETOSAVEPWDS,
    L_DONTASKMETOSAVEPWDS,
    L_DELPWDSBEFOREEXIT,
    L_DELETEALLPWDS,
    L_SPIDER_DELCOMPLETED,
    L_SPIDER_DELCOMPLETEDHERE,
    L_RESTARTISREQ,
    L_NEWSTYLE,
    L_OLDSTYLE,
    L_INVALIDDIRNAME,
    L_FLTWNDSHIDEINFSMODE,
    L_FLTWNDSHIDEINFSMODEHERE,
    L_WASSCHEDULEDTOLAUNCH,
    L_DOYOUWANTTOLAUNCHIT,
    L_LAUNCHWHENDONE,
    L_USEBDS2,
    L_MIRRSERVER,
    L_HIBERNATE,
    L_STANDBY,
    L_REMEMBERMYCHOICE,
    L_SUGGESTTOCHANGEDEFFOLDER,
    L_SAVEFILE,
    L_OPENFILE,
    L_SAVEFILEANDOPENIT,
    L_DLDTYPE,
    L_PLACELINKTOFDM,
    L_PLACELINKTOFDM2,
    L_SPREADHELPDLG_TEXT1,
    L_SPREADHELPDLG_TEXT2,
    L_SPREADHELPDLG_TEXT3,
    L_SPREADHELPDLG_TEXT4,
    L_REMIND_IN3DAYS,
    L_REMIND_NEXTSTART,
    L_DONTSHOWTHISWINDOWAGAIN,
    L_VIEWLINKHTMLCODE,
    L_LINKHTMLCODE,
    L_MOREEXAMPLES,
    L_COPYTOCLIPBOARD,
    L_HIDE,
    L_TUMCHANGED,
    L_TUMCHANGED_TOP,
    L_TUM_HEAVY_DESC,
    L_TUM_MEDIUM_DESC,
    L_TUM_LIGHT_DESC,
    L_RENAMEATRESTARTALSO,
    L_ENTERLESS,
    L_URLLISTFILES,
    L_DLINFOLISTFILES,
    L_EXPORTOPTIONS,
    L_RETRDATEFROMSERVER,
    L_RETRDATEFROMSERVER_HERE,
    L_GENERATEDESCFILE,
    L_GENERATEDESCFILE_HERE,
    L_THISFILEWASDLDEDFROM,
    L_DONTRETRFILEDATEFROMSERV,
    L_DONTRETRFILEDATEFROMSERV_HERE,
    L_DONTSAVELOGS,
    L_DONTSAVELOGS_HERE,
    L_EXPORTDLHIST,
    L_EXPORTALLENTRIES,
    L_EXPORTALLENTRIESINLIST,
    L_EXPORTSELECTEDENTRIES,
    L_EXPORTCOMPENTRIESONLY,
    L_HTMLFILES,
    L_FDMHIST,
    L_URLOFDOWNLOAD,
    L_DLDEDTOFILE,
    L_SIZEOFFILE,
    L_DLDWASCOMPLETED,
    L_DLDWASDELETED,
    L_SAVEDINFILE,
    L_FILESIZE,
    L_RESUMESUPPORT,
    L_CLOSEWINDOWWHENDONE,
    L_OPEN,
    L_DOYOUWANTTOSEETHISWNDAGAIN,
    L_YESIWANTTOSEE,
    L_NOIDONTWANTTOSEE,
    L_YESBUTNOFORTHISDLD,
    L_DLDWBDELETEDFROMDISK,
    L_CHOOSEGROUP,
    L_SETGRPROOTFOLDER,
    L_SELECTGRPSROOTFLDR,
    L_LASTDOWNLOADEDFILES,
    L_EMPTY,
    L_PAUSEALLDOWNLOADS,
    L_SHOWDLDDLG,
    L_SHOWDLDDLG_HERE,
    L_TOUTSFORCONFS,
    L_LAUNCHDLD,
    L_ASKFORST,
    L_HANGUP_TOUT_HERE,
    L_EXIT_TOUT_HERE,
    L_SHUTDOWN_TOUT_HERE,
    L_LAUNCHDLD_HERE,
    L_ASKFORST_HERE,
    L_DONTASKFORCONF,
    L_N_SECONDS,
    L_DISABLECONFTIMEOUT,
    L_DONTDLDTHISPATH,
    L_DLDTHISPATHONLY,
    L_INCLUDINGSUBFOLDERS,
    L_IGNOREPATH_HERE,
    L_THISPATHONLY_HERE,
    L_INCLUDINGSUBFOLDERS_HERE,
    L_FOLDERURL_HERE,
    L_TYPE,
    L_IGNORE,
    L_ONLY,
    L_SETOFNUMBERS,
    L_ASSIGN,
    L_SETOFNUMBERS_HERE,
    L_ASSIGNSETOFNUMBERS_HERE,
    L_SINGLENUMBER,
    L_NUMBER,
    L_ASSIGNSETOFNUMBERS,
    L_SYNTAXERROR,
    L_EXTRACTARCHIVE,
    L_EXTRACT,
    L_EXTRACTION,
    L_DSTFOLDER,
    L_UNSUPPARCFMT,
    L_SBTOTALTRAFFIC,
    L_TOTALSPEED,
    L_DISABLEWHENDONEAFTEREXEC,
    L_DISABLEWHENDONEAFTEREXEC_HERE,
    L_UNPACK_EXISTSALREADYMSG,
    L_YESFORALL,
    L_SKIP,
    L_SKIPALL,
    L_ARCFMTISUNKN,
    L_VISITWEBSITE,
    L_INSTALLPACK,
    L_ADDPACKCANBEINSTALLED_MSG,
    L_ARCPACK,
    L_MOVEUP,
    L_MOVEDOWN,
    L_MOVEDLDUP,
    L_MOVEDLDDOWN,
    L_CHECKFILEINTEGRITY,
    L_CHECKINTEGRITY_INFOMSG,
    L_ALGORITHM,
    L_CHECKSUM,
    L_PASTEFROMCLIPBOARD,
    L_CHECK,
    L_CALCULATINGCHECKSUM,
    L_CFI_SUCCEEDED,
    L_CFI_FAILED,
    L_CFI_RESULTMSG_OK,
    L_CFI_RESULTMSG_ERR,
    L_CFI_NEVERSHOWIFOK,
    L_FAILEDTOFOUNDTHISAVIRTRYSPECIFYMANUALLY,
    L_FILESIZESARENOTEQUAL,
    L_DLG_SAVE_AS_TEMPLATE,
    L_INVALID_SAVE_AS_TEMPLATE,
    L_WHENDONE,
    L_WHENDONE_2,
    L_APPLICATIONS,
    L_WHATISTHIS,
    L_OPINIONS,
    L_DEARFOLK,
    L_SHDLG_M1,
    L_SHDLG_M2,
    L_SHDLG_M3,
    L_FDMBUZZ,
    L_SHDLG_M4,
    L_BLOG,
    L_SHDLG_M5,
    L_SHDLG_DONTSHOWAGAIN,
    L_JOINBUZZ,
    L_NOTHANKYOU,
    L_FDMCOMMUNITY,
    L_SWITCHTOOPINIONS,
    L_SWITCHTOOPINIONS_HERE,
    L_MODIFYIEUSERAGENT,
    L_MODIFYIEUSERAGENT_HERE,
    L_IS_MALICIOUS,
    L_IS_MALICIOUS_HERE,
    L_THEREARENOMALOPINIONS,
    L_THEREAREMALOPINIONS,
    L_CHECKNEWDLDIFITISMALICIOUS,
    L_CHECKNEWDLDIFITISMALICIOUS_HERE,
    L_DISPLAYOPINIONSWHENDOWNLOADING,
    L_DISPLAYOPINIONSWHENDOWNLOADING_HERE,
    L_CHECKINGIFDLDISMAL,
    L_THEREARENOMALOPINIONS2,
    L_THTREAREMALOPINIONS2,
    L_CLOSE,
    L_LOADING,
    L_DONTDOWNLOADTHIS,
    L_USEWRITECACHE,
    L_USEWRITECACHE_HERE,
    L_CANTINITMOZMONITOR,
    L_CANTDEINITMOZMONITOR,
    L_FIREFOXHERE2,
    L_SEAMONKEYHERE,
    L_ALLOWBRTODL,
    L_ALLOWBRDLHERE,
    L_ADDTOBRMENU,
    L_ADDTOBRMENUHERE,
    L_CUSTOMIZEBRMENUHERE,
    L_CANTINITFFMONITOR,
    L_MOVEDLDFILETOFOLDER,
    L_SPEEDISTOOLOW,
    L_RESTARTATLOWSPEED,
    L_RESTARTATLOWSPEED_HERE,
    L_DOYOUWANTTOSEEDLPROGRESSWNDAGAIN,
    L_SERVUNAVAIL,
    L_MOVETOP,
    L_MOVEBOTTOM,
    L_PLACEDLDATTOP,
    L_PLACEDLDATTOPHERE,
    L_FLASHGOTDETECTED,
    L_ENABLE,
    L_DISABLE,
    L_SWITCH,
    L_RAD_INVERT_HERE,
    L_SHDLG_M3_BEFORE_AUG16_2006,
    L_AUTOUPDATE_DLANDINST,
    L_AUTOUPDATE_NOTIFYONLY,
    L_AUTOUPDATE_TURNOFF,
    L_MONITORING_TURNEDON_IN,
    L_DELETERECORD,
    L_ISOKTODELETE,
    L_NOWRITEACCESSTODATAFOLDER,
    L_DROPBOXINTRO,
    L_FDMDROPBOX,
    L_DISABLENOTIFICATIONSFORBATCHDLDS,
    L_DISABLENOTIFICATIONSFORBATCHDLDS_HERE,
    L_SKIPLIST,
    L_SKIPLIST_HERE,
    L_SKIPSERVERS,
    L_SKIPSERVERS_HERE,
    L_VIRCHECKFAILEDLAUNCHDLDANYWAY,
    L_INTEGRITY,
    L_PERFORMINTEGRITYCHECK,
    L_PERFORMINTEGRITYCHECKWHENDONE_HERE,
    L_IFCHECKFAILED,
    L_CHECKSUMOFTHISFILE,
    L_DONOTHING,
    L_ICFR_HERE,
    L_PERFORMINGINTEGRITYCHECK,
    L_INTEGRITYCHECKSUCCEEDED,
    L_INTEGRITYCHECKFAILED,
    L_SPECIFYINTEGRITYALGORITHM,
    L_VALIDCHECKSUM,
    L_RESULTCHECKSUM,
    L_CHECKUNCHECKALL,
    L_MACROSES,
    L_SERVER_MACROS_DESC,
    L_PATHONSERVER_MACROS_DESC,
    L_YEAR_MACROS_DESC,
    L_MONTH_MACROS_DESC,
    L_DAY_MACROS_DESC,
    L_DATE_MACROS_DESC,    
    L_FROMFIREFOX,
    L_FROMFIREFOX_HERE,
    L_USETHISGRP,
    L_SCHEDULE_START,
    L_SCHEDULE_STOP,
    L_SCHEDULE_DLDSTART,
    L_SCHEDULE_DLDSTOP,
    L_TASKS,
    L_PARENT_GROUP,
    L_SETASDEFFORALLGROUPS,
    L_OKTOSETFOLDERASDEFFORGRP,
    L_DELDEADDLDS,
    L_UPLOADS,
    L_UPLOADFILES,
    L_START_UPLOAD,
    L_STOP_UPLOAD,
    L_SCHEDULE_UPLOAD,
    L_MOVEUPLUP,
    L_MOVEUPLDOWN,
    L_UPLOADED,
    L_LISTOFUPLS,
    L_RETRIEVINGDSTUPLURL,
    L_ABORT,
    L_ASATTACHMENT,
    L_ASLINK_ie_UPLOAD,
    L_FOLDER,
    L_ADDFILES,
    L_ADDFOLDER,
    L_BITTORRENT,
    L_ENABLEBTSUPPORT,
    L_LIMIT_UPLOAD_TRAFFIC,
    L_LIMIT_UPLOAD_CONNECTIONS,
    L_USE_PORTS_IN_RANGE_FROM,
    L_TO,
    L_ENABLE_DHT,
    L_ENABLEBT_HERE,
    L_LIMITUPLOADTRAF_HERE,
    L_LIMITUPLOADCONNS_HERE,
    L_BT_USEPORTSINRANGE_HERE,
    L_ENABLEDHT_HERE,
    L_NAME,
    L_TRACKERLOGINREQ,
    L_CREATENEWTORRENTDLD,
    L_FAILEDTOADDTHISTORRENT,
    L_TORRENTFILE,
    L_ENABLEBTISREQ,
    L_MISTAKEINPWD_NEEDRETYPE,
    L_SPECIFYFILESTOUPLOAD,
    L_UPLOAD_PROPERTIES,
    L_METALINK_DETECTED,
    L_BITTORRENT_DETECTED,
    L_FAILED_ACCESS_FILES_ON_DISK,
    L_BT_TRACKER_ANNOUNCE,
    L_BT_TRACKER_ERROR,
    L_BT_TRACKER_OK_RESPONSE,
    L_BT_HASH_FAILED,
    L_GRANTBANDWIDTHFORDLD,
    L_REMOVEFROMAUTOSTART_QUESTION,
    L_COMMUNITYSERVUNAVAIL,
    L_INVFILENAME,
    L_INVFOLDERNAME,
    L_ADJUST_FW,
    L_TRANCPARENCY,
    L_DATA,
    L_KEEPDATAINUSERSFOLDER,
    L_KEEPINTHISFOLDER,
    L_WILLBEAPPLATRESTART,
    L_DLDSHOWPROGRESSDLG,
    L_MAKE_PORTABLE_VER,
    L_PORTABLE_VER_DESC,
    L_INTEGRATION,
    L_ASSOCWITHTORRENT,
    L_ALWAYSUSETHISGRP,
    L_ALWAYSUSESAMEGRPANDAUTOUPDATEOUTFOLDER,
    L_FVDOWNLOADS,
    L_DLFLASHVIDEOIEMENU,
    L_FVDLD_SITEISNOTSUPP,
    L_PASSTODLDS,
    L_FVDLD_DETECTED,
    L_CONVERTING,
    L_CONVERT,
    L_CONVERT_OPTS,
    L_FILE_FORMAT,
    L_VIDEO_SIZE,
    L_QUALITY,
    L_VERYLOW_2,
    L_LOW_2,
    L_NORMAL_2,
    L_AVERAGE_2,
    L_HIGH_2,
    L_VERYHIGH_2,
    L_AVI_USING_MPEG,
    L_AVI_USING_XVID,
    L_DONT_CHANGE,
    L_VIDEO_BITRATE,
    L_AUDIO_BITRATE,
    L_REMEMBER_AS_DEFAULT,
    L_CREATEFVDLD,
    L_USE_AUTO_CONVERT,
    L_SETUPADVOPTIONS,
    L_VIEW_LIST_OF_SUPP_SITES,
    L_E_G,
    L_NEXT_CONNECT_WITH_TRACKER_IN,
    L_PREP_FILES_ONDISK,
    L_STATE,
    L_PREP_FILES_ONDISK_SHORT,
    L_MP4_FORMAT,
    L_MEDIA_PREVIEW_CONVERT,
    L_CONVERT_MEDIA_FILE,
    L_SWITCH_TO_TAB_AUTO,
    L_CONVERTED_OK,
    L_CONVERTED_FAILED,
    L_GRPFORNEWDLD,
    L_INFO_HASH,
    L_PEERS,
    L_CLIENT,
    L_PIECES,
    L_TRACKER,
    L_TRACKER_STATUS,
    L_UPLOAD_SPEED,
    L_BYTES_UPLOADED,
    L_SHARE_RATING,
    L_WASTED_BYTE_COUNT,
    L_TORRENTFILEURL,
    L_AREYOUSURE_WILLSTARTFROM0,
    L_TRAFF_USED_SBTEXT,
    L_TOTAL_SPEED_SBTEXT,
    L_FILESTOUPLOAD,
    L_PKGNAME,
    L_COMPRESS,
    L_SETPWDFORTHISDLD,
    L_RETYPE,
    L_KEEPTHESEFILES,
    L_SUPPOSEDNUMBEROFDLDS,
    L_ADDLINKINOURCAT,
    L_INCADVINFO,
    L_DESCRIPTION,
    L_TAGS,
    L_YOURNAME,
    L_YOUREMAIL,
    L_RCVREMAIL,
    L_LESSTHAN10,
    L_FROM_10_TO_100,
    L_MORE_THAN_100,
    L_2DAYS,
    L_7DAYS,
    L_1MONTH,
    L_NONE,
    L_FAST,
    L_AVERAGE2,
    L_BEST,
    L_UPLOADER_SETTINGS,
    L_INTEGRATE_UPLOADER_TO,
    L_EXPLORERS_CONTEXT_MENU,
    L_EXPLORERS_SENDTO_MENU,
    L_USE_SIMPLE_UPLOAD_MENU,
    L_MINIMUM_SIZE_OF_FILE_TO_UPLOAD,
    L_HTTPPROXYSETTINGS,
    L_UPLOAD_ACTIVATION,
    L_UPLOAD_REQ_ACTIVATION_MSG,
    L_CONNECTING_TO_UPL_SRV,
    L_CONNECTED_TO_UPL_SRV_OK,
    L_UPLOADED_OK,
    L_UPLOAD_STOPPED,
    L_PREP_ZIP_ARCHIVE,
    L_PREP_ZIP_ARCHIVE_FAILED,
    L_PREP_ZIP_ARCHIVE_OK,
    L_SENDING_REQ_TO_SERV,
    L_SENDING_UPL_DETAILS,
    L_UPL_DETAILS_SENT,
    L_FAILED_TO_SEND_UPL_DETAILS,
    L_ACTIVATING_UPL,
    L_ACTIVATING_UPL_OK,
    L_ACTIVATING_UPL_FAILED,
    L_UPL_FILE_WAS_CHANED,
    L_UNEXP_ERR,
    L_CACL_CHECKSUM,
    L_I_AGREE_TO,
    L_TERMS,
    L_YOUSHOULDAGREETOTERMS,
    L_FAILED_CHECK_FOR_UPDATES,
    L_NEWVER_AVAIL_UPDATE_REQ,
    L_UPDATE_REQ,
    L_RESTART_REQ,
    L_OE_ASK_UPLOAD,
    L_ATTACH_TO_LETTER,
    L_UPLOAD_AND_INSERT_LINK,
    L_FAILED_TO_START_UPLOADING,
    L_UPL_RECOMMENDED_MSG,
    L_UPL_IS_RECOMMENDED,
    L_INTEGRATION_SETTINGS,
    L_UPLOAD_DONE_MSG,
    L_TOTAL_SIZE,
    L_OPEN_IN_BROWSER,
    L_FDM_FUMCOREDLL_REQTOUPDATE,
    L_FUM_FUMCOREDLL_REQTOUPDATE,
    L_TOOLONGINPUT,
    L_UPLMGRINTEGRSTGS,
    L_FUM_INTEGRATION_SETTINGS,
    L_UPLOAD,
    L_DOWNLOADING_UPDATE,
    L_ENABLE_SEEDING,
    L_DISABLE_SEEDING_BYDEF,
    L_CONSIDER_DLD_AS_MAL_IF_MIN_0,
    L_CONSIDER_DLD_AS_MAL_IF_MIN_1,
    L_NO_USERS_MAL_REPS,
    L_DLD_NO_USERS_MAL_REPS,
    L_STARTDRIVELETTER,
    L_INST_MEDIA_FEATURES,
    L_INST_BT_SUPPORT,
    L_FDMDATAFILESDESC,
    L_COPYDATAFILESNOW,
    L_ALLGRPSFLDRSWBCHANGEDTOTHISFLDR,
    L_SETDEFDLDFLDR,
    L_PREVENT_STANDBY_WHILE_DLDING,
    L_MAXHALFCONNS,
    L_TORRENTS,
    L_BT_FILE_ERROR,
    L_RATIO,
    L_LISTOFTORRENTS,
    L_BTDLD_ADDFROMURL,
    L_BTDLD_ADDFROMFILE,
    L_BTDLD_CREATENEWTORRENT,
    L_AUTO_WQ,
    L_SOURCE,
    L_PIECE_SIZE,
    L_TRACKERS,
    L_ADD_TRACKER,
    L_REMOVE_TRACKER,
    L_START_SEEDING_TORRENT,
    L_SAVE,
    L_CREATE_NEW_TORRENT,
    L_TORRENT_FILES,
    L_PRIORITY,
    L_PRIORITY_SKIP,
    L_PRIORITY_NORMAL,
    L_PRIORITY_HIGH,
    L_FLOATING_WINDOWS,
    L_IT_IS_SERVICE_FILES,
    L_SITESDLD_DEFSTGS,
    L_PAUSEALLDLDSMODE_ON_MSG,
    L_SEEDING,
    L_ENABLE_SEEDING_HR,
    L_UNLIMITED_SEEDING,
    L_LIMIT_BY_RATIO,
    L_SEED_UNTIL_RATIO_WILL_BE,
    L_LIMIT_BY_TIME,
    L_SEED_DURING,
    L_CHECKDLDWITHSAMEURLEXISTS,
    L_SAVEDLDSHIST,
    L_LISTRECENTDLDS,
    L_BTDLD_DEFSTGS,
    L_RESTARTCOMPLDLDS,
    L_SPECIFYFFPORTVERFOLDER,
    L_CANTFINDSAFARIDIR,
    L_CANTFINDCHROMEDIR,
    L_CANTINITSAFARIMONITOR,
    L_CANTDEINITSAFARIMONITOR,
    L_CANTINITCHROMEMONITOR,
    L_CANTDEINITCHROMEMONITOR,
    L_TIME_LIMIT,
    L_HR,
    L_LIMITSTARTDLDSTIME,
    L_ALLOWSTARTONLYFROM,
    L_NORMAL_PRIORITY,
    L_HIGH_PRIORITY,
    L_ESSENTIAL,
    L_NOTIMEOUTFORONDONEBALLOON,
    L_CHECKIFDLDISMIRROPTION,
    L_USE_ONDONE_WNDS,
    L_SET_TIMEOUT_FOR_ONDONE_WNDS,
    L_PI_LIKE_FDM_TRYPI,
    L_PI_ABOUT_0,
    L_PI_ABOUT_1,
    L_FAVORITE_SITES,
    L_PI_ABOUT_2,
    L_WHATIS_FAVSITES,
    L_PI_SURETOCANCEL,
    L_STILL_CANCEL,
    L_PROCEED,
    L_DO_YOU_WANT_US_TO_REMIND,
    L_TITLE,
    L_FLV_ENABLEMONITORING,
    L_FLV_MONITOR_WARNING,
    L_WEBPAGE,
    L_FLVFOUNDONTHISPAGE,
    L_ENABLE_FLVMONITORING_FIRST,
    L_CREATEFLVDLD_FROM_WPURL_NOTE,
    L_SEARCHING_FLVS,
    L_NOFLVSFOUND,
    L_ERRGETFLVDLDS,
    L_ERROR,
    L_SHOWDOWNLOADITBTN,
    L_IE_ONLY,
    L_FLVWEBPAGENOTFOUND,
    L_FLASH_VIDEO,
    L_LIMIT_CONNECTIONS,
    L_OKTODISABLETIPS,
    L_SHOWTIPS,
    L_FILESIGNCHECK_FAILED,
    L_IE_AND_FF_ONLY,
    L_SHOWDOWNLOADITBTN_,
    L_FLVSNIFFMODULE_NOTFOUND,
    L_FAILEDTRANSFERDLDSTOFDM,
    L_DOWNLOAD_IT,
    L_SHOW_THIS_BUTTON,
    L_NODLDSTOEXPORT,
    L_NOTHINGTOEXPORT,
    L_AFTERSILENTCREATION,
    L_ELREQ_MONITORING,
    L_FAILED_ENDIS_MONITORING,
    L_NOT_ENOUGH_RIGHTS,
    L_ELREQ_EXPORTIMPORT_STGS,
    L_DLBYFDM,
    L_PERC_DOWNLOADED_INTOTAL,
    L_LEFT_TO_DOWNLOAD_AT,
	L_PATHTOPROFILE,
	L_FILE_IMPORT_MTORRENT,
	L_UTORRENT_SAVEFOLDER_NOTFOUND,
	L_CONFIRM_IMPORT_MTORRENT,
	L_IMPORT_MTORRENT_INFO,
	L_FILE_IMPORT_OTHER_CLIENTS,
	L_FILE_IMPORT_OTHER_CLIENTS_ORBIT_DOWNLOADER,
	L_FILE_IMPORT_OTHER_CLIENTS_LEECHGET,
	L_CANT_FIND_PATH_TO_ORBIT_APPDATA,
	L_CANT_DETECT_PATH_TO_ORBIT_APPDATA,
	L_ERROR_CODE_FMT,
	L_SYS_DIAGNOSTICS_FMT,
	L_CANT_FIND_ORBIT_DOWNLOAD_LIST,
	L_CANT_READ_ORBIT_DOWNLOAD_LIST,
	L_CANT_PARSE_ORBIT_DOWNLOAD_LIST,
	L_CANT_CFG_DLDS_BY_IMPORTED_PATH_FNAME_URL,
	L_CANT_IMPORT_DOWNLODS,
	L_EMPTY_ORBIT_DOWNLOAD_LIST,
	L_ORBIT_DOWNLOADER_ISNT_INSTALLED,
	L_DOWNLOADS_IMPORT_HAS_BEEN_STOPPED,
	L_REQUEST_TO_CONTINUE_IMPORT,
	L_PROCESSED_LABEL,
	L_SUCCESSFUL_LABEL,
	L_FAILED_LABEL,
	L_UNPROCESSED_LABEL,
	L_TOTAL_LABEL,
	L_UTORRENT_MANAGER,
	L_UNDEFINED_IMPORT_RESULT,
	L_PART_OF_TOTAL_FMT,
	L_IMPORT_WIZARD_CHOOSE_MANAGERS_HEADER,
	L_CONFIRM_IMPORT_FROM_OTHER_MANAGERS,
	L_DETAILS_FMT,
	L_CANNOT_PROCESS_PEER_ALERT,
        L_ERROR_LOADING_DOWNLOADS__CANCEL_TO_EXIT,
        L_INVALID_BT_MODULE,
        L_N_PEERS_RECEIVED,
        L_SUCHTORRENTEXISTSALREADY,
        L_ELREQ_APPLYSETTINGS,
        L_DETERMINE_AUTOMATICALLY,
        L_CHOOSE__GOESDLG,
        L_CONNECTION_SPEED,
        L_STGS_FOR_TUMS,
        L_PERCOFCONNSPEED,
        L_MANAGE_AUTOMATICALLY,
        L_SETTO,
        L_CONNECTIONSPEEDINFO_MSG,
        L_DOWNLOADSPEED,
        L_MEASURE_AGAIN,
        L_SPECIFY_VALUE,
        L_VALUE_MUSTBE_SOME_NUMBER_GREATER_OR_EQUAL_TO_ZERO,
        L_SPECIFY_IN_BITS_INSTEAD_OF_BYTES,
        L_CREATETPDLD,
	L_LIVESTREAMING,
	L_RETRY,
	L_ABORTALL,
	L_TRIEDTODMOVE,
	L_UNSUPPORTED_CONTENT_ENCODING,
	L_FLV_SELECTALL,
	L_FLV_RESETALL,
	L_IE_INTEGRATION_REQ_ADMIN,
	L_CANT_DEL_BR_PLUG_BR_IS_RUNNING,
	L_CANT_DEL_BR_PLUG_WILL_BE_DEL_AT_REBOOT,
	L_ASSOCWITHMAGNET,
	L_ENABLE_LOCAL_PEERS,
	L_ENABLE_UPNP,
	L_ENABLE_NATPMP
};

#endif