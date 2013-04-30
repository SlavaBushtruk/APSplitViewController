//
//  SplitSampleAppDelegate.h
//  SplitSample
//
//  Created by slatvick on 5/1/11.
//  Copyright 2011 Alterplay. All rights reserved.
//

#import <UIKit/UIKit.h>

@class APTabBarControllerForSplitController;

@interface SplitSampleAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {

}

@property (nonatomic, strong) IBOutlet UIWindow *window;

@property (nonatomic, strong) IBOutlet APTabBarControllerForSplitController *tabBarController;

@end
