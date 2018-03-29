// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Service Consumer Management API (serviceconsumermanagement/v1)
// Description:
//   Provides management methods for configuring service producer resources on
//   Google Cloud.
// Documentation:
//   https://cloud.google.com/service-consumer-management/docs/overview

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRServiceConsumerManagement_AddTenantProjectRequest;
@class GTLRServiceConsumerManagement_CancelOperationRequest;
@class GTLRServiceConsumerManagement_CreateTenancyUnitRequest;
@class GTLRServiceConsumerManagement_RemoveTenantProjectRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Service Consumer Management query classes.
 */
@interface GTLRServiceConsumerManagementQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not
 *  guaranteed. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use
 *  Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation,
 *  the operation is not deleted; instead, it becomes an operation with
 *  an Operation.error value with a google.rpc.Status.code of 1,
 *  corresponding to `Code.CANCELLED`.
 *
 *  Method: serviceconsumermanagement.operations.cancel
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceConsumerManagementCloudPlatform
 *    @c kGTLRAuthScopeServiceConsumerManagementServiceManagement
 */
@interface GTLRServiceConsumerManagementQuery_OperationsCancel : GTLRServiceConsumerManagementQuery
// Previous library name was
//   +[GTLQueryServiceConsumerManagement queryForOperationsCancelWithObject:name:]

/** The name of the operation resource to be cancelled. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRServiceConsumerManagement_Empty.
 *
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not
 *  guaranteed. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use
 *  Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation,
 *  the operation is not deleted; instead, it becomes an operation with
 *  an Operation.error value with a google.rpc.Status.code of 1,
 *  corresponding to `Code.CANCELLED`.
 *
 *  @param object The @c GTLRServiceConsumerManagement_CancelOperationRequest to
 *    include in the query.
 *  @param name The name of the operation resource to be cancelled.
 *
 *  @returns GTLRServiceConsumerManagementQuery_OperationsCancel
 */
+ (instancetype)queryWithObject:(GTLRServiceConsumerManagement_CancelOperationRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  Method: serviceconsumermanagement.operations.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceConsumerManagementCloudPlatform
 *    @c kGTLRAuthScopeServiceConsumerManagementServiceManagement
 */
@interface GTLRServiceConsumerManagementQuery_OperationsDelete : GTLRServiceConsumerManagementQuery
// Previous library name was
//   +[GTLQueryServiceConsumerManagement queryForOperationsDeleteWithname:]

/** The name of the operation resource to be deleted. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRServiceConsumerManagement_Empty.
 *
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  @param name The name of the operation resource to be deleted.
 *
 *  @returns GTLRServiceConsumerManagementQuery_OperationsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: serviceconsumermanagement.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceConsumerManagementCloudPlatform
 *    @c kGTLRAuthScopeServiceConsumerManagementServiceManagement
 */
@interface GTLRServiceConsumerManagementQuery_OperationsGet : GTLRServiceConsumerManagementQuery
// Previous library name was
//   +[GTLQueryServiceConsumerManagement queryForOperationsGetWithname:]

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRServiceConsumerManagement_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @returns GTLRServiceConsumerManagementQuery_OperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *  NOTE: the `name` binding allows API services to override the binding
 *  to use different resource name schemes, such as `users/ * /operations`. To
 *  override the binding, API services can add a binding such as
 *  `"/v1/{name=users/ *}/operations"` to their service configuration.
 *  For backwards compatibility, the default name includes the operations
 *  collection id, however overriding users must ensure the name binding
 *  is the parent resource, without the operations collection id.
 *
 *  Method: serviceconsumermanagement.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceConsumerManagementCloudPlatform
 *    @c kGTLRAuthScopeServiceConsumerManagementServiceManagement
 */
@interface GTLRServiceConsumerManagementQuery_OperationsList : GTLRServiceConsumerManagementQuery
// Previous library name was
//   +[GTLQueryServiceConsumerManagement queryForOperationsListWithname:]

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRServiceConsumerManagement_ListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *  NOTE: the `name` binding allows API services to override the binding
 *  to use different resource name schemes, such as `users/ * /operations`. To
 *  override the binding, API services can add a binding such as
 *  `"/v1/{name=users/ *}/operations"` to their service configuration.
 *  For backwards compatibility, the default name includes the operations
 *  collection id, however overriding users must ensure the name binding
 *  is the parent resource, without the operations collection id.
 *
 *  @param name The name of the operation's parent resource.
 *
 *  @returns GTLRServiceConsumerManagementQuery_OperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Search tenancy units for a service.
 *
 *  Method: serviceconsumermanagement.services.search
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceConsumerManagementCloudPlatform
 */
@interface GTLRServiceConsumerManagementQuery_ServicesSearch : GTLRServiceConsumerManagementQuery
// Previous library name was
//   +[GTLQueryServiceConsumerManagement queryForServicesSearchWithparent:]

/**
 *  The maximum number of results returned by this request. Currently, the
 *  default maximum is set to 1000. If page_size is not provided or the size
 *  provided is a number larger than 1000, it will be automatically set to
 *  1000.
 *  Optional.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The continuation token, which is used to page through large result sets.
 *  To get the next page of results, set this parameter to the value of
 *  `nextPageToken` from the previous response.
 *  Optional.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Service for which search is performed.
 *  services/{service}
 *  {service} the name of a service, for example 'service.googleapis.com'.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Set a query `{expression}` for querying tenancy units. Your `{expression}`
 *  must be in the format: `field_name=literal_string`. The `field_name` is the
 *  name of the field you want to compare. Supported fields are
 *  `tenant_resources.tag` and `tenant_resources.resource`.
 *  For example, to search tenancy units that contain at least one tenant
 *  resource with given tag 'xyz', use query `tenant_resources.tag=xyz`.
 *  To search tenancy units that contain at least one tenant resource with
 *  given resource name 'projects/123456', use query
 *  `tenant_resources.resource=projects/123456`.
 *  Multiple expressions can be joined with `AND`s. Tenancy units must match
 *  all expressions to be included in the result set. For example,
 *  `tenant_resources.tag=xyz AND tenant_resources.resource=projects/123456`
 *  Optional.
 */
@property(nonatomic, copy, nullable) NSString *query;

/**
 *  Fetches a @c GTLRServiceConsumerManagement_SearchTenancyUnitsResponse.
 *
 *  Search tenancy units for a service.
 *
 *  @param parent Service for which search is performed.
 *    services/{service}
 *    {service} the name of a service, for example 'service.googleapis.com'.
 *
 *  @returns GTLRServiceConsumerManagementQuery_ServicesSearch
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Add a new tenant project to the tenancy unit.
 *  There can be at most 512 tenant projects in a tenancy unit.
 *  If there are previously failed `AddTenantProject` calls, you might need to
 *  call `RemoveTenantProject` first to clean them before you can make another
 *  `AddTenantProject` with the same tag.
 *  Operation<response: Empty>.
 *
 *  Method: serviceconsumermanagement.services.tenancyUnits.addProject
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceConsumerManagementCloudPlatform
 */
@interface GTLRServiceConsumerManagementQuery_ServicesTenancyUnitsAddProject : GTLRServiceConsumerManagementQuery
// Previous library name was
//   +[GTLQueryServiceConsumerManagement queryForServicesTenancyUnitsAddProjectWithObject:parent:]

/** Name of the tenancy unit. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRServiceConsumerManagement_Operation.
 *
 *  Add a new tenant project to the tenancy unit.
 *  There can be at most 512 tenant projects in a tenancy unit.
 *  If there are previously failed `AddTenantProject` calls, you might need to
 *  call `RemoveTenantProject` first to clean them before you can make another
 *  `AddTenantProject` with the same tag.
 *  Operation<response: Empty>.
 *
 *  @param object The @c GTLRServiceConsumerManagement_AddTenantProjectRequest
 *    to include in the query.
 *  @param parent Name of the tenancy unit.
 *
 *  @returns GTLRServiceConsumerManagementQuery_ServicesTenancyUnitsAddProject
 */
+ (instancetype)queryWithObject:(GTLRServiceConsumerManagement_AddTenantProjectRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Creates a tenancy unit with no tenant resources.
 *
 *  Method: serviceconsumermanagement.services.tenancyUnits.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceConsumerManagementCloudPlatform
 */
@interface GTLRServiceConsumerManagementQuery_ServicesTenancyUnitsCreate : GTLRServiceConsumerManagementQuery
// Previous library name was
//   +[GTLQueryServiceConsumerManagement queryForServicesTenancyUnitsCreateWithObject:parent:]

/**
 *  services/{service}/{collection id}/{resource id}
 *  {collection id} is the cloud resource collection type representing the
 *  service consumer, for example 'projects', or 'organizations'.
 *  {resource id} is the consumer numeric id, such as project number: '123456'.
 *  {service} the name of a service, for example 'service.googleapis.com'.
 *  Enabled service binding using the new tenancy unit.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRServiceConsumerManagement_TenancyUnit.
 *
 *  Creates a tenancy unit with no tenant resources.
 *
 *  @param object The @c GTLRServiceConsumerManagement_CreateTenancyUnitRequest
 *    to include in the query.
 *  @param parent services/{service}/{collection id}/{resource id}
 *    {collection id} is the cloud resource collection type representing the
 *    service consumer, for example 'projects', or 'organizations'.
 *    {resource id} is the consumer numeric id, such as project number:
 *    '123456'.
 *    {service} the name of a service, for example 'service.googleapis.com'.
 *    Enabled service binding using the new tenancy unit.
 *
 *  @returns GTLRServiceConsumerManagementQuery_ServicesTenancyUnitsCreate
 */
+ (instancetype)queryWithObject:(GTLRServiceConsumerManagement_CreateTenancyUnitRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Delete a tenancy unit. Before the tenancy unit is deleted, there should be
 *  no tenant resources in it.
 *  Operation<response: Empty>.
 *
 *  Method: serviceconsumermanagement.services.tenancyUnits.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceConsumerManagementCloudPlatform
 */
@interface GTLRServiceConsumerManagementQuery_ServicesTenancyUnitsDelete : GTLRServiceConsumerManagementQuery
// Previous library name was
//   +[GTLQueryServiceConsumerManagement queryForServicesTenancyUnitsDeleteWithname:]

/** Name of the tenancy unit to be deleted. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRServiceConsumerManagement_Operation.
 *
 *  Delete a tenancy unit. Before the tenancy unit is deleted, there should be
 *  no tenant resources in it.
 *  Operation<response: Empty>.
 *
 *  @param name Name of the tenancy unit to be deleted.
 *
 *  @returns GTLRServiceConsumerManagementQuery_ServicesTenancyUnitsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Find the tenancy unit for a service and consumer.
 *  This method should not be used in producers' runtime path, for example
 *  finding the tenant project number when creating VMs. Producers should
 *  persist the tenant project information after the project is created.
 *
 *  Method: serviceconsumermanagement.services.tenancyUnits.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceConsumerManagementCloudPlatform
 */
@interface GTLRServiceConsumerManagementQuery_ServicesTenancyUnitsList : GTLRServiceConsumerManagementQuery
// Previous library name was
//   +[GTLQueryServiceConsumerManagement queryForServicesTenancyUnitsListWithparent:]

/** Filter expression over tenancy resources field. Optional. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The maximum number of results returned by this request. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The continuation token, which is used to page through large result sets.
 *  To get the next page of results, set this parameter to the value of
 *  `nextPageToken` from the previous response.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Service and consumer. Required.
 *  services/{service}/{collection id}/{resource id}
 *  {collection id} is the cloud resource collection type representing the
 *  service consumer, for example 'projects', or 'organizations'.
 *  {resource id} is the consumer numeric id, such as project number: '123456'.
 *  {service} the name of a service, for example 'service.googleapis.com'.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRServiceConsumerManagement_ListTenancyUnitsResponse.
 *
 *  Find the tenancy unit for a service and consumer.
 *  This method should not be used in producers' runtime path, for example
 *  finding the tenant project number when creating VMs. Producers should
 *  persist the tenant project information after the project is created.
 *
 *  @param parent Service and consumer. Required.
 *    services/{service}/{collection id}/{resource id}
 *    {collection id} is the cloud resource collection type representing the
 *    service consumer, for example 'projects', or 'organizations'.
 *    {resource id} is the consumer numeric id, such as project number:
 *    '123456'.
 *    {service} the name of a service, for example 'service.googleapis.com'.
 *
 *  @returns GTLRServiceConsumerManagementQuery_ServicesTenancyUnitsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Removes specified project resource identified by tenant resource tag.
 *  It will remove project lien with 'TenantManager' origin if that was added.
 *  It will then attempt to delete the project.
 *  If that operation fails, this method fails.
 *  Operation<response: Empty>.
 *
 *  Method: serviceconsumermanagement.services.tenancyUnits.removeProject
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceConsumerManagementCloudPlatform
 */
@interface GTLRServiceConsumerManagementQuery_ServicesTenancyUnitsRemoveProject : GTLRServiceConsumerManagementQuery
// Previous library name was
//   +[GTLQueryServiceConsumerManagement queryForServicesTenancyUnitsRemoveProjectWithObject:name:]

/**
 *  Name of the tenancy unit.
 *  Such as 'services/service.googleapis.com/projects/12345/tenancyUnits/abcd'.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRServiceConsumerManagement_Operation.
 *
 *  Removes specified project resource identified by tenant resource tag.
 *  It will remove project lien with 'TenantManager' origin if that was added.
 *  It will then attempt to delete the project.
 *  If that operation fails, this method fails.
 *  Operation<response: Empty>.
 *
 *  @param object The @c
 *    GTLRServiceConsumerManagement_RemoveTenantProjectRequest to include in the
 *    query.
 *  @param name Name of the tenancy unit.
 *    Such as
 *    'services/service.googleapis.com/projects/12345/tenancyUnits/abcd'.
 *
 *  @returns GTLRServiceConsumerManagementQuery_ServicesTenancyUnitsRemoveProject
 */
+ (instancetype)queryWithObject:(GTLRServiceConsumerManagement_RemoveTenantProjectRequest *)object
                           name:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
