/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <MKLocationProviderDelegate>, CLLocationManager, NSBundle, NSLock, NSString;

@interface MKCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MKLocationProvider> {
    NSLock *_authorizationLock;
    id _authorizationRequestBlock;
    int _authorizationStatus;
    CLLocationManager *_clLocationManager;
    <MKLocationProviderDelegate> *_delegate;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    bool_hasQueriedAuthorization;
    bool_locationServicesPreferencesDialogEnabled;
    bool_waitingForAuthorization;
}

@property(readonly) CLLocationManager * _clLocationManager;
@property long long activityType;
@property(readonly) bool airplaneModeBlocksLocation;
@property(copy) id authorizationRequestBlock;
@property(readonly) int authorizationStatus;
@property(copy,readonly) NSString * debugDescription;
@property <MKLocationProviderDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property double desiredAccuracy;
@property double distanceFilter;
@property(retain) NSBundle * effectiveBundle;
@property(copy) NSString * effectiveBundleIdentifier;
@property(readonly) double expectedGpsUpdateInterval;
@property(readonly) unsigned long long hash;
@property int headingOrientation;
@property(readonly) bool isSimulation;
@property(getter=isLocationServicesPreferencesDialogEnabled) bool locationServicesPreferencesDialogEnabled;
@property bool matchInfoEnabled;
@property(readonly) Class superclass;
@property(readonly) bool usesCLMapCorrection;

- (void).cxx_destruct;
- (id)_clLocationManager;
- (void)_createCLLocationManager;
- (void)_resetForNewEffectiveBundle;
- (void)_updateAuthorizationStatus;
- (long long)activityType;
- (bool)airplaneModeBlocksLocation;
- (id)authorizationRequestBlock;
- (int)authorizationStatus;
- (void)dealloc;
- (id)delegate;
- (double)desiredAccuracy;
- (void)dismissHeadingCalibrationDisplay;
- (double)distanceFilter;
- (id)effectiveBundle;
- (id)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (int)headingOrientation;
- (id)init;
- (bool)isLocationServicesPreferencesDialogEnabled;
- (bool)isSimulation;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (bool)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (bool)matchInfoEnabled;
- (void)setActivityType:(long long)arg1;
- (void)setAuthorizationRequestBlock:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setEffectiveBundle:(id)arg1;
- (void)setEffectiveBundleIdentifier:(id)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setLocationServicesPreferencesDialogEnabled:(bool)arg1;
- (void)setMatchInfoEnabled:(bool)arg1;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (bool)usesCLMapCorrection;

@end
