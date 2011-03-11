/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class NSArray, NSString, ICSTrigger;

@interface ICSAlarm : ICSComponent  {
}

@property int action;
@property(retain) NSString * x_wr_alarmuid;
@property(retain) ICSTrigger * trigger;
@property(retain) NSString * summary;
@property(retain) NSArray * attendee;
@property(retain) NSArray * attach;
@property(retain) NSString * description;

+ (id)name;
+ (int)actionFromICSString:(id)arg1;
+ (id)ICSStringFromAction:(int)arg1;

- (int)action;
- (void)setAction:(int)arg1;
- (void)fixAlarm;
- (void)setX_wr_alarmuid:(id)arg1;
- (id)x_wr_alarmuid;

@end