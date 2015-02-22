//
//  DBAccess.h
//  catalog
//
//  Created by Granville on 2/21/15.
//  Copyright (c) 2015 Granville. All rights reserved.
//

#import <Foundation/Foundation.h>

// Going to use sqlLite Library and Product Class
#import <sqlite3.h>
#import "Product.h"

@interface DBAccess : NSObject {
    
}

-(NSMutableArray *)getAllProducts;
-(void)closeDatabase;
-(void)initalizeDatabase;

@end
