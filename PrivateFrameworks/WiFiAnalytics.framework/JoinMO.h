/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

@interface JoinMO : NSManagedObject

@property (nonatomic) short autojoinPhase;
@property (nonatomic, retain) BSSMO *bss;
@property (nonatomic) short cca;
@property (nonatomic, retain) NSObject *channelsScanned;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) int dhcpLatencyMs;
@property (nonatomic) int dhcpLeaseMins;
@property (nonatomic) bool dhcpSuccess;
@property (nonatomic) bool isAutojoin;
@property (nonatomic) short motionState;
@property (nonatomic) int reason;
@property (nonatomic) short rssi;
@property (nonatomic) short snr;
@property (nonatomic) int status;
@property (nonatomic) int subreason;
@property (nonatomic) bool success;

+ (id)entityName;
+ (id)fetchRequest;

@end
