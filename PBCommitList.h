//
//  PBCommitList.h
//  GitX
//
//  Created by Pieter de Bie on 9/11/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <WebKit/WebView.h>
#import "PBGitHistoryController.h"

@class PBWebHistoryController;

// Displays the list of commits. Additional behavior includes special key
// handling and hiliting search results.
// dataSource: PBRefController
// delegate: PBGitHistoryController
@interface PBCommitList : NSTableView {
	IBOutlet WebView* webView;
	IBOutlet PBWebHistoryController *webController;
	IBOutlet PBGitHistoryController *controller;
	IBOutlet PBHistorySearchController *searchController;

    BOOL useAdjustScroll;
	NSPoint mouseDownPoint;
}

@property (readonly) NSPoint mouseDownPoint;
@property (assign) BOOL useAdjustScroll;
@end
