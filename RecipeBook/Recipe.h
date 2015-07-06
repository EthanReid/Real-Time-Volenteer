//
// MBProgressHUD.m
// Version 0.7
// Created by Ethan Reid.
//
#import <Foundation/Foundation.h>
#import <Parse/Parse.h>

@interface Recipe : NSObject

@property (nonatomic, strong) NSString *name; // name of recipe
@property (nonatomic, strong) NSString *prepTime; // preparation time
@property (nonatomic, strong) PFFile *imageFile; // image of recipe
@property (nonatomic, strong) NSArray *ingredients; // ingredients

@end
