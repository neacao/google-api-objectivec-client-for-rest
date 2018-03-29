// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Hangouts Chat API (chat/v1)
// Description:
//   Create bots and extend the new Hangouts Chat.
// Documentation:
//   https://developers.google.com/hangouts/chat

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRHangoutsChat_ActionParameter;
@class GTLRHangoutsChat_ActionResponse;
@class GTLRHangoutsChat_Annotation;
@class GTLRHangoutsChat_Button;
@class GTLRHangoutsChat_Card;
@class GTLRHangoutsChat_CardAction;
@class GTLRHangoutsChat_CardHeader;
@class GTLRHangoutsChat_FormAction;
@class GTLRHangoutsChat_Image;
@class GTLRHangoutsChat_ImageButton;
@class GTLRHangoutsChat_KeyValue;
@class GTLRHangoutsChat_Membership;
@class GTLRHangoutsChat_OnClick;
@class GTLRHangoutsChat_OpenLink;
@class GTLRHangoutsChat_Section;
@class GTLRHangoutsChat_Space;
@class GTLRHangoutsChat_TextButton;
@class GTLRHangoutsChat_TextParagraph;
@class GTLRHangoutsChat_Thread;
@class GTLRHangoutsChat_User;
@class GTLRHangoutsChat_UserMentionMetadata;
@class GTLRHangoutsChat_WidgetMarkup;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRHangoutsChat_ActionResponse.type

/**
 *  Post as a new message in the topic.
 *
 *  Value: "NEW_MESSAGE"
 */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ActionResponse_Type_NewMessage;
/**
 *  Privately ask the user for additional auth or config.
 *
 *  Value: "REQUEST_CONFIG"
 */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ActionResponse_Type_RequestConfig;
/**
 *  Default type; will be handled as NEW_MESSAGE.
 *
 *  Value: "TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ActionResponse_Type_TypeUnspecified;
/**
 *  Update the bot's own message. (Only after CARD_CLICKED events.)
 *
 *  Value: "UPDATE_MESSAGE"
 */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ActionResponse_Type_UpdateMessage;

// ----------------------------------------------------------------------------
// GTLRHangoutsChat_Annotation.type

/**
 *  Default value for the enum. DO NOT USE.
 *
 *  Value: "ANNOTATION_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_Annotation_Type_AnnotationTypeUnspecified;
/**
 *  A user is mentioned.
 *
 *  Value: "USER_MENTION"
 */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_Annotation_Type_UserMention;

// ----------------------------------------------------------------------------
// GTLRHangoutsChat_CardHeader.imageStyle

/**
 *  Circular border.
 *
 *  Value: "AVATAR"
 */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_CardHeader_ImageStyle_Avatar;
/**
 *  Square border.
 *
 *  Value: "IMAGE"
 */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_CardHeader_ImageStyle_Image;
/** Value: "IMAGE_STYLE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_CardHeader_ImageStyle_ImageStyleUnspecified;

// ----------------------------------------------------------------------------
// GTLRHangoutsChat_ImageButton.icon

/** Value: "AIRPLANE" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_Airplane;
/** Value: "BOOKMARK" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_Bookmark;
/** Value: "BUS" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_Bus;
/** Value: "CAR" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_Car;
/** Value: "CLOCK" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_Clock;
/** Value: "CONFIRMATION_NUMBER_ICON" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_ConfirmationNumberIcon;
/** Value: "DESCRIPTION" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_Description;
/** Value: "DOLLAR" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_Dollar;
/** Value: "EMAIL" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_Email;
/** Value: "EVENT_PERFORMER" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_EventPerformer;
/** Value: "EVENT_SEAT" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_EventSeat;
/** Value: "FLIGHT_ARRIVAL" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_FlightArrival;
/** Value: "FLIGHT_DEPARTURE" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_FlightDeparture;
/** Value: "HOTEL" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_Hotel;
/** Value: "HOTEL_ROOM_TYPE" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_HotelRoomType;
/** Value: "ICON_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_IconUnspecified;
/** Value: "INVITE" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_Invite;
/** Value: "MAP_PIN" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_MapPin;
/** Value: "MEMBERSHIP" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_Membership;
/** Value: "MULTIPLE_PEOPLE" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_MultiplePeople;
/** Value: "OFFER" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_Offer;
/** Value: "PERSON" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_Person;
/** Value: "PHONE" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_Phone;
/** Value: "RESTAURANT_ICON" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_RestaurantIcon;
/** Value: "SHOPPING_CART" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_ShoppingCart;
/** Value: "STAR" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_Star;
/** Value: "STORE" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_Store;
/** Value: "TICKET" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_Ticket;
/** Value: "TRAIN" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_Train;
/** Value: "VIDEO_CAMERA" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_VideoCamera;
/** Value: "VIDEO_PLAY" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_ImageButton_Icon_VideoPlay;

// ----------------------------------------------------------------------------
// GTLRHangoutsChat_KeyValue.icon

/** Value: "AIRPLANE" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_Airplane;
/** Value: "BOOKMARK" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_Bookmark;
/** Value: "BUS" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_Bus;
/** Value: "CAR" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_Car;
/** Value: "CLOCK" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_Clock;
/** Value: "CONFIRMATION_NUMBER_ICON" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_ConfirmationNumberIcon;
/** Value: "DESCRIPTION" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_Description;
/** Value: "DOLLAR" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_Dollar;
/** Value: "EMAIL" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_Email;
/** Value: "EVENT_PERFORMER" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_EventPerformer;
/** Value: "EVENT_SEAT" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_EventSeat;
/** Value: "FLIGHT_ARRIVAL" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_FlightArrival;
/** Value: "FLIGHT_DEPARTURE" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_FlightDeparture;
/** Value: "HOTEL" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_Hotel;
/** Value: "HOTEL_ROOM_TYPE" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_HotelRoomType;
/** Value: "ICON_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_IconUnspecified;
/** Value: "INVITE" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_Invite;
/** Value: "MAP_PIN" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_MapPin;
/** Value: "MEMBERSHIP" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_Membership;
/** Value: "MULTIPLE_PEOPLE" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_MultiplePeople;
/** Value: "OFFER" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_Offer;
/** Value: "PERSON" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_Person;
/** Value: "PHONE" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_Phone;
/** Value: "RESTAURANT_ICON" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_RestaurantIcon;
/** Value: "SHOPPING_CART" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_ShoppingCart;
/** Value: "STAR" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_Star;
/** Value: "STORE" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_Store;
/** Value: "TICKET" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_Ticket;
/** Value: "TRAIN" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_Train;
/** Value: "VIDEO_CAMERA" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_VideoCamera;
/** Value: "VIDEO_PLAY" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_KeyValue_Icon_VideoPlay;

// ----------------------------------------------------------------------------
// GTLRHangoutsChat_Membership.state

/**
 *  The user has been invited, is able to join the space, but currently has
 *  not joined.
 *
 *  Value: "INVITED"
 */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_Membership_State_Invited;
/**
 *  The user has joined the space.
 *
 *  Value: "JOINED"
 */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_Membership_State_Joined;
/**
 *  Default, do not use.
 *
 *  Value: "MEMBERSHIP_STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_Membership_State_MembershipStateUnspecified;
/**
 *  The user is not a member of the space, has not been invited and is not
 *  able to join the space.
 *
 *  Value: "NOT_A_MEMBER"
 */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_Membership_State_NotAMember;

// ----------------------------------------------------------------------------
// GTLRHangoutsChat_Space.type

/** Value: "DM" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_Space_Type_Dm;
/** Value: "ROOM" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_Space_Type_Room;
/** Value: "TYPE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_Space_Type_TypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRHangoutsChat_User.type

/**
 *  Bot user.
 *
 *  Value: "BOT"
 */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_User_Type_Bot;
/**
 *  Human user.
 *
 *  Value: "HUMAN"
 */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_User_Type_Human;
/**
 *  Default value for the enum. DO NOT USE.
 *
 *  Value: "TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_User_Type_TypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRHangoutsChat_UserMentionMetadata.type

/**
 *  Add user to space.
 *
 *  Value: "ADD"
 */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_UserMentionMetadata_Type_Add;
/**
 *  Mention user in space.
 *
 *  Value: "MENTION"
 */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_UserMentionMetadata_Type_Mention;
/**
 *  Default value for the enum. DO NOT USE.
 *
 *  Value: "TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRHangoutsChat_UserMentionMetadata_Type_TypeUnspecified;

/**
 *  List of string parameters to supply when the action method is invoked.
 *  For example, consider three snooze buttons: snooze now, snooze 1 day,
 *  snooze next week. You might use action method = snooze(), passing the
 *  snooze type and snooze time in the list of string parameters.
 */
@interface GTLRHangoutsChat_ActionParameter : GTLRObject

/** The name of the parameter for the action script. */
@property(nonatomic, copy, nullable) NSString *key;

/** The value of the parameter. */
@property(nonatomic, copy, nullable) NSString *value;

@end


/**
 *  Parameters that a bot can use to configure how it's response is posted.
 */
@interface GTLRHangoutsChat_ActionResponse : GTLRObject

/**
 *  The type of bot response.
 *
 *  Likely values:
 *    @arg @c kGTLRHangoutsChat_ActionResponse_Type_NewMessage Post as a new
 *        message in the topic. (Value: "NEW_MESSAGE")
 *    @arg @c kGTLRHangoutsChat_ActionResponse_Type_RequestConfig Privately ask
 *        the user for additional auth or config. (Value: "REQUEST_CONFIG")
 *    @arg @c kGTLRHangoutsChat_ActionResponse_Type_TypeUnspecified Default
 *        type; will be handled as NEW_MESSAGE. (Value: "TYPE_UNSPECIFIED")
 *    @arg @c kGTLRHangoutsChat_ActionResponse_Type_UpdateMessage Update the
 *        bot's own message. (Only after CARD_CLICKED events.) (Value:
 *        "UPDATE_MESSAGE")
 */
@property(nonatomic, copy, nullable) NSString *type;

/**
 *  URL for users to auth or config. (Only for REQUEST_CONFIG response types.)
 */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  Annotations associated with the plain-text body of the message.
 *  Example plain-text message body:
 *  ```
 *  Hello \@FooBot how are you!"
 *  ```
 *  The corresponding annotations metadata:
 *  ```
 *  "annotations":[{
 *  "type":"USER_MENTION",
 *  "startIndex":6,
 *  "length":7,
 *  "userMention": {
 *  "user": {
 *  "name":"users/107946847022116401880",
 *  "displayName":"FooBot",
 *  "avatarUrl":"https://goo.gl/aeDtrS",
 *  "type":"BOT"
 *  },
 *  "type":"MENTION"
 *  }
 *  }]
 *  ```
 */
@interface GTLRHangoutsChat_Annotation : GTLRObject

/**
 *  Length of the substring in the plain-text message body this annotation
 *  corresponds to.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *length;

/**
 *  Start index (0-based, inclusive) in the plain-text message body this
 *  annotation corresponds to.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *startIndex;

/**
 *  The type of this annotation.
 *
 *  Likely values:
 *    @arg @c kGTLRHangoutsChat_Annotation_Type_AnnotationTypeUnspecified
 *        Default value for the enum. DO NOT USE. (Value:
 *        "ANNOTATION_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRHangoutsChat_Annotation_Type_UserMention A user is mentioned.
 *        (Value: "USER_MENTION")
 */
@property(nonatomic, copy, nullable) NSString *type;

/** The metadata of user mention. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_UserMentionMetadata *userMention;

@end


/**
 *  A button. Can be a text button or an image button.
 */
@interface GTLRHangoutsChat_Button : GTLRObject

/** A button with image and onclick action. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_ImageButton *imageButton;

/** A button with text and onclick action. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_TextButton *textButton;

@end


/**
 *  A card is a UI element that can contain UI widgets such as texts, images.
 */
@interface GTLRHangoutsChat_Card : GTLRObject

/** The actions of this card. */
@property(nonatomic, strong, nullable) NSArray<GTLRHangoutsChat_CardAction *> *cardActions;

/** The header of the card. A header usually contains a title and an image. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_CardHeader *header;

/** Name of the card. */
@property(nonatomic, copy, nullable) NSString *name;

/** Sections are separated by a line divider. */
@property(nonatomic, strong, nullable) NSArray<GTLRHangoutsChat_Section *> *sections;

@end


/**
 *  A card action is
 *  the action associated with the card. For an invoice card, a
 *  typical action would be: delete invoice, email invoice or open the
 *  invoice in browser.
 */
@interface GTLRHangoutsChat_CardAction : GTLRObject

/** The label used to be displayed in the action menu item. */
@property(nonatomic, copy, nullable) NSString *actionLabel;

/** The onclick action for this action item. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_OnClick *onClick;

@end


/**
 *  GTLRHangoutsChat_CardHeader
 */
@interface GTLRHangoutsChat_CardHeader : GTLRObject

/**
 *  The image's type (e.g. square border or circular border).
 *
 *  Likely values:
 *    @arg @c kGTLRHangoutsChat_CardHeader_ImageStyle_Avatar Circular border.
 *        (Value: "AVATAR")
 *    @arg @c kGTLRHangoutsChat_CardHeader_ImageStyle_Image Square border.
 *        (Value: "IMAGE")
 *    @arg @c kGTLRHangoutsChat_CardHeader_ImageStyle_ImageStyleUnspecified
 *        Value "IMAGE_STYLE_UNSPECIFIED"
 */
@property(nonatomic, copy, nullable) NSString *imageStyle;

/** The URL of the image in the card header. */
@property(nonatomic, copy, nullable) NSString *imageUrl;

/** The subtitle of the card header. */
@property(nonatomic, copy, nullable) NSString *subtitle;

/**
 *  The title must be specified. The header has a fixed height: if both a
 *  title and subtitle is specified, each will take up 1 line. If only the
 *  title is specified, it will take up both lines.
 */
@property(nonatomic, copy, nullable) NSString *title;

@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRHangoutsChat_Empty : GTLRObject
@end


/**
 *  A form action describes the behavior when the form is submitted.
 *  For example, an Apps Script can be invoked to handle the form.
 */
@interface GTLRHangoutsChat_FormAction : GTLRObject

/**
 *  Apps Script function to invoke when the containing element is
 *  clicked/activated.
 */
@property(nonatomic, copy, nullable) NSString *actionMethodName;

/** List of action parameters. */
@property(nonatomic, strong, nullable) NSArray<GTLRHangoutsChat_ActionParameter *> *parameters;

@end


/**
 *  An image that is specified by a URL and can have an onclick action.
 */
@interface GTLRHangoutsChat_Image : GTLRObject

/**
 *  The aspect ratio of this image (width/height).
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *aspectRatio;

/** The URL of the image. */
@property(nonatomic, copy, nullable) NSString *imageUrl;

/** The onclick action. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_OnClick *onClick;

@end


/**
 *  An image button with an onclick action.
 */
@interface GTLRHangoutsChat_ImageButton : GTLRObject

/**
 *  The icon specified by an enum that indices to an icon provided by Chat
 *  API.
 *
 *  Likely values:
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_Airplane Value "AIRPLANE"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_Bookmark Value "BOOKMARK"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_Bus Value "BUS"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_Car Value "CAR"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_Clock Value "CLOCK"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_ConfirmationNumberIcon Value
 *        "CONFIRMATION_NUMBER_ICON"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_Description Value "DESCRIPTION"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_Dollar Value "DOLLAR"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_Email Value "EMAIL"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_EventPerformer Value
 *        "EVENT_PERFORMER"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_EventSeat Value "EVENT_SEAT"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_FlightArrival Value
 *        "FLIGHT_ARRIVAL"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_FlightDeparture Value
 *        "FLIGHT_DEPARTURE"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_Hotel Value "HOTEL"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_HotelRoomType Value
 *        "HOTEL_ROOM_TYPE"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_IconUnspecified Value
 *        "ICON_UNSPECIFIED"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_Invite Value "INVITE"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_MapPin Value "MAP_PIN"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_Membership Value "MEMBERSHIP"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_MultiplePeople Value
 *        "MULTIPLE_PEOPLE"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_Offer Value "OFFER"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_Person Value "PERSON"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_Phone Value "PHONE"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_RestaurantIcon Value
 *        "RESTAURANT_ICON"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_ShoppingCart Value
 *        "SHOPPING_CART"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_Star Value "STAR"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_Store Value "STORE"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_Ticket Value "TICKET"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_Train Value "TRAIN"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_VideoCamera Value
 *        "VIDEO_CAMERA"
 *    @arg @c kGTLRHangoutsChat_ImageButton_Icon_VideoPlay Value "VIDEO_PLAY"
 */
@property(nonatomic, copy, nullable) NSString *icon;

/** The icon specified by a URL. */
@property(nonatomic, copy, nullable) NSString *iconUrl;

/**
 *  The name of this image_button which will be used for accessibility.
 *  Default value will be provided if developers don't specify.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** The onclick action. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_OnClick *onClick;

@end


/**
 *  A UI element contains a key (label) and a value (content). And this
 *  element may also contain some actions such as onclick button.
 */
@interface GTLRHangoutsChat_KeyValue : GTLRObject

/** The text of the bottom label. Formatted text supported. */
@property(nonatomic, copy, nullable) NSString *bottomLabel;

/** A button that can be clicked to trigger an action. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_Button *button;

/** The text of the content. Formatted text supported and always required. */
@property(nonatomic, copy, nullable) NSString *content;

/**
 *  If the content should be multiline.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *contentMultiline;

/**
 *  An enum value that will be replaced by the Chat API with the
 *  corresponding icon image.
 *
 *  Likely values:
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_Airplane Value "AIRPLANE"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_Bookmark Value "BOOKMARK"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_Bus Value "BUS"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_Car Value "CAR"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_Clock Value "CLOCK"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_ConfirmationNumberIcon Value
 *        "CONFIRMATION_NUMBER_ICON"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_Description Value "DESCRIPTION"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_Dollar Value "DOLLAR"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_Email Value "EMAIL"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_EventPerformer Value
 *        "EVENT_PERFORMER"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_EventSeat Value "EVENT_SEAT"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_FlightArrival Value
 *        "FLIGHT_ARRIVAL"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_FlightDeparture Value
 *        "FLIGHT_DEPARTURE"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_Hotel Value "HOTEL"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_HotelRoomType Value
 *        "HOTEL_ROOM_TYPE"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_IconUnspecified Value
 *        "ICON_UNSPECIFIED"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_Invite Value "INVITE"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_MapPin Value "MAP_PIN"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_Membership Value "MEMBERSHIP"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_MultiplePeople Value
 *        "MULTIPLE_PEOPLE"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_Offer Value "OFFER"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_Person Value "PERSON"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_Phone Value "PHONE"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_RestaurantIcon Value
 *        "RESTAURANT_ICON"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_ShoppingCart Value "SHOPPING_CART"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_Star Value "STAR"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_Store Value "STORE"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_Ticket Value "TICKET"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_Train Value "TRAIN"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_VideoCamera Value "VIDEO_CAMERA"
 *    @arg @c kGTLRHangoutsChat_KeyValue_Icon_VideoPlay Value "VIDEO_PLAY"
 */
@property(nonatomic, copy, nullable) NSString *icon;

/** The icon specified by a URL. */
@property(nonatomic, copy, nullable) NSString *iconUrl;

/**
 *  The onclick action. Only the top label, bottom label and content region
 *  are clickable.
 */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_OnClick *onClick;

/** The text of the top label. Formatted text supported. */
@property(nonatomic, copy, nullable) NSString *topLabel;

@end


/**
 *  GTLRHangoutsChat_ListMembershipsResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "memberships" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRHangoutsChat_ListMembershipsResponse : GTLRCollectionObject

/**
 *  List of memberships in the requested (or first) page.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRHangoutsChat_Membership *> *memberships;

/**
 *  Continuation token to retrieve the next page of results. It will be empty
 *  for the last page of results.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRHangoutsChat_ListSpacesResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "spaces" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRHangoutsChat_ListSpacesResponse : GTLRCollectionObject

/**
 *  Continuation token to retrieve the next page of results. It will be empty
 *  for the last page of results. Tokens expire in an hour. An error is thrown
 *  if an expired token is passed.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  List of spaces in the requested (or first) page.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRHangoutsChat_Space *> *spaces;

@end


/**
 *  Represents a membership relation in Hangouts Chat.
 */
@interface GTLRHangoutsChat_Membership : GTLRObject

/**
 *  The creation time of the membership a.k.a the time at which the member
 *  joined the space, if applicable.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/** Member details. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_User *member;

/**
 *  Resource name of the membership, in the form "spaces/ * /members/ *".
 *  Example: spaces/AAAAMpdlehY/members/105115627578887013105
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  State of the membership.
 *
 *  Likely values:
 *    @arg @c kGTLRHangoutsChat_Membership_State_Invited The user has been
 *        invited, is able to join the space, but currently has
 *        not joined. (Value: "INVITED")
 *    @arg @c kGTLRHangoutsChat_Membership_State_Joined The user has joined the
 *        space. (Value: "JOINED")
 *    @arg @c kGTLRHangoutsChat_Membership_State_MembershipStateUnspecified
 *        Default, do not use. (Value: "MEMBERSHIP_STATE_UNSPECIFIED")
 *    @arg @c kGTLRHangoutsChat_Membership_State_NotAMember The user is not a
 *        member of the space, has not been invited and is not
 *        able to join the space. (Value: "NOT_A_MEMBER")
 */
@property(nonatomic, copy, nullable) NSString *state;

@end


/**
 *  A message in Hangouts Chat.
 */
@interface GTLRHangoutsChat_Message : GTLRObject

/**
 *  Input only. Parameters that a bot can use to configure how its response is
 *  posted.
 */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_ActionResponse *actionResponse;

/** Output only. Annotations associated with the text in this message. */
@property(nonatomic, strong, nullable) NSArray<GTLRHangoutsChat_Annotation *> *annotations;

/**
 *  Rich, formatted and interactive cards that can be used to display UI
 *  elements such as: formatted texts, buttons, clickable images. Cards are
 *  normally displayed below the plain-text body of the message.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRHangoutsChat_Card *> *cards;

/**
 *  Output only. The time at which the message was created in Hangouts Chat
 *  server.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  A plain-text description of the message's cards, used when the actual cards
 *  cannot be displayed (e.g. mobile notifications).
 */
@property(nonatomic, copy, nullable) NSString *fallbackText;

/**
 *  Resource name, in the form "spaces/ * /messages/ *".
 *  Example: spaces/AAAAMpdlehY/messages/UMxbHmzDlr4.UMxbHmzDlr4
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Text for generating preview chips. This text will not be displayed to the
 *  user, but any links to images, web pages, videos, etc. included here will
 *  generate preview chips.
 */
@property(nonatomic, copy, nullable) NSString *previewText;

/** The user who created the message. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_User *sender;

/** The space the message belongs to. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_Space *space;

/** Plain-text body of the message. */
@property(nonatomic, copy, nullable) NSString *text;

/** The thread the message belongs to. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_Thread *thread;

@end


/**
 *  An onclick action (e.g. open a link).
 */
@interface GTLRHangoutsChat_OnClick : GTLRObject

/** A form action will be trigger by this onclick if specified. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_FormAction *action;

/** This onclick triggers an open link action if specified. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_OpenLink *openLink;

@end


/**
 *  A link that opens a new window.
 */
@interface GTLRHangoutsChat_OpenLink : GTLRObject

/** The URL to open. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  A section contains a collection of widgets that are rendered
 *  (vertically) in the order that they are specified. Across all platforms,
 *  cards have a narrow fixed width, so
 *  there is currently no need for layout properties (e.g. float).
 */
@interface GTLRHangoutsChat_Section : GTLRObject

/** The header of the section, text formatted supported. */
@property(nonatomic, copy, nullable) NSString *header;

/** A section must contain at least 1 widget. */
@property(nonatomic, strong, nullable) NSArray<GTLRHangoutsChat_WidgetMarkup *> *widgets;

@end


/**
 *  A room or DM in Hangouts Chat.
 */
@interface GTLRHangoutsChat_Space : GTLRObject

/** Output only. The display name (only if the space is a room). */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  Resource name of the space, in the form "spaces/ *".
 *  Example: spaces/AAAAMpdlehYs
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Output only. The type of a space.
 *
 *  Likely values:
 *    @arg @c kGTLRHangoutsChat_Space_Type_Dm Value "DM"
 *    @arg @c kGTLRHangoutsChat_Space_Type_Room Value "ROOM"
 *    @arg @c kGTLRHangoutsChat_Space_Type_TypeUnspecified Value
 *        "TYPE_UNSPECIFIED"
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  A button with text and onclick action.
 */
@interface GTLRHangoutsChat_TextButton : GTLRObject

/** The onclick action of the button. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_OnClick *onClick;

/** The text of the button. */
@property(nonatomic, copy, nullable) NSString *text;

@end


/**
 *  A paragraph of text. Formatted text supported.
 */
@interface GTLRHangoutsChat_TextParagraph : GTLRObject

@property(nonatomic, copy, nullable) NSString *text;

@end


/**
 *  A thread in Hangouts Chat.
 */
@interface GTLRHangoutsChat_Thread : GTLRObject

/**
 *  Resource name, in the form "spaces/ * /threads/ *".
 *  Example: spaces/AAAAMpdlehY/threads/UMxbHmzDlr4
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  A user in Hangouts Chat.
 */
@interface GTLRHangoutsChat_User : GTLRObject

/** The user's display name. */
@property(nonatomic, copy, nullable) NSString *displayName;

/** Resource name, in the format "users/ *". */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  User type.
 *
 *  Likely values:
 *    @arg @c kGTLRHangoutsChat_User_Type_Bot Bot user. (Value: "BOT")
 *    @arg @c kGTLRHangoutsChat_User_Type_Human Human user. (Value: "HUMAN")
 *    @arg @c kGTLRHangoutsChat_User_Type_TypeUnspecified Default value for the
 *        enum. DO NOT USE. (Value: "TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  Annotation metadata for user mentions (\@).
 */
@interface GTLRHangoutsChat_UserMentionMetadata : GTLRObject

/**
 *  The type of user mention.
 *
 *  Likely values:
 *    @arg @c kGTLRHangoutsChat_UserMentionMetadata_Type_Add Add user to space.
 *        (Value: "ADD")
 *    @arg @c kGTLRHangoutsChat_UserMentionMetadata_Type_Mention Mention user in
 *        space. (Value: "MENTION")
 *    @arg @c kGTLRHangoutsChat_UserMentionMetadata_Type_TypeUnspecified Default
 *        value for the enum. DO NOT USE. (Value: "TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *type;

/** The user mentioned. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_User *user;

@end


/**
 *  A widget is a UI element that presents texts, images, etc.
 */
@interface GTLRHangoutsChat_WidgetMarkup : GTLRObject

/**
 *  A list of buttons. Buttons is also oneof data and only one of these
 *  fields should be set.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRHangoutsChat_Button *> *buttons;

/** Display an image in this widget. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_Image *image;

/** Display a key value item in this widget. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_KeyValue *keyValue;

/** Display a text paragraph in this widget. */
@property(nonatomic, strong, nullable) GTLRHangoutsChat_TextParagraph *textParagraph;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
