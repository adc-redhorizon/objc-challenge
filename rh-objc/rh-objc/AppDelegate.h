//
//  AppDelegate.h
//  rh-objc
//
//  Created by aditya kamini on 5/22/17.
//  Copyright © 2017 aditya kamini. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

