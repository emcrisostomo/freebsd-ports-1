--- src/libchipcard/cards/hbcicard.cpp.orig	Mon Dec 29 10:58:25 2003
+++ src/libchipcard/cards/hbcicard.cpp	Mon Dec 29 10:59:41 2003
@@ -401,8 +401,8 @@
     string id;
     string fcp;
     CTError err;
-    unsigned char id1[9]={{0xd2},{0x76},{0x00},{0x00},{0x25},{0x48},{0x42},{0x01},{0x00}};
-    unsigned char id2[9]={{0xd2},{0x76},{0x00},{0x00},{0x25},{0x48},{0x42},{0x02},{0x00}};
+    unsigned char id1[9]={0xd2,0x76,0x00,0x00,0x25,0x48,0x42,0x01,0x00};
+    unsigned char id2[9]={0xd2,0x76,0x00,0x00,0x25,0x48,0x42,0x02,0x00};
 
 #if DEBUGMODE>15
     fprintf(stderr,"LIBCHIPCARD: Checking type.\n");
