//
//  DrinkDetailViewController.h
//  DrinkMixer
//
//  Created by Dan Pilone on 12/14/10.
//  Copyright 2010 Element 84, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface DrinkDetailViewController : UIViewController {
@private
	UITextField *nameTextField_;
	UITextView *ingredientsTextView_;
	UITextView *directionsTextView_;
}

@property (nonatomic, retain) IBOutlet UITextField *nameTextField;
@property (nonatomic, retain) IBOutlet UITextView *ingredientsTextView;
@property (nonatomic, retain) IBOutlet UITextView *directionsTextView;

@end
