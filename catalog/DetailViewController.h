//
//  DetailViewController.h
//  catalog
//
//  Created by Granville on 2/21/15.
//  Copyright (c) 2015 Granville. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
