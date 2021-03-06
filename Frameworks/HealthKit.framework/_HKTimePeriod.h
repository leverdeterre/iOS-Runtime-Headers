/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class NSDate;

@interface _HKTimePeriod : NSObject <NSSecureCoding> {
    NSDate *_endDate;
    NSDate *_startDate;
}

@property(readonly) NSDate * endDate;
@property(readonly) NSDate * startDate;

+ (bool)supportsSecureCoding;
+ (id)timePeriodWithStartDate:(id)arg1 endDate:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithStartDate:(id)arg1 endDate:(id)arg2;
- (long long)compareByEndDate:(id)arg1;
- (long long)compareByStartDate:(id)arg1;
- (bool)containsDate:(id)arg1;
- (bool)containsTimePeriod:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (bool)endsBeforeDate:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)overlapsTimePeriod:(id)arg1;
- (id)startDate;
- (bool)startsAfterDate:(id)arg1;

@end
