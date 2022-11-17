#ifdef __cplusplus
#import "react-native-snap-video.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNSnapVideoSpec.h"

@interface SnapVideo : NSObject <NativeSnapVideoSpec>
#else
#import <React/RCTBridgeModule.h>

@interface SnapVideo : NSObject <RCTBridgeModule>
#endif

@end
