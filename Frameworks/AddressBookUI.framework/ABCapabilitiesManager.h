/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableDictionary, NSString;

@interface ABCapabilitiesManager : NSObject <IDSIDQueryControllerDelegate> {
    NSMutableDictionary *_destinationStatus;
    bool_isListeningToIDSQueryController;
    bool_isListeningToIDSServiceAvailability;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (void)_setDefaultCapabilitiesManager:(id)arg1;
+ (id)defaultCapabilitiesManager;

- (bool)_isAppAvailable:(id)arg1;
- (void)_startListeningToIDSIDQueryControllerIfNecessary;
- (void)_startListeningToIDSServiceAvailabilityIfNecessary;
- (void)addIDSServiceAvailabilityListener:(id)arg1 selector:(SEL)arg2;
- (id)conferenceURLForDestinationID:(id)arg1;
- (id)conferenceURLForPhoneNumber:(id)arg1;
- (void)dealloc;
- (bool)hasAdditionalTextTones;
- (bool)hasCameraCapability;
- (bool)hasCellularDataCapability;
- (bool)hasCellularTelephonyCapability;
- (bool)hasCellularTelephonyHardwareCapability;
- (bool)hasPreviouslyConferencedWithID:(id)arg1;
- (bool)hasSMSCapability;
- (bool)hasSiriCapability;
- (bool)hasTelephonyCapability;
- (bool)hasVibratorCapability;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (bool)isConferencingAvailable;
- (bool)isConferencingEverGonnaBeAvailable;
- (bool)isEmailConfigured;
- (bool)isFaceTimeAppAvailable;
- (bool)isFaceTimeAudioAvailable;
- (bool)isMMSConfigured;
- (bool)isMadridConfigured;
- (bool)isMailAppAvailable;
- (bool)isMessagesAppAvailable;
- (bool)isPhoneAppAvailable;
- (bool)isSensitiveUIAllowed;
- (bool)isTwitterServiceAvailable;
- (bool)isWeiboServiceAvailable;
- (void)removeIDSServiceAvailabilityListener:(id)arg1;

@end
