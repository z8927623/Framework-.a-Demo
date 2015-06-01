//
//  DetailViewController.h
//  Project
//
//  Created by wildyao on 15/5/24.
//  Copyright (c) 2015年 wildyao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

