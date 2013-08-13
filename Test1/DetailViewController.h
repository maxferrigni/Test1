//
//  DetailViewController.h
//  Test1
//
//  Created by Max on 8/12/13.
//  Copyright (c) 2013 Max. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
