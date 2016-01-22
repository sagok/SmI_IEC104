/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_ConfirmedResponsePdu_H_
#define	_ConfirmedResponsePdu_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Unsigned32.h"
#include "ConfirmedServiceResponse.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ConfirmedResponsePdu */
typedef struct ConfirmedResponsePdu {
	Unsigned32_t	 invokeID;
	ConfirmedServiceResponse_t	 confirmedServiceResponse;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ConfirmedResponsePdu_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ConfirmedResponsePdu;

#ifdef __cplusplus
}
#endif

#endif	/* _ConfirmedResponsePdu_H_ */
