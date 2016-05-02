//
//  DetailViewController.h
//  NASAProject
//
//  Created by kayla on 5/2/16.
//  Copyright © 2016 Kayla Galway. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

