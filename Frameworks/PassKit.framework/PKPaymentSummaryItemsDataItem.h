/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSArray, NSDecimalNumber, NSString;

@interface PKPaymentSummaryItemsDataItem : PKPaymentDataItem {
}

@property(readonly) NSString * currencyCode;
@property(readonly) NSArray * paymentSummaryItems;
@property(readonly) NSDecimalNumber * transactionAmount;

+ (long long)dataType;

- (id)currencyCode;
- (bool)isValidWithError:(id*)arg1;
- (id)paymentSummaryItems;
- (id)transactionAmount;

@end
