/*
        DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                    Version 2, December 2004

 Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>

 Everyone is permitted to copy and distribute verbatim or modified
 copies of this license document, and changing it is allowed as long
 as the name is changed.

            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

  0. You just DO WHAT THE FUCK YOU WANT TO.
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/param.h>

#include "json_entries_parse.h"
#include "http_request.h"
#include "configmanager.h"

//#include "entries_parse.h"
#include "json_common.h"

//static void WBReadDownloadedJsonEntries(const char* jsoncontent) {
//
//    int i;
//    WBEntry* entries = JsonGetEntries(jsoncontent);
//
//    // Clean all created_at string
//    for (i = 0; i < MAXIMUM_ENTRIES; ++i) {
//        if (0 == entries[i].id) { break; }
//
//        free(entries[i].created_at);
//    }
//
//    free(entries);
//}

//static void _WBReadJsonEntries(const char* filename) {
//    char* jsoncontent;
//
//    jsoncontent = WBReadConfigFile(filename);
//    WBReadDownloadedJsonEntries(jsoncontent);
//
//    free(jsoncontent);
//}
