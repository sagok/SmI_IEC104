/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_ServiceError_H_
#define	_ServiceError_H_


#include "asn_application.h"

/* Including external dependencies */
#include "INTEGER.h"
#include "VisibleString.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ServiceError__errorClass_PR {
	ServiceError__errorClass_PR_NOTHING,	/* No components present */
	ServiceError__errorClass_PR_vmdstate,
	ServiceError__errorClass_PR_applicationreference,
	ServiceError__errorClass_PR_definition,
	ServiceError__errorClass_PR_resource,
	ServiceError__errorClass_PR_service,
	ServiceError__errorClass_PR_servicepreempt,
	ServiceError__errorClass_PR_timeresolution,
	ServiceError__errorClass_PR_access,
	ServiceError__errorClass_PR_initiate,
	ServiceError__errorClass_PR_conclude,
	ServiceError__errorClass_PR_cancel,
	ServiceError__errorClass_PR_file,
	ServiceError__errorClass_PR_others
} ServiceError__errorClass_PR;
typedef enum ServiceError__errorClass__vmdstate {
	ServiceError__errorClass__vmdstate_other	= 0,
	ServiceError__errorClass__vmdstate_vmdstateconflict	= 1,
	ServiceError__errorClass__vmdstate_vmdoperationalproblem	= 2,
	ServiceError__errorClass__vmdstate_domaintransferproblem	= 3,
	ServiceError__errorClass__vmdstate_statemachineidinvalid	= 4
} e_ServiceError__errorClass__vmdstate;
typedef enum ServiceError__errorClass__applicationreference {
	ServiceError__errorClass__applicationreference_other	= 0,
	ServiceError__errorClass__applicationreference_aplicationunreachable	= 1,
	ServiceError__errorClass__applicationreference_connectionlost	= 2,
	ServiceError__errorClass__applicationreference_applicationreferenceinvalid	= 3,
	ServiceError__errorClass__applicationreference_contextunsupported	= 4
} e_ServiceError__errorClass__applicationreference;
typedef enum ServiceError__errorClass__definition {
	ServiceError__errorClass__definition_other	= 0,
	ServiceError__errorClass__definition_objectundefined	= 1,
	ServiceError__errorClass__definition_invalidaddress	= 2,
	ServiceError__errorClass__definition_typeunsupported	= 3,
	ServiceError__errorClass__definition_typeinconsistent	= 4,
	ServiceError__errorClass__definition_objectexists	= 5,
	ServiceError__errorClass__definition_objectattributeinconsistent	= 6
} e_ServiceError__errorClass__definition;
typedef enum ServiceError__errorClass__resource {
	ServiceError__errorClass__resource_other	= 0,
	ServiceError__errorClass__resource_memoryunavailable	= 1,
	ServiceError__errorClass__resource_processorresourceunavailable	= 2,
	ServiceError__errorClass__resource_massstorageunavailable	= 3,
	ServiceError__errorClass__resource_capabilityunavailable	= 4,
	ServiceError__errorClass__resource_capabilityunknown	= 5
} e_ServiceError__errorClass__resource;
typedef enum ServiceError__errorClass__service {
	ServiceError__errorClass__service_other	= 0,
	ServiceError__errorClass__service_primitivesoutofsequence	= 1,
	ServiceError__errorClass__service_objectstateconflict	= 2,
	ServiceError__errorClass__service_pdusize	= 3,
	ServiceError__errorClass__service_continuationinvalid	= 4,
	ServiceError__errorClass__service_objectconstraintconflict	= 5
} e_ServiceError__errorClass__service;
typedef enum ServiceError__errorClass__servicepreempt {
	ServiceError__errorClass__servicepreempt_other	= 0,
	ServiceError__errorClass__servicepreempt_timeout	= 1,
	ServiceError__errorClass__servicepreempt_deadlock	= 2,
	ServiceError__errorClass__servicepreempt_cancel	= 3
} e_ServiceError__errorClass__servicepreempt;
typedef enum ServiceError__errorClass__timeresolution {
	ServiceError__errorClass__timeresolution_other	= 0,
	ServiceError__errorClass__timeresolution_unsupportabletimeresolution	= 1
} e_ServiceError__errorClass__timeresolution;
typedef enum ServiceError__errorClass__access {
	ServiceError__errorClass__access_other	= 0,
	ServiceError__errorClass__access_objectaccessunsupported	= 1,
	ServiceError__errorClass__access_objectnonexistent	= 2,
	ServiceError__errorClass__access_objectaccessdenied	= 3,
	ServiceError__errorClass__access_objectinvalidated	= 4
} e_ServiceError__errorClass__access;
typedef enum ServiceError__errorClass__initiate {
	ServiceError__errorClass__initiate_other	= 0,
	ServiceError__errorClass__initiate_versionincompatible	= 1,
	ServiceError__errorClass__initiate_maxsegmentinsufficient	= 2,
	ServiceError__errorClass__initiate_maxservicesoutstandingcallinginsufficient	= 3,
	ServiceError__errorClass__initiate_maxservicesoutstandingcalledinsufficient	= 4,
	ServiceError__errorClass__initiate_serviceCBBinsufficient	= 5,
	ServiceError__errorClass__initiate_parameterCBBinsufficient	= 6,
	ServiceError__errorClass__initiate_nestinglevelinsufficient	= 7
} e_ServiceError__errorClass__initiate;
typedef enum ServiceError__errorClass__conclude {
	ServiceError__errorClass__conclude_other	= 0,
	ServiceError__errorClass__conclude_furthercommunicationrequired	= 1
} e_ServiceError__errorClass__conclude;
typedef enum ServiceError__errorClass__cancel {
	ServiceError__errorClass__cancel_other	= 0,
	ServiceError__errorClass__cancel_invokeidunknown	= 1,
	ServiceError__errorClass__cancel_cancelnotpossible	= 2
} e_ServiceError__errorClass__cancel;
typedef enum ServiceError__errorClass__file {
	ServiceError__errorClass__file_other	= 0,
	ServiceError__errorClass__file_filenameambiguous	= 1,
	ServiceError__errorClass__file_filebusy	= 2,
	ServiceError__errorClass__file_filenamesyntaxError	= 3,
	ServiceError__errorClass__file_contenttypeinvalid	= 4,
	ServiceError__errorClass__file_positioninvalid	= 5,
	ServiceError__errorClass__file_fileaccesdenied	= 6,
	ServiceError__errorClass__file_filenonexistent	= 7,
	ServiceError__errorClass__file_duplicatefilename	= 8,
	ServiceError__errorClass__file_insufficientspaceinfilestore	= 9
} e_ServiceError__errorClass__file;

/* ServiceError */
typedef struct ServiceError {
	struct ServiceError__errorClass {
		ServiceError__errorClass_PR present;
		union ServiceError__errorClass_u {
			INTEGER_t	 vmdstate;
			INTEGER_t	 applicationreference;
			INTEGER_t	 definition;
			INTEGER_t	 resource;
			INTEGER_t	 service;
			INTEGER_t	 servicepreempt;
			INTEGER_t	 timeresolution;
			INTEGER_t	 access;
			INTEGER_t	 initiate;
			INTEGER_t	 conclude;
			INTEGER_t	 cancel;
			INTEGER_t	 file;
			INTEGER_t	 others;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} errorClass;
	INTEGER_t	*additionalCode	/* OPTIONAL */;
	VisibleString_t	*additionalDescription	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServiceError_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServiceError;

#ifdef __cplusplus
}
#endif

#endif	/* _ServiceError_H_ */
