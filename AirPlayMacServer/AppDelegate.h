//
//  AppDelegate.h
//  AirPlayMacServer
//
//  Created by Alex Corre on 7/19/13.
//  Copyright (c) 2013 Alex Corre. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (nonatomic, strong) NSStatusItem *statusItem;
@property (nonatomic, strong) IBOutlet NSMenu *barMenu;


/**
 * setupNavigationItem
 *
 * !Sets up the navigation menu and adds it to the navigation bar
 */
- (void)setupNavigationItem;

/**
 * startServer
 *
 * !Sets up the navigation menu and adds it to the navigation bar
 */
- (IBAction)startServer:(id)sender;

/**
 * stopServer
 *
 * !Sets up the navigation menu and adds it to the navigation bar
 */
- (IBAction)stopServer:(id)sender;

@end
