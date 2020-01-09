// Generated by Apple Swift version 5.1.2 (swiftlang-1100.0.278 clang-1100.0.33.9)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Darwin;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="RescueCore",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


/// The <em>RescueBroadcastDelegate</em> protocol defines a set of methods you can use to get notified about broadcast related events.
SWIFT_PROTOCOL("_TtP10RescueCore23RescueBroadcastDelegate_")
@protocol RescueBroadcastDelegate
/// Notify the delegate that the broadcast extension joined the session
- (void)rescueBroadcastDidStart;
/// Notify the delegate that the broadcast extension joined the session
- (void)rescueBroadcastDidStop;
@end

@protocol RescueCameraDelegate;
enum RescueCameraDevice : NSUInteger;
@class UIView;
enum RescueCameraFlash : NSUInteger;

/// The <em>RescueCamera</em> class provides methods and properties to manage camera streaming functionality of the Rescue SDK.
SWIFT_CLASS("_TtC10RescueCore12RescueCamera")
@interface RescueCamera : NSObject
/// Enable camera streaming functionality.
/// If camera streaming functionality is needed during the support session, call this method before starting the session.
/// \param audio Set to <em>true</em> if audio streaming is needed during the support session.
///
- (void)enableWithAudio:(BOOL)audio;
/// Singleton access.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) RescueCamera * _Nonnull sharedInstance;)
+ (RescueCamera * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
/// The object that acts as the delegate of <em>RescueCamera</em>
@property (nonatomic, weak) id <RescueCameraDelegate> _Nullable delegate;
/// The physical camera to use for streaming
/// The value of this property configures which camera of the device should be used for streaming.
@property (nonatomic) enum RescueCameraDevice camera;
/// Start render the camera stream localy for the user.
/// \param view This view will be used to render the camera stream.
///
- (void)startLocalStreamRenderingIn:(UIView * _Nonnull)view;
/// Stop render the camera stream localy for the user.
/// The last rendered frame will be visible in the view after stopping the local rendering.
- (void)stopLocalStreamRendering;
/// Pause the video streaming.
/// Pause sending the video stream to the technician and also pause rendering the stream localy for the user. The function does not effect the streaming of audio.
- (void)pauseStreamingVideo;
/// Resume the video streaming.
/// Resume sending the video stream to the technician and also resume rendering the stream localy for the user. The function does not effect the streaming of audio.
- (void)resumeStreamingVideo;
/// Pause the audio streaming.
/// Pause sending the audio stream to the technician. The function does not effect the streaming of video.
- (void)pauseStreamingAudio;
/// Resume the audio streaming.
/// Resume sending the audio stream to the technician. The function does not effect the streaming of video.
- (void)resumeStreamingAudio;
/// A Bool value indicating whether the sending of the video and/or audio stream started to the technician. (read-only)
@property (nonatomic, readonly) BOOL isStreaming;
/// A Bool value indicating whether the sending and rendering of the camera stream has been frozen by the technician. (read-only)
@property (nonatomic, readonly) BOOL isFrozen;
/// A Bool value indicating whether the sending and rendering of the video stream has been paused by the user. (read-only)
@property (nonatomic, readonly) BOOL isPaused;
/// A Boolean value indicating whether the microphone of device is muted. (read-only)
@property (nonatomic, readonly) BOOL isAudioRecordingMuted;
/// A Bool value indicating whether the device has flashlight. (read-only)
@property (nonatomic, readonly) BOOL hasFlash;
/// Status of the flaslight. (read-only)
@property (nonatomic, readonly) enum RescueCameraFlash flashState;
/// Turn on flashlight on the device.
- (void)turnOnFlash;
/// Turn off flashlight on the device.
- (void)turnOffFlash;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Key-Value Observation
/// Note: It is not intended to call this method directly.
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
/// Key-Value Observation
/// Note: It is not intended to call this method directly.
+ (BOOL)automaticallyNotifiesObserversForKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
@end


/// The <em>RescueCameraDelegate</em> protocol defines a set of optional methods you can use to get notified about camera streaming related events.
/// All of the methods in this protocol are optional.
SWIFT_PROTOCOL("_TtP10RescueCore20RescueCameraDelegate_")
@protocol RescueCameraDelegate
@optional
/// Tells the delegate that the camera streaming has been started.
/// \param audio <em>true</em> if audio is available during streaming, otherwise <em>false</em>
///
- (void)rescueCameraStreamingStartedWithAudio:(BOOL)audio;
/// Tells the delegate that the flashlight has been turned on.
- (void)rescueCameraFlashTurnedOn;
/// Tells the delegate that the flashlight has been turned off.
- (void)rescueCameraFlashTurnedOff;
@end

/// Physical camera on the device device.
typedef SWIFT_ENUM(NSUInteger, RescueCameraDevice, closed) {
/// camera on the back side of the device
  RescueCameraDeviceBack = 0,
/// camera on the front side of the device
  RescueCameraDeviceFront = 1,
};

/// Flashlight state.
typedef SWIFT_ENUM(NSUInteger, RescueCameraFlash, closed) {
/// flashlight is unavailable
  RescueCameraFlashUnavailable = 0,
/// flashlight is off
  RescueCameraFlashOff = 1,
/// flashlight is on
  RescueCameraFlashOn = 2,
};

@protocol RescueChatDelegate;
@class RescueChatMessage;

/// The <em>RescueChat</em> class provides methods and properties to manage chat functionality in the Rescue SDK.
SWIFT_CLASS("_TtC10RescueCore10RescueChat")
@interface RescueChat : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) RescueChat * _Nonnull sharedInstance;)
+ (RescueChat * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
/// The object that acts as the delegate of <b>RescueChat</b>.
@property (nonatomic, weak) id <RescueChatDelegate> _Nullable delegate;
/// Array of chat messages sent, generated or received during the current session.
/// Chat messages are in timeline. The array contains only RescueChatMessage objects.
@property (nonatomic, readonly, copy) NSArray<RescueChatMessage *> * _Nonnull messages;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Send chat message to the technician.
/// <ul>
///   <li>
///     parameter: message: The string to send.
///   </li>
/// </ul>
- (void)sendMessage:(NSString * _Nonnull)message;
/// Notify the SDK that the user is typing a message for the technician.
/// You can send this message for every time the user makes an input, the SDK will optimize the frequency to forward the message to the technician
- (void)typing;
/// Key-Value Observation
/// Note: It is not intended to call this method directly.
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
/// Key-Value Observation
/// Note: It is not intended to call this method directly.
+ (BOOL)automaticallyNotifiesObserversForKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
@end


/// The <em>RescueChatDelegate</em> protocol defines a set of optional methods you can use to get notified about chat related events. All of the methods in this protocol are optional.
SWIFT_PROTOCOL("_TtP10RescueCore18RescueChatDelegate_")
@protocol RescueChatDelegate
@optional
/// Tells the delegate that the technician is typing.
- (void)rescueChatTyping;
/// Tells the delegate that a new message is received.
/// Messages include chat messages from the technician, the user and the system.
/// \param chatMessage The chat message generated.
///
- (void)rescueChatDidReceiveMessage:(RescueChatMessage * _Nonnull)chatMessage;
/// Tells the delegate that the technician sent a URL
/// Messages include chat messages from the technician, the user and the system.
/// \param url URL sent by the technician.
///
- (void)rescueChatDidReceiveURL:(NSURL * _Nonnull)url;
/// Tells the delegate that the chat functionality is enabled
/// From now on the SDK can send chat messages to the technician and vice versa
- (void)recueChatDidBecomeEnabled;
/// Tells the delegate that the chat functionality is disabled
/// From now on the SDK can’t send chat messages to the technician and vice versa
- (void)recueChatDidBecomeDisabled;
@end

enum RescueChatMessageType : NSUInteger;
@class NSCoder;

/// Chat message
SWIFT_CLASS("_TtC10RescueCore17RescueChatMessage")
@interface RescueChatMessage : NSObject <NSCoding>
/// The chat message string.
@property (nonatomic, readonly, copy) NSString * _Nonnull message;
/// Type of the chat message.
@property (nonatomic, readonly) enum RescueChatMessageType type;
/// Date-time of the creation of the chat message
@property (nonatomic, readonly, copy) NSDate * _Nonnull date;
/// NSCoding protocol conformance
/// Note: It is not intended to call this method directly.
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
/// NSCoding protocol conformance
/// Note: It is not intended to call this method directly.
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Types of chat messages
typedef SWIFT_ENUM(NSUInteger, RescueChatMessageType, closed) {
/// status messsage generated by the SDK
  RescueChatMessageTypeSystem = 0,
/// chat message from the user
  RescueChatMessageTypeUser = 1,
/// chat message from the technician
  RescueChatMessageTypeTechnician = 2,
};

@protocol RescueDisplayDelegate;
enum RescueDisplayMode : NSUInteger;
@class WKWebView;

/// The <em>RescueDisplay</em> class provides methods and properties to manage display streaming functionality of the Rescue SDK.
SWIFT_CLASS("_TtC10RescueCore13RescueDisplay")
@interface RescueDisplay : NSObject
/// Enable display streaming functionality.
/// If display streaming functionality is needed during the support session, call this method before starting the session.
- (void)enable;
/// The object that acts as the delegate of <em>RescueDisplay</em>
@property (nonatomic, weak) id <RescueDisplayDelegate> _Nullable delegate;
/// Display streaming mode.
/// The value of this property configures which part of the app’s screen will be streamed to the technician.
/// <ul>
///   <li>
///     Default value is <em>RescueDisplayModeAppScreen</em>, so the entire screen of the app will be streamed.
///   </li>
///   <li>
///     If you want to disable display streaming set this property to <i>RescueDisplayModeDisabled</i>.
///   </li>
/// </ul>
@property (nonatomic) enum RescueDisplayMode mode;
/// View to stream to the technician if <em>mode</em> set to <em>RescueDisplayModeRootView</em>.
/// The view will only be streamed if it is visible. The view’s subviews will also be streamed.
/// If the property is not set when display streaming is initiated by the technician, the SDK will call the <em>delegate</em>’s <em>rescueDisplayRequestViewToSendToTechnician</em> method to get a view to stream.
/// If there is still no view after this, the whole app screen will be streamed.
@property (nonatomic, strong) UIView * _Nullable rootView;
/// Set of UIViews to hide during display streaming.
/// During capturing the display which will be streamed to the technican, the views in the set will be blacked out.
@property (nonatomic, copy) NSSet<UIView *> * _Nonnull hiddenViews;
/// Add or remove view object from the <em>hiddenViews</em> set.
/// \param view The view object to add or remove.
///
/// \param hide <em>true</em> if you want to add the view object to the <em>hiddenViews</em> set, <em>false</em> to remove.
///
- (void)setView:(UIView * _Nonnull)view hidden:(BOOL)hide;
/// A web view object which password fields should be hidden from the technican.
/// Focused password fields will be hidden in this web view during screen sharing. Keyboard will be also hidden when a password field get focus in these web views.
@property (nonatomic, strong) WKWebView * _Nullable webViewWithPasswordFields;
/// A Boolean value that determines whether the technican can use the laser pointer feature in the technician console.
/// If the value of this property is <em>false</em> (the default), the technician can use the laser pointer feature in the tech console during display streaming. Set to <em>true</em> if you want to disable the feature.
@property (nonatomic) BOOL disableLaserPointer;
/// A Boolean value that determines whether the technican can use the whiteboard feature in the technician console.
/// If the value of this property is <em>false</em> (the default), the technician can use the whiteboard feature in the tech console during display streaming. Set to <em>true</em> if you want to disable the feature.
@property (nonatomic) BOOL disableWhiteboard;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface RescueDisplay (SWIFT_EXTENSION(RescueCore))
/// Singleton access.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) RescueDisplay * _Nonnull sharedInstance;)
+ (RescueDisplay * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
@end


/// The <em>RescueDisplayDelegate</em> protocol defines a set of optional methods you can use to get notified about display streaming related events.
/// All of the methods in this protocol are optional.
SWIFT_PROTOCOL("_TtP10RescueCore21RescueDisplayDelegate_")
@protocol RescueDisplayDelegate
@optional
/// Ask the delegate for a view object to use as root view for display streaming.
/// This method is called if <em>RescueDisplay</em>’s <em>mode</em> is set to <em>RootView</em> but no root view was provided.
///
/// returns:
/// A view object from the view hierarchy to use as root view for display streaming.
- (UIView * _Nonnull)rescueDisplayRequestViewToSendToTechnician SWIFT_WARN_UNUSED_RESULT;
/// Tells the delegate that the display streaming has been started.
- (void)rescueDisplayStreamingDidStart;
/// Tells the delegate that the display streaming has been stopped.
- (void)rescueDisplayStreamingDidStop;
@end

/// Display streaming modes.
typedef SWIFT_ENUM(NSUInteger, RescueDisplayMode, closed) {
/// Stream the whole app screen.
  RescueDisplayModeAppScreen = 0,
/// Stream the selected view (and its subviews). Known bug: in this mode the laser pointer and whiteboard won’t show in technician console. Please disable laserpointer and whiteboard (with (disableLaserPointer and disableWhiteboard methods)) if you plan to use this mode.
  RescueDisplayModeRootView = 1,
/// Display streaming disabled.
  RescueDisplayModeDisabled = 2,
};

/// Error codes
typedef SWIFT_ENUM(NSUInteger, RescueError, closed) {
/// missing pin code
  RescueErrorNoPincode = 1,
/// the pin code has been expired
  RescueErrorPincodeExpired = 2,
/// there are no technicians on the channel
  RescueErrorNoTechnicianAvailable = 3,
/// the technicians on the channel are not configured for mobile support
  RescueErrorNoTechnicianLicense = 4,
/// there were no answer from the Rescue Service
  RescueErrorNoReply = 5,
/// unknown reply from the Rescue Service
  RescueErrorUnknownReply = 6,
/// there were no answer from the Rescue Service in the given time
  RescueErrorTimeout = 7,
/// no API key was set for the session
  RescueErrorApiKeyMissing = 8,
/// the Rescue SDK could not access or send the bundle identifier
  RescueErrorAppIdMissing = 9,
/// the given API key does not exist in the Rescue Service
  RescueErrorApiKeyDoesNotExist = 10,
/// the given API key is disabled in the Rescue Service
  RescueErrorApiKeyDisabled = 11,
/// the given API key is not valid with the app’s bundle identifier
  RescueErrorApiKeyAndAppIdNotFromTheSameCompany = 12,
/// the given pin code was not belong to the company with the given API key
  RescueErrorPrivateCodeApiKeyNotFromTheSameCompany = 13,
/// the given channel does not beong to the company with the given API key
  RescueErrorChannelApiKeyNotFromTheSameCompany = 14,
/// the given channel does not exists
  RescueErrorChannelDoesNotExist = 15,
/// the given company does not exists
  RescueErrorCompanyDoesNotExist = 16,
/// the Rescue service could not parse the request
  RescueErrorRequest = 17,
/// a required parameter is missing (e.g. channel id in a channel session)
  RescueErrorRequiredParameterMissing = 18,
/// the pin code is invalid
  RescueErrorInvalidPincode = 19,
/// the pin code was not generated for this type of session
  RescueErrorInvalidPincodeForSessionType = 20,
/// session can’t be initiated with current version of app
  RescueErrorAppVersionNotSupported = 21,
};

enum RescueLocalizationStringIdentifier : NSUInteger;

/// Rescue SDK provides localization for commonly used strings in many languages. You can access localized string through RescueLocalization class.
SWIFT_CLASS("_TtC10RescueCore18RescueLocalization")
@interface RescueLocalization : NSObject
/// Localized string for the identifier.
/// \param identifier String identifier of the string need to be localized.
///
///
/// returns:
/// The localized string.
+ (NSString * _Nonnull)localizedStringFor:(enum RescueLocalizationStringIdentifier)identifier SWIFT_WARN_UNUSED_RESULT;
/// Get a localized error title.
///
/// returns:
/// The localized error title.
+ (NSString * _Nonnull)errorTitle SWIFT_WARN_UNUSED_RESULT;
/// Get the localized error messa”ge for the error code.
/// \param error The error code.
///
///
/// returns:
/// The localized error message.
+ (NSString * _Nonnull)errorMessageForError:(enum RescueError)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// Localizable string identifiers
typedef SWIFT_ENUM(NSUInteger, RescueLocalizationStringIdentifier, closed) {
/// string for ‘connecting’ session state
  RescueLocalizationStringIdentifierStatusConnecting = 0,
/// string for ‘waiting for technician’ session state
  RescueLocalizationStringIdentifierStatusWaitingForTechnician = 1,
/// string for ‘disconnecting’ state
  RescueLocalizationStringIdentifierStatusDisconnecting = 2,
/// string for ‘disconnected’ state
  RescueLocalizationStringIdentifierStatusDisconnected = 3,
/// string for ‘stream starting’ state
  RescueLocalizationStringIdentifierStatusStreamStarting = 4,
/// string for ‘on hold’ state
  RescueLocalizationStringIdentifierStatusOnHold = 5,
/// string for ‘transfering’ state
  RescueLocalizationStringIdentifierStatusTransferring = 6,
/// string for ‘connection lost’ state
  RescueLocalizationStringIdentifierStatusConnectionLost = 7,
};

@protocol RescueSessionDelegate;
@class RescueSessionStartParameters;
enum RescueSessionStatus : NSUInteger;

/// The connection between your application and the Rescue Technician Console is represented by a <em>RescueSession</em> object. This is a singleton object you access it by calling the <em>sharedInstance</em> class method.
SWIFT_CLASS("_TtC10RescueCore13RescueSession")
@interface RescueSession : NSObject
/// Unique identifier for the app.
/// Every app need an API key. Starting a Rescue session will always fail without it.
@property (nonatomic, copy) NSString * _Nonnull apiKey;
/// App group identifier.
/// Using the broadcast feature the app and the extension have to communicate with eachother. The communication is working over group user defaults container. Set the app group identifier in your entitlements (both for app and extension) and here.
@property (nonatomic, copy) NSString * _Nonnull appGroup;
/// The object that acts as the delegate of <em>RescueSession</em>.
@property (nonatomic, weak) id <RescueSessionDelegate> _Nullable delegate;
/// Pass this parameter along with session start.The SDK will automatically join the session if it is <em>true</em>. If it is set to <em>false</em> the SDK will notify the <em>RescueSessionDelegate</em>, that the session is ready with <em>rescueSessionReady()</em>. After  the session ready call, you can call <em>connectSession()</em> on the <em>RescueSession</em> to connect he session; or you can connect to the sesion from your broadcast extension.
@property (nonatomic) BOOL connectToSessionAutomatically;
/// This property stores the session start configuration.
/// Automatically created, call its methods to configure it.
@property (nonatomic, readonly, strong) RescueSessionStartParameters * _Nonnull sessionStartParameters;
/// State of the session.
@property (nonatomic, readonly) enum RescueSessionStatus sessionStatus;
/// Name of the technician.
/// This property is KVO compliant
@property (nonatomic, readonly, copy) NSString * _Nullable operatorName;
/// Date-time of the start of the session.
/// This property is KVO compliant
@property (nonatomic, readonly, copy) NSDate * _Nullable sessionStart;
/// Transmitted data during session
@property (nonatomic, readonly) size_t transmittedData;
/// URL of the customer survey.
/// The URL can change during a support session, so only get this property after ending the support session.
@property (nonatomic, readonly, copy) NSURL * _Nullable afterSessionSurveyURL;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Start a Rescue session using the configuration from the <em>sessionStartParameters</em> object.
/// The <em>startSession</em> method is asynchronous, it will return immediately. You will be notified via the <em>delegate</em> about the outcome of the session start.
- (void)startSession;
/// Connect to the Rescue session
/// Important: If you initiated the Rescue session with <em>connectToSessionAutomatically</em> set to <em>false</em>, you have to manually call <em>connectSession()</em> or <em>broadcastSession()</em>
- (void)connectSession;
/// Prepare the Rescue session for broadcasting.
/// Important: If you initiated the Rescue session with <em>connectToSessionAutomatically</em> set to <em>false</em>, you have to manually call <em>connectSession()</em> or <em>broadcastSession()</em>
- (void)broadcastSession;
/// End the Rescue session.
/// The <em>endSession</em> method is asynchronous, it will return immediately. You will be notified via the <em>delegate</em> about the outcome of the session start.
- (void)endSession;
/// Clean up the Rescue SDK, delete every data stored by it.
- (void)reset;
@end








@interface RescueSession (SWIFT_EXTENSION(RescueCore))
/// Key-Value Observation
/// Note: It is not intended to call this method directly.
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
/// Key-Value Observation
/// Note: It is not intended to call this method directly.
+ (BOOL)automaticallyNotifiesObserversForKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
@end






@interface RescueSession (SWIFT_EXTENSION(RescueCore))
/// Singleton access.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) RescueSession * _Nonnull sharedInstance;)
+ (RescueSession * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
@end






/// The <em>RescueSessionDelegate</em> protocol defines a set of methods you can use to get notified about session related events.
SWIFT_PROTOCOL("_TtP10RescueCore21RescueSessionDelegate_")
@protocol RescueSessionDelegate
/// Tells the delegate that the state of the session has changed.
/// This method is optional.
/// \param status The new session state.
///
- (void)rescueSessionStatusDidChange:(enum RescueSessionStatus)status;
/// Tells the delegate that an error occured during session.
/// \param error The error code.
///
/// \param userInfo More info about the error. In case of <em>errorCode</em> <em>RescueErrorNoTechnicianAvailable</em>, the dictionary contains the URL set in the administration center if there are no technicians on the channel.
///
- (void)rescueSessionError:(enum RescueError)error withUserInfo:(NSDictionary<NSString *, id> * _Nullable)userInfo;
@optional
/// Notify the delegate that the session is ready for connecting or broadcasting
- (void)rescueSessionReady;
@end


/// The <em>RescueSessionStartParameters</em> class is used by the <em>RescueSession</em> class to configure the session start parameters. You do not need to create your own instance of this class, <em>RescueSession</em> will hold its own, use that one.
SWIFT_CLASS("_TtC10RescueCore28RescueSessionStartParameters")
@interface RescueSessionStartParameters : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Configure the session start parameters to create a session with the given pin code.
/// \param pinCode Pin code for the session.
///
- (void)startWithPinCode:(NSString * _Nonnull)pinCode;
/// Configure the session start parameters to create a session with the given company id and channel name.
/// \param companyId Company identifier in the Rescue System.
///
/// \param channelName Channel name in the Rescue System.
///
- (void)startWithCompanyId:(NSString * _Nonnull)companyId andChannelName:(NSString * _Nonnull)channelName;
/// Configure the session start parameters to create a session with the given channel id.
/// \param channelId Channel identifier in the Rescue System.
///
- (void)startWithChannelId:(NSString * _Nonnull)channelId;
/// Configure the session start parameters to try to continue the last unfinished session.
///
/// returns:
/// <em>true</em> if configuration is valid to start a session, otherwise <em>false</em>.
- (BOOL)continueSession SWIFT_WARN_UNUSED_RESULT;
/// Returns a boolean indicating weather the instance holds a valid configuration to start a session.
///
/// returns:
/// <em>true</em> if there is an unfinished session, session start parameters is configured to continue this session or <em>false</em> if there is no session to continue, session won’t start with this configuration.
@property (nonatomic, readonly) BOOL isConfigured;
/// Pass this name along with session start, technician consol will display this name for the user in ‘Name’ field
@property (nonatomic, copy) NSString * _Nullable name;
/// Pass this comment along with session start, technician consol will display this comment in ‘Custom Field 1’ field
@property (nonatomic, copy) NSString * _Nullable comment1;
/// Pass this comment along with session start, technician consol will display this comment in ‘Custom Field 2’ field
@property (nonatomic, copy) NSString * _Nullable comment2;
/// Pass this comment along with session start, technician consol will display this comment in ‘Custom Field 3’ field
@property (nonatomic, copy) NSString * _Nullable comment3;
/// Pass this comment along with session start, technician consol will display this comment in ‘Custom Field 4’ field
@property (nonatomic, copy) NSString * _Nullable comment4;
/// Pass this comment along with session start, technician consol will display this comment in ‘Custom Field 5’ field
@property (nonatomic, copy) NSString * _Nullable comment5;
@end

/// Session status during the support session
typedef SWIFT_ENUM(NSUInteger, RescueSessionStatus, closed) {
/// base state
  RescueSessionStatusIdle = 0,
/// connecting to the Rescue Service
  RescueSessionStatusConnecting = 1,
/// connection established with the Rescue Service
  RescueSessionStatusConnected = 2,
/// the technician put the session on hold
  RescueSessionStatusOnHold = 3,
/// the technician transered the session to another technician or channel, waiting for a new technician to pick it up
  RescueSessionStatusTransferred = 4,
/// disconnecting from the Rescue Service
  RescueSessionStatusDisconnecting = 5,
/// disconnected from the Rescue Service
  RescueSessionStatusDisconnected = 6,
/// connected to the Rescue Service, waiting for a technician to pick up the session
  RescueSessionStatusWaitingForTechnician = 7,
/// connection lost between the user and the technician, trying to reconnect
  RescueSessionStatusConnectionLost = 8,
};



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
