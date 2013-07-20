//
//  AppDelegate.m
//  AirPlayMacServer
//
//  Created by Alex Corre on 7/19/13.
//  Copyright (c) 2013 Alex Corre. All rights reserved.
//

#import "AppDelegate.h"

@implementation AppDelegate

- (void)awakeFromNib {
  // Insert code here to initialize your application
  [self setupNavigationItem];
}

- (void)setupNavigationItem {
  NSStatusBar *bar = [NSStatusBar systemStatusBar];
  self.statusItem = [bar statusItemWithLength:NSVariableStatusItemLength];
  
  [self.statusItem setTitle: @"Server"];
  
  [self.statusItem setMenu:self.barMenu];
  [self.statusItem setHighlightMode:YES];
}

- (IBAction)startServer:(id)sender {
  NSLog(@"starting server...");
}

- (IBAction)stopServer:(id)sender {
  NSLog(@"stopping server...");
}



@end
