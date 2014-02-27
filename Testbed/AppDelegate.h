//
//  AppDelegate.h
//  Testbed
//
//  Created by Jesse Feiler on 1/6/12.
//  Copyright (c) 2012 Champlain Arts Corp. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSTextField *myTextField;

@end
