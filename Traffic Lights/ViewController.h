//
//  ViewController.h
//  Traffic Lights
//
//  Created by Rently Coimbatore on 17/08/24.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    NSTimer *timer;
    NSTimer *scoreTimer;
    
    int timerInt;
    int scoreInt;
}

@property (weak, nonatomic) IBOutlet UIButton *startButton;
@property (weak, nonatomic) IBOutlet UILabel *scoreLabel;

@property (weak, nonatomic) IBOutlet UIImageView *trafficLight;

- (IBAction)startGame:(id)sender;


@end

