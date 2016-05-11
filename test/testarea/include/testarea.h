#ifndef __TESTAREA_H_INCLUDED__
#define __TESTAREA_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus


// include required areas definitions
#include "mal.h"
//#include "testarea.h"

// standard area identifiers
#define TESTAREA_AREA_NUMBER 200
#define TESTAREA_AREA_VERSION 1

// generated code for enumeration testarea_testenumeration
typedef enum {
  TESTAREA_TESTENUMERATION_FIRST,
  TESTAREA_TESTENUMERATION_SECOND,
  TESTAREA_TESTENUMERATION_LAST
} testarea_testenumeration_t;

// short form for enumeration type testarea_testenumeration
#define TESTAREA_TESTENUMERATION_SHORT_FORM 0xc8000001000002L
typedef struct _testarea_testenumeration_list_t testarea_testenumeration_list_t;

// short form for list of enumeration type testarea_testenumeration
#define TESTAREA_TESTENUMERATION_LIST_SHORT_FORM 0xc8000001fffffeL

// standard service identifiers
#define TESTAREA_TESTSERVICE_SERVICE_NUMBER 1

// generated code for composite TestArea:TestService:TestComposite
typedef struct _testarea_testservice_testcomposite_t testarea_testservice_testcomposite_t;

// generated code for composite TestArea:TestService:TestFinalCompositeA
typedef struct _testarea_testservice_testfinalcompositea_t testarea_testservice_testfinalcompositea_t;

// short form for composite type TestArea:TestService:TestComposite
#define TESTAREA_TESTSERVICE_TESTCOMPOSITE_SHORT_FORM 0xc8000101000001L
typedef struct _testarea_testservice_testcomposite_list_t testarea_testservice_testcomposite_list_t;

// short form for list of composite type TestArea:TestService:TestComposite
#define TESTAREA_TESTSERVICE_TESTCOMPOSITE_LIST_SHORT_FORM 0xc8000101ffffffL

// generated code for composite TestArea:TestService:TestFullComposite
typedef struct _testarea_testservice_testfullcomposite_t testarea_testservice_testfullcomposite_t;

// short form for composite type TestArea:TestService:TestFullComposite
#define TESTAREA_TESTSERVICE_TESTFULLCOMPOSITE_SHORT_FORM 0xc8000101000002L
typedef struct _testarea_testservice_testfullcomposite_list_t testarea_testservice_testfullcomposite_list_t;

// short form for list of composite type TestArea:TestService:TestFullComposite
#define TESTAREA_TESTSERVICE_TESTFULLCOMPOSITE_LIST_SHORT_FORM 0xc8000101fffffeL

// generated code for composite TestArea:TestService:TestUpdate
typedef struct _testarea_testservice_testupdate_t testarea_testservice_testupdate_t;

// short form for composite type TestArea:TestService:TestUpdate
#define TESTAREA_TESTSERVICE_TESTUPDATE_SHORT_FORM 0xc8000101000003L
typedef struct _testarea_testservice_testupdate_list_t testarea_testservice_testupdate_list_t;

// short form for list of composite type TestArea:TestService:TestUpdate
#define TESTAREA_TESTSERVICE_TESTUPDATE_LIST_SHORT_FORM 0xc8000101fffffdL

// generated code for operation testarea_testservice_testsend
#define TESTAREA_TESTSERVICE_TESTSEND_OPERATION_NUMBER 1
int testarea_testservice_testsend_send(mal_endpoint_t * endpoint, mal_message_t * init_message, mal_uri_t * provider_uri);
int testarea_testservice_testsend_send_add_encoding_length_0(int encoding_format_code, void * encoder, testarea_testservice_testcomposite_t * element, void *cursor);
int testarea_testservice_testsend_send_encode_0(int encoding_format_code, void *cursor, void * encoder, testarea_testservice_testcomposite_t * element);
int testarea_testservice_testsend_send_decode_0(int encoding_format_code, void *cursor, void * decoder, testarea_testservice_testcomposite_t ** element_res);
int testarea_testservice_testsend_send_add_encoding_length_1(int encoding_format_code, void * encoder, mal_string_list_t * element, void *cursor);
int testarea_testservice_testsend_send_encode_1(int encoding_format_code, void *cursor, void * encoder, mal_string_list_t * element);
int testarea_testservice_testsend_send_decode_1(int encoding_format_code, void *cursor, void * decoder, mal_string_list_t ** element_res);

// generated code for operation testarea_testservice_testsubmit
#define TESTAREA_TESTSERVICE_TESTSUBMIT_OPERATION_NUMBER 2
int testarea_testservice_testsubmit_submit(mal_endpoint_t * endpoint, mal_message_t * init_message, mal_uri_t * provider_uri);
int testarea_testservice_testsubmit_submit_add_encoding_length_0(int encoding_format_code, void * encoder, testarea_testservice_testcomposite_t * element, void *cursor);
int testarea_testservice_testsubmit_submit_encode_0(int encoding_format_code, void *cursor, void * encoder, testarea_testservice_testcomposite_t * element);
int testarea_testservice_testsubmit_submit_decode_0(int encoding_format_code, void *cursor, void * decoder, testarea_testservice_testcomposite_t ** element_res);
int testarea_testservice_testsubmit_submit_add_encoding_length_1(int encoding_format_code, void * encoder, mal_string_list_t * element, void *cursor);
int testarea_testservice_testsubmit_submit_encode_1(int encoding_format_code, void *cursor, void * encoder, mal_string_list_t * element);
int testarea_testservice_testsubmit_submit_decode_1(int encoding_format_code, void *cursor, void * decoder, mal_string_list_t ** element_res);
int testarea_testservice_testsubmit_submit_ack(mal_endpoint_t * endpoint, mal_message_t * init_message, mal_message_t * result_message, bool is_error_message);

// generated code for operation testarea_testservice_testrequest
#define TESTAREA_TESTSERVICE_TESTREQUEST_OPERATION_NUMBER 3
int testarea_testservice_testrequest_request(mal_endpoint_t * endpoint, mal_message_t * init_message, mal_uri_t * provider_uri);
int testarea_testservice_testrequest_request_add_encoding_length_0(int encoding_format_code, void * encoder, testarea_testservice_testcomposite_t * element, void *cursor);
int testarea_testservice_testrequest_request_encode_0(int encoding_format_code, void *cursor, void * encoder, testarea_testservice_testcomposite_t * element);
int testarea_testservice_testrequest_request_decode_0(int encoding_format_code, void *cursor, void * decoder, testarea_testservice_testcomposite_t ** element_res);
int testarea_testservice_testrequest_request_add_encoding_length_1(int encoding_format_code, void * encoder, mal_string_list_t * element, void *cursor);
int testarea_testservice_testrequest_request_encode_1(int encoding_format_code, void *cursor, void * encoder, mal_string_list_t * element);
int testarea_testservice_testrequest_request_decode_1(int encoding_format_code, void *cursor, void * decoder, mal_string_list_t ** element_res);
int testarea_testservice_testrequest_request_response(mal_endpoint_t * endpoint, mal_message_t * init_message, mal_message_t * result_message, bool is_error_message);
int testarea_testservice_testrequest_request_response_add_encoding_length_0(int encoding_format_code, void * encoder, mal_string_list_t * element, void *cursor);
int testarea_testservice_testrequest_request_response_encode_0(int encoding_format_code, void *cursor, void * encoder, mal_string_list_t * element);
int testarea_testservice_testrequest_request_response_decode_0(int encoding_format_code, void *cursor, void * decoder, mal_string_list_t ** element_res);

// generated code for operation testarea_testservice_testinvoke
#define TESTAREA_TESTSERVICE_TESTINVOKE_OPERATION_NUMBER 4
int testarea_testservice_testinvoke_invoke(mal_endpoint_t * endpoint, mal_message_t * init_message, mal_uri_t * provider_uri);
int testarea_testservice_testinvoke_invoke_add_encoding_length_0(int encoding_format_code, void * encoder, mal_string_list_t * element, void *cursor);
int testarea_testservice_testinvoke_invoke_encode_0(int encoding_format_code, void *cursor, void * encoder, mal_string_list_t * element);
int testarea_testservice_testinvoke_invoke_decode_0(int encoding_format_code, void *cursor, void * decoder, mal_string_list_t ** element_res);
int testarea_testservice_testinvoke_invoke_ack(mal_endpoint_t * endpoint, mal_message_t * init_message, mal_message_t * result_message, bool is_error_message);
int testarea_testservice_testinvoke_invoke_response(mal_endpoint_t * endpoint, mal_message_t * init_message, mal_message_t * result_message, bool is_error_message);
int testarea_testservice_testinvoke_invoke_response_add_encoding_length_0(int encoding_format_code, void * encoder, mal_string_list_t * element, void *cursor);
int testarea_testservice_testinvoke_invoke_response_encode_0(int encoding_format_code, void *cursor, void * encoder, mal_string_list_t * element);
int testarea_testservice_testinvoke_invoke_response_decode_0(int encoding_format_code, void *cursor, void * decoder, mal_string_list_t ** element_res);

// generated code for operation testarea_testservice_testprogress
#define TESTAREA_TESTSERVICE_TESTPROGRESS_OPERATION_NUMBER 5
int testarea_testservice_testprogress_progress(mal_endpoint_t * endpoint, mal_message_t * init_message, mal_uri_t * provider_uri);
int testarea_testservice_testprogress_progress_add_encoding_length_0(int encoding_format_code, void * encoder, mal_string_list_t * element, void *cursor);
int testarea_testservice_testprogress_progress_encode_0(int encoding_format_code, void *cursor, void * encoder, mal_string_list_t * element);
int testarea_testservice_testprogress_progress_decode_0(int encoding_format_code, void *cursor, void * decoder, mal_string_list_t ** element_res);
int testarea_testservice_testprogress_progress_ack(mal_endpoint_t * endpoint, mal_message_t * init_message, mal_message_t * result_message, bool is_error_message);
int testarea_testservice_testprogress_progress_update(mal_endpoint_t * endpoint, mal_message_t * init_message, mal_message_t * result_message, bool is_error_message);
int testarea_testservice_testprogress_progress_response(mal_endpoint_t * endpoint, mal_message_t * init_message, mal_message_t * result_message, bool is_error_message);
int testarea_testservice_testprogress_progress_response_add_encoding_length_0(int encoding_format_code, void * encoder, mal_string_list_t * element, void *cursor);
int testarea_testservice_testprogress_progress_response_encode_0(int encoding_format_code, void *cursor, void * encoder, mal_string_list_t * element);
int testarea_testservice_testprogress_progress_response_decode_0(int encoding_format_code, void *cursor, void * decoder, mal_string_list_t ** element_res);

// generated code for operation testarea_testservice_testmonitor
#define TESTAREA_TESTSERVICE_TESTMONITOR_OPERATION_NUMBER 6
int testarea_testservice_testmonitor_update_add_encoding_length_0(int encoding_format_code, void * encoder, testarea_testservice_testupdate_list_t * element, void *cursor);
int testarea_testservice_testmonitor_update_encode_0(int encoding_format_code, void *cursor, void * encoder, testarea_testservice_testupdate_list_t * element);
int testarea_testservice_testmonitor_update_decode_0(int encoding_format_code, void *cursor, void * decoder, testarea_testservice_testupdate_list_t ** element_res);
int testarea_testservice_testmonitor_update_add_encoding_length_1(int encoding_format_code, void * encoder, mal_string_list_t * element, void *cursor);
int testarea_testservice_testmonitor_update_encode_1(int encoding_format_code, void *cursor, void * encoder, mal_string_list_t * element);
int testarea_testservice_testmonitor_update_decode_1(int encoding_format_code, void *cursor, void * decoder, mal_string_list_t ** element_res);
int testarea_testservice_testmonitor_register(mal_endpoint_t * endpoint, mal_message_t * message, mal_uri_t * broker_uri);
int testarea_testservice_testmonitor_publish_register(mal_endpoint_t * endpoint, mal_message_t * message, mal_uri_t * broker_uri);
int testarea_testservice_testmonitor_publish(mal_endpoint_t * endpoint, mal_message_t * message, mal_uri_t * broker_uri, long initial_publish_register_tid);
int testarea_testservice_testmonitor_deregister(mal_endpoint_t * endpoint, mal_message_t * message, mal_uri_t * broker_uri);
int testarea_testservice_testmonitor_publish_deregister(mal_endpoint_t * endpoint, mal_message_t * message, mal_uri_t * broker_uri);

// generated code for operation testarea_testservice_testinvokealltypes
#define TESTAREA_TESTSERVICE_TESTINVOKEALLTYPES_OPERATION_NUMBER 7
int testarea_testservice_testinvokealltypes_invoke(mal_endpoint_t * endpoint, mal_message_t * init_message, mal_uri_t * provider_uri);
int testarea_testservice_testinvokealltypes_invoke_add_encoding_length_0(int encoding_format_code, void * encoder, testarea_testservice_testfullcomposite_t * element, void *cursor);
int testarea_testservice_testinvokealltypes_invoke_encode_0(int encoding_format_code, void *cursor, void * encoder, testarea_testservice_testfullcomposite_t * element);
int testarea_testservice_testinvokealltypes_invoke_decode_0(int encoding_format_code, void *cursor, void * decoder, testarea_testservice_testfullcomposite_t ** element_res);
int testarea_testservice_testinvokealltypes_invoke_ack(mal_endpoint_t * endpoint, mal_message_t * init_message, mal_message_t * result_message, bool is_error_message);
int testarea_testservice_testinvokealltypes_invoke_response(mal_endpoint_t * endpoint, mal_message_t * init_message, mal_message_t * result_message, bool is_error_message);
int testarea_testservice_testinvokealltypes_invoke_response_add_encoding_length_0(int encoding_format_code, void * encoder, testarea_testservice_testfullcomposite_t * element, void *cursor);
int testarea_testservice_testinvokealltypes_invoke_response_encode_0(int encoding_format_code, void *cursor, void * encoder, testarea_testservice_testfullcomposite_t * element);
int testarea_testservice_testinvokealltypes_invoke_response_decode_0(int encoding_format_code, void *cursor, void * decoder, testarea_testservice_testfullcomposite_t ** element_res);

// test function
void testarea_test(bool verbose);

#define TESTAREA_TESTSERVICE_TESTFINALCOMPOSITEA_SHORT_FORM 281474993487896L

int testarea_testservice_testsend_send_add_encoding_length_2_testarea_testservice_testfinalcompositea(
    int encoding_format_code, void * encoder,
    testarea_testservice_testfinalcompositea_t *element,
    void *cursor);

int testarea_testservice_testsend_send_encode_2_testarea_testservice_testfinalcompositea(
    int encoding_format_code, void *cursor, void *encoder,
    testarea_testservice_testfinalcompositea_t *element);

int testarea_testservice_testsend_send_decode_2(int encoding_format_code,
    void *cursor, void *decoder, long *short_form,
    void **res);

#include "testarea_testenumeration_list.h"
#include "testarea_testservice_testcomposite.h"
#include "testarea_testservice_testcomposite_list.h"
#include "testarea_testservice_testfullcomposite.h"
#include "testarea_testservice_testfullcomposite_list.h"
#include "testarea_testservice_testfinalcompositea.h"
#include "testarea_testservice_testupdate.h"
#include "testarea_testservice_testupdate_list.h"

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __TESTAREA_H_INCLUDED__
