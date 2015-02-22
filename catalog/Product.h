//
//  Product.h
//  catalog
//
//  Created by Granville on 2/21/15.
//  Copyright (c) 2015 Granville. All rights reserved.
//  Added stuff for git code - do not understand

#import <Foundation/Foundation.h>

@interface Product : NSObject {
    int ID;
    NSString *name;
    NSString *manufacturer;
    NSString *details;
    float price;
    int quantity;
    NSString *countryOfOrigin;
    NSString *image;
}
@property(nonatomic)int ID;
@property(retain, nonatomic)NSString *name;
@property(retain, nonatomic)NSString *manufacturer;
@property(retain, nonatomic)NSString *details;
@property(nonatomic) float price;
@property(nonatomic) int quantity;
@property(retain, nonatomic)NSString *countryOfOrigin;
@property(retain, nonatomic)NSString *image;

@end
