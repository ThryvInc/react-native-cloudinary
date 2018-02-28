// import RCTBridgeModule
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
#import <Cloudinary/Cloudinary-Swift.h>

@interface RNCloudinary : RCTEventEmitter <RCTBridgeModule>
@property (nonatomic, readwrite) CLDCloudinary *cloudinary;
@property (nonatomic, readwrite) NSString *presetName;
@property (nonatomic) BOOL hasListeners;
@end
