//
//  AppDelegate.h
//  Bouncer
//
//  Created by Nelson Melo on 6/15/11.
//  Copyright nmelolabs.com 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
