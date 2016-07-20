//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "NSStreamDelegate.h"
#import "UIAlertViewDelegate.h"

@class EAAccessory, EASession, NSCondition, NSLock, NSMutableArray, NSMutableData, NSString;

@interface BAIDriver_iOS : NSObject <NSStreamDelegate, UIAlertViewDelegate>
{
    EAAccessory *accessory;
    EASession *session;
    NSString *protocolString;
    NSMutableData *inputStreamData;
    unsigned char shouldCancelCommandFlags;
    unsigned char activeCancelFlags;
    BOOL isPaired;
    int maxPacketSendSize;
    int maxSocketSendSize;
    int maxPacketRecvSize;
    int maxSocketRecvSize;
    NSLock *accessoryLock;
    unsigned char hardwareState;
    int active_socket;
    NSCondition *bytesAvailableCondition;
    int bytesAvailableOnAccessory;
    NSMutableData *bytesAvailableLocally;
    NSCondition *communicationCondition;
    unsigned char transmitOptions;
    int communicationConditionSignalSource;
    NSMutableArray *expectedResponses;
    NSMutableArray *receivedExpectedResponses;
    NSLock *communicationLock;
    BOOL connectionAttemptIsHappening;
    id <BAIBluetoothPairingDelegate> pairing_delegate;
    id <BAIBluetoothDeviceDiscoveryDelegate> device_discovery_delegate;
    NSMutableArray *discoveredDeviceArray;
}

@property(readonly) int maxSocketRecvSize; // @synthesize maxSocketRecvSize;
@property(readonly) int maxSocketSendSize; // @synthesize maxSocketSendSize;
- (void)setDeviceDiscoveryDelegate:(id)arg1;
- (unsigned char)startDeviceDiscovery;
- (void)deviceDiscoveryRoutine;
- (void)setPairingDelegate:(id)arg1;
- (unsigned char)pairWithDevice:(char *)arg1;
- (void)pairingRoutine:(id)arg1;
- (unsigned char)deletePairing;
- (int)select:(int)arg1;
- (int)recv:(int)arg1 bytes:(char *)arg2 length:(int)arg3;
- (int)send:(int)arg1 bytes:(const char *)arg2 length:(int)arg3;
- (int)close:(int)arg1;
- (int)connect:(int)arg1;
- (int)socket;
- (unsigned char)setAdapterName:(const char *)arg1 length:(unsigned char)arg2;
- (unsigned char)openSession;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)queryAccessoryStatusInBackground;
- (unsigned char)sendToAccessory:(const char *)arg1 length:(unsigned int)arg2;
- (unsigned char)transmitCommand:(id)arg1 waitOnResponses:(id)arg2 options:(unsigned char)arg3;
- (void)postProcessCommands:(id)arg1;
- (void)readBytesFromInputStream:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)handleOutputStreamEvent:(unsigned int)arg1 stream:(id)arg2;
- (void)handleInputStreamEvent:(unsigned int)arg1 stream:(id)arg2;
- (BOOL)isPaired;
- (id)accessory;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)deviceDidDetach:(id)arg1;
- (void)deviceDidAttach:(id)arg1;
- (void)closeSessionAndForgetAccessory;
- (void)connectWithAccessoryIfValid;
- (void)connectWithAccessoryIfValidAfterDelay;
- (void)registerForNotifications;
- (void)dealloc;
- (id)init;

@end
