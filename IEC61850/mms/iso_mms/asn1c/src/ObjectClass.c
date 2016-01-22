/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#include "asn_internal.h"

#include "ObjectClass.h"

static asn_TYPE_member_t asn_MBR_ObjectClass_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ObjectClass, choice.basicObjectClass),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"basicObjectClass"
		},
};
static asn_TYPE_tag2member_t asn_MAP_ObjectClass_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* basicObjectClass at 464 */
};
static asn_CHOICE_specifics_t asn_SPC_ObjectClass_specs_1 = {
	sizeof(struct ObjectClass),
	offsetof(struct ObjectClass, _asn_ctx),
	offsetof(struct ObjectClass, present),
	sizeof(((struct ObjectClass *)0)->present),
	asn_MAP_ObjectClass_tag2el_1,
	1,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ObjectClass = {
	"ObjectClass",
	"ObjectClass",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_ObjectClass_1,
	1,	/* Elements count */
	&asn_SPC_ObjectClass_specs_1	/* Additional specs */
};

