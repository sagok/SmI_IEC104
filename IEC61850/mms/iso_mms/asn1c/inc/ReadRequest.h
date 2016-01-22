/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_ReadRequest_H_
#define	_ReadRequest_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BOOLEAN.h"
#include "VariableAccessSpecification.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ReadRequest */
typedef struct ReadRequest {
	BOOLEAN_t	*specificationWithResult	/* DEFAULT FALSE */;
	VariableAccessSpecification_t	 variableAccessSpecification;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReadRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReadRequest;

#ifdef __cplusplus
}
#endif

#endif	/* _ReadRequest_H_ */
