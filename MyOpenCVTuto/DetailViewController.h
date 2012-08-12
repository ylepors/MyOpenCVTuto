//
//  DetailViewController.h
//  MyOpenCVTuto
//
//  Created by Yves Le Pors on 12/08/12.
//  Copyright (c) 2012 Yves Le Pors. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
