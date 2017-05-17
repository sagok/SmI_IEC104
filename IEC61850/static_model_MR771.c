/*
 * static_model_MR771.c
 *
 * automatically generated from simpleIO_direct_control.scd
 */

#if defined (MR771)

#include "stdlib.h"
#include "model.h"
#include "main.h"
#include "static_model_MR771.h"
#include "IEC850.h"

//IedModel iedModel;


static void initializeValues();

extern DataSet iedModelds_LD0_LLN0_dataset0;
extern DataSet iedModelds_LD0_LLN0_dataset1;
extern DataSet iedModelds_LD0_LLN0_dataset2;
extern DataSet iedModelds_LD0_LLN0_dataset3;
extern DataSet iedModelds_LD0_LLN0_dataset4;
extern DataSet iedModelds_LD0_LLN0_dataset5;
extern DataSet iedModelds_LD0_LLN0_dataset6;
extern DataSet iedModelds_LD0_LLN0_dataset7;
extern DataSet iedModelds_LD0_LLN0_dataset8;
extern DataSet iedModelds_LD0_LLN0_dataset9;
extern DataSet iedModelds_LD0_LLN0_dataset10;

// report
extern ReportControlBlock iedModel_LD0_LLN0_report0;
extern ReportControlBlock iedModel_LD0_LLN0_report1;
extern ReportControlBlock iedModel_LD0_LLN0_report2;
extern ReportControlBlock iedModel_LD0_LLN0_report3;
extern ReportControlBlock iedModel_LD0_LLN0_report4;
extern ReportControlBlock iedModel_LD0_LLN0_report5;
extern ReportControlBlock iedModel_LD0_LLN0_report6;
extern ReportControlBlock iedModel_LD0_LLN0_report7;
extern ReportControlBlock iedModel_LD0_LLN0_report8;
extern ReportControlBlock iedModel_LD0_LLN0_report9;
extern ReportControlBlock iedModel_LD0_LLN0_report10;

// gse
extern GSEControlBlock iedModel_LD0_LLN0_gse0;
extern GSEControlBlock iedModel_LD0_LLN0_gse1;

//-----
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda0;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda1;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda2;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda3;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda4;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda5;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda6;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda7;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda8;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda9;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda10;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda11;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda12;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda13;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda14;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda15;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda16;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda17;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda18;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda19;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda20;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda21;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda22;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda23;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda24;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda25;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda26;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda27;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda28;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda29;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda30;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda31;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda32;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda33;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda34;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda35;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda36;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda37;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda38;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda39;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda40;
extern	DataSetEntry iedModelds_LD0_LLN0_dataset_fcda41;


extern DataSetEntry iedModelds_LD0_MMXU1_fcda0;
extern DataSetEntry iedModelds_LD0_MMXU1_fcda1;
extern DataSetEntry iedModelds_LD0_MMXU1_fcda2;
extern DataSetEntry iedModelds_LD0_MMXU1_fcda3;
extern DataSetEntry iedModelds_LD0_MMXU1_fcda4;
extern DataSetEntry iedModelds_LD0_MMXU1_fcda5;

extern DataSetEntry iedModelds_LD0_MMXU2_fcda0;
extern DataSetEntry iedModelds_LD0_MMXU2_fcda1;
extern DataSetEntry iedModelds_LD0_MMXU2_fcda2;
extern DataSetEntry iedModelds_LD0_MMXU2_fcda3;
extern DataSetEntry iedModelds_LD0_MMXU2_fcda4;
extern DataSetEntry iedModelds_LD0_MMXU2_fcda5;

extern DataSetEntry iedModelds_LD0_MMXU3_fcda0;
extern DataSetEntry iedModelds_LD0_MMXU3_fcda1;
extern DataSetEntry iedModelds_LD0_MMXU3_fcda2;
extern DataSetEntry iedModelds_LD0_MMXU3_fcda3;
extern DataSetEntry iedModelds_LD0_MMXU3_fcda4;
extern DataSetEntry iedModelds_LD0_MMXU3_fcda5;

extern DataSetEntry iedModelds_LD0_MMXU4_fcda0;
extern DataSetEntry iedModelds_LD0_MMXU4_fcda1;
extern DataSetEntry iedModelds_LD0_MMXU4_fcda2;
extern DataSetEntry iedModelds_LD0_MMXU4_fcda3;
extern DataSetEntry iedModelds_LD0_MMXU4_fcda4;
extern DataSetEntry iedModelds_LD0_MMXU4_fcda5;
extern DataSetEntry iedModelds_LD0_MMXU4_fcda6;
extern DataSetEntry iedModelds_LD0_MMXU4_fcda7;
extern DataSetEntry iedModelds_LD0_MMXU4_fcda8;

extern DataSetEntry iedModelds_LD0_MMXU5_fcda0;
extern DataSetEntry iedModelds_LD0_MMXU5_fcda1;
extern DataSetEntry iedModelds_LD0_MMXU5_fcda2;
extern DataSetEntry iedModelds_LD0_MMXU5_fcda3;
extern DataSetEntry iedModelds_LD0_MMXU5_fcda4;
extern DataSetEntry iedModelds_LD0_MMXU5_fcda5;

extern DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda0;
extern DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda1;
extern DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda2;
extern DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda3;
extern DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda4;
extern DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda5;
extern DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda6;
extern DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda7;
extern DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda8;
extern DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda9;
extern DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda10;
extern DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda11;
extern DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda12;
extern DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda13;
extern DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda14;
extern DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda15;

extern DataSetEntry iedModelds_LD0_LLN0_dataset_D4_fcda0;
extern DataSetEntry iedModelds_LD0_LLN0_dataset_D4_fcda1;

extern DataSetEntry iedModelds_LD0_LLN0_dataset_D5_fcda0;
extern DataSetEntry iedModelds_LD0_LLN0_dataset_D5_fcda1;
extern DataSetEntry iedModelds_LD0_LLN0_dataset_D5_fcda2;


/***********************************************************************
 * ���������� ����������
 ***********************************************************************/

LogicalDevice iedModel_Generic_LD0;
LogicalDevice iedModel_Generic_PROT;
LogicalDevice iedModel_Generic_CTRL;
LogicalDevice iedModel_Generic_MES;
LogicalDevice iedModel_Generic_GGIO;


/***********************************************************************
 * ���������� ����
 ***********************************************************************/
// ---------------------------------------------------------------------------------------------------------
// 0    000    00
// 0    0  0  0  0
// 0    0  0  0  0
// 0    0  0  0  0
// 0    0  0  0  0
// 000  000    00
// ---------------------------------------------------------------------------------------------------------
LogicalNode   iedModel_LD0_LLN0;								// ���������� ���� ����. ���: LLN0
DataObject    iedModel_LD0_LLN0_Mod;							// Mod - �����
DataAttribute iedModel_LD0_LLN0_Mod_q;
DataAttribute iedModel_LD0_LLN0_Mod_t;
DataAttribute iedModel_LD0_LLN0_Mod_stVal;
DataAttribute iedModel_LD0_LLN0_Mod_ctlModel;

DataObject    iedModel_LD0_LLN0_Beh;							// Beh - ����� ������
DataAttribute iedModel_LD0_LLN0_Beh_stVal;
DataAttribute iedModel_LD0_LLN0_Beh_q;
DataAttribute iedModel_LD0_LLN0_Beh_t;

DataObject    iedModel_LD0_LLN0_Health;						// Health - ��������� �����������������
DataAttribute iedModel_LD0_LLN0_Health_stVal;
DataAttribute iedModel_LD0_LLN0_Health_q;
DataAttribute iedModel_LD0_LLN0_Health_t;

DataObject    iedModel_LD0_LLN0_NamPlt;						// NamPIt - ���������� ��������
DataAttribute iedModel_LD0_LLN0_NamPlt_vendor;
DataAttribute iedModel_LD0_LLN0_NamPlt_swRev;
DataAttribute iedModel_LD0_LLN0_NamPlt_d;
DataAttribute iedModel_LD0_LLN0_NamPlt_configRev;
DataAttribute iedModel_LD0_LLN0_NamPlt_ldNs;

DataObject    iedModel_LD0_LLN0_SGCB;							// SGCB - ���������� �������� �������
DataAttribute iedModel_LD0_LLN0_SGCB_ActSG;
DataAttribute iedModel_LD0_LLN0_SGCB_q;
DataAttribute iedModel_LD0_LLN0_SGCB_t;

// LPHD ----------------------------------------------------------------------------------------------------
LogicalNode   iedModel_LD0_LPHD1;								// LPHD - ���������� � ���������� ����������. ������������: LPHD

DataObject    iedModel_LD0_LPHD1_PhyNam;						// PhyNam - ���������� �������� ����������� ����������
DataAttribute iedModel_LD0_LPHD1_PhyNam_vendor;

DataObject    iedModel_LD0_LPHD1_PhyHealth;					// PhyHealth - ��������� ����������������� ����������� ����������
DataAttribute iedModel_LD0_LPHD1_PhyHealth_stVal;
DataAttribute iedModel_LD0_LPHD1_PhyHealth_q;
DataAttribute iedModel_LD0_LPHD1_PhyHealth_t;

DataObject    iedModel_LD0_LPHD1_Proxy;						// Proxy - ��������, ������ �� ������ LN �����������
DataAttribute iedModel_LD0_LPHD1_Proxy_stVal;
DataAttribute iedModel_LD0_LPHD1_Proxy_q;
DataAttribute iedModel_LD0_LPHD1_Proxy_t;

// ---------------------------------------------------------------------------------------------------------
// 000   000    00   00000
// 0  0  0  0  0  0    0
// 0  0  0  0  0  0    0
// 000   000   0  0    0
// 0     0 0   0  0    0
// 0     0  0   00     0
// ---------------------------------------------------------------------------------------------------------
LogicalNode   iedModel_PROT_LLN0;								// ���������� ���� ����. ���: LLN0
DataObject    iedModel_PROT_LLN0_Mod;							// Mod - �����
DataAttribute iedModel_PROT_LLN0_Mod_q;
DataAttribute iedModel_PROT_LLN0_Mod_t;
DataAttribute iedModel_PROT_LLN0_Mod_stVal;
DataAttribute iedModel_PROT_LLN0_Mod_ctlModel;

DataObject    iedModel_PROT_LLN0_Beh;							// Beh - ����� ������
DataAttribute iedModel_PROT_LLN0_Beh_stVal;
DataAttribute iedModel_PROT_LLN0_Beh_q;
DataAttribute iedModel_PROT_LLN0_Beh_t;

DataObject    iedModel_PROT_LLN0_Health;						// Health - ��������� �����������������
DataAttribute iedModel_PROT_LLN0_Health_stVal;
DataAttribute iedModel_PROT_LLN0_Health_q;
DataAttribute iedModel_PROT_LLN0_Health_t;

DataObject    iedModel_PROT_LLN0_NamPlt;						// NamPIt - ���������� ��������
DataAttribute iedModel_PROT_LLN0_NamPlt_vendor;
DataAttribute iedModel_PROT_LLN0_NamPlt_swRev;
DataAttribute iedModel_PROT_LLN0_NamPlt_d;
DataAttribute iedModel_PROT_LLN0_NamPlt_configRev;
DataAttribute iedModel_PROT_LLN0_NamPlt_ldNs;

DataObject    iedModel_PROT_LLN0_SGCB;							// SGCB - ���������� �������� �������
DataAttribute iedModel_PROT_LLN0_SGCB_ActSG;
DataAttribute iedModel_PROT_LLN0_SGCB_q;
DataAttribute iedModel_PROT_LLN0_SGCB_t;
// ---------------------------------------------------------------------------------------------------------
LogicalNode   iedModel_PROT_LPHD1;								// LPHD - ���������� � ���������� ����������. ������������: LPHD

DataObject    iedModel_PROT_LPHD1_PhyNam;						// PhyNam - ���������� �������� ����������� ����������
DataAttribute iedModel_PROT_LPHD1_PhyNam_vendor;

DataObject    iedModel_PROT_LPHD1_PhyHealth;					// PhyHealth - ��������� ����������������� ����������� ����������
DataAttribute iedModel_PROT_LPHD1_PhyHealth_stVal;
DataAttribute iedModel_PROT_LPHD1_PhyHealth_q;
DataAttribute iedModel_PROT_LPHD1_PhyHealth_t;

DataObject    iedModel_PROT_LPHD1_Proxy;						// Proxy - ��������, ������ �� ������ LN �����������
DataAttribute iedModel_PROT_LPHD1_Proxy_stVal;
DataAttribute iedModel_PROT_LPHD1_Proxy_q;
DataAttribute iedModel_PROT_LPHD1_Proxy_t;

//----------------------------------------------------------------------------
// IPTOC1
//----------------------------------------------------------------------------

LogicalNode   iedModel_PROT_IPTOC1;

DataObject    iedModel_PROT_IPTOC1_Mod;					// �����
DataAttribute iedModel_PROT_IPTOC1_Mod_q;
DataAttribute iedModel_PROT_IPTOC1_Mod_t;
DataAttribute iedModel_PROT_IPTOC1_Mod_stVal;

DataObject    iedModel_PROT_IPTOC1_Beh;					// ����� ������
DataAttribute iedModel_PROT_IPTOC1_Beh_stVal;
DataAttribute iedModel_PROT_IPTOC1_Beh_q;
DataAttribute iedModel_PROT_IPTOC1_Beh_t;

DataObject    iedModel_PROT_IPTOC1_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_IPTOC1_Health_stVal;
DataAttribute iedModel_PROT_IPTOC1_Health_q;
DataAttribute iedModel_PROT_IPTOC1_Health_t;

DataObject    iedModel_PROT_IPTOC1_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_IPTOC1_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_IPTOC1_NamPlt_swRev;		// 		������� ����������� �����
DataAttribute iedModel_PROT_IPTOC1_NamPlt_d;			//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_IPTOC1_Str;
DataAttribute iedModel_PROT_IPTOC1_Str_general;
DataAttribute iedModel_PROT_IPTOC1_Str_dirGeneral;
DataAttribute iedModel_PROT_IPTOC1_Str_q;
DataAttribute iedModel_PROT_IPTOC1_Str_t;

DataObject    iedModel_PROT_IPTOC1_Op;
DataAttribute iedModel_PROT_IPTOC1_Op_general;
DataAttribute iedModel_PROT_IPTOC1_Op_q;
DataAttribute iedModel_PROT_IPTOC1_Op_t;

//----------------------------------------------------------------------------
// IPTOC2
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_IPTOC2;

DataObject    iedModel_PROT_IPTOC2_Mod;					// �����
DataAttribute iedModel_PROT_IPTOC2_Mod_q;
DataAttribute iedModel_PROT_IPTOC2_Mod_t;
DataAttribute iedModel_PROT_IPTOC2_Mod_stVal;

DataObject    iedModel_PROT_IPTOC2_Beh;					// ����� ������
DataAttribute iedModel_PROT_IPTOC2_Beh_stVal;
DataAttribute iedModel_PROT_IPTOC2_Beh_q;
DataAttribute iedModel_PROT_IPTOC2_Beh_t;

DataObject    iedModel_PROT_IPTOC2_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_IPTOC2_Health_stVal;
DataAttribute iedModel_PROT_IPTOC2_Health_q;
DataAttribute iedModel_PROT_IPTOC2_Health_t;

DataObject    iedModel_PROT_IPTOC2_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_IPTOC2_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_IPTOC2_NamPlt_swRev;		// 		������� ����������� �����
DataAttribute iedModel_PROT_IPTOC2_NamPlt_d;			//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_IPTOC2_Str;
DataAttribute iedModel_PROT_IPTOC2_Str_general;
DataAttribute iedModel_PROT_IPTOC2_Str_dirGeneral;
DataAttribute iedModel_PROT_IPTOC2_Str_q;
DataAttribute iedModel_PROT_IPTOC2_Str_t;

DataObject    iedModel_PROT_IPTOC2_Op;
DataAttribute iedModel_PROT_IPTOC2_Op_general;
DataAttribute iedModel_PROT_IPTOC2_Op_q;
DataAttribute iedModel_PROT_IPTOC2_Op_t;

//----------------------------------------------------------------------------
// IPTOC3
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_IPTOC3;

DataObject    iedModel_PROT_IPTOC3_Mod;					// �����
DataAttribute iedModel_PROT_IPTOC3_Mod_q;
DataAttribute iedModel_PROT_IPTOC3_Mod_t;
DataAttribute iedModel_PROT_IPTOC3_Mod_stVal;

DataObject    iedModel_PROT_IPTOC3_Beh;					// ����� ������
DataAttribute iedModel_PROT_IPTOC3_Beh_stVal;
DataAttribute iedModel_PROT_IPTOC3_Beh_q;
DataAttribute iedModel_PROT_IPTOC3_Beh_t;

DataObject    iedModel_PROT_IPTOC3_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_IPTOC3_Health_stVal;
DataAttribute iedModel_PROT_IPTOC3_Health_q;
DataAttribute iedModel_PROT_IPTOC3_Health_t;

DataObject    iedModel_PROT_IPTOC3_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_IPTOC3_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_IPTOC3_NamPlt_swRev;		// 		������� ����������� �����
DataAttribute iedModel_PROT_IPTOC3_NamPlt_d;			//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_IPTOC3_Str;
DataAttribute iedModel_PROT_IPTOC3_Str_general;
DataAttribute iedModel_PROT_IPTOC3_Str_dirGeneral;
DataAttribute iedModel_PROT_IPTOC3_Str_q;
DataAttribute iedModel_PROT_IPTOC3_Str_t;

DataObject    iedModel_PROT_IPTOC3_Op;
DataAttribute iedModel_PROT_IPTOC3_Op_general;
DataAttribute iedModel_PROT_IPTOC3_Op_q;
DataAttribute iedModel_PROT_IPTOC3_Op_t;

//----------------------------------------------------------------------------
// IPTOC4
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_IPTOC4;

DataObject    iedModel_PROT_IPTOC4_Mod;					// �����
DataAttribute iedModel_PROT_IPTOC4_Mod_q;
DataAttribute iedModel_PROT_IPTOC4_Mod_t;
DataAttribute iedModel_PROT_IPTOC4_Mod_stVal;

DataObject    iedModel_PROT_IPTOC4_Beh;					// ����� ������
DataAttribute iedModel_PROT_IPTOC4_Beh_stVal;
DataAttribute iedModel_PROT_IPTOC4_Beh_q;
DataAttribute iedModel_PROT_IPTOC4_Beh_t;

DataObject    iedModel_PROT_IPTOC4_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_IPTOC4_Health_stVal;
DataAttribute iedModel_PROT_IPTOC4_Health_q;
DataAttribute iedModel_PROT_IPTOC4_Health_t;

DataObject    iedModel_PROT_IPTOC4_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_IPTOC4_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_IPTOC4_NamPlt_swRev;		// 		������� ����������� �����
DataAttribute iedModel_PROT_IPTOC4_NamPlt_d;			//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_IPTOC4_Str;
DataAttribute iedModel_PROT_IPTOC4_Str_general;
DataAttribute iedModel_PROT_IPTOC4_Str_dirGeneral;
DataAttribute iedModel_PROT_IPTOC4_Str_q;
DataAttribute iedModel_PROT_IPTOC4_Str_t;

DataObject    iedModel_PROT_IPTOC4_Op;
DataAttribute iedModel_PROT_IPTOC4_Op_general;
DataAttribute iedModel_PROT_IPTOC4_Op_q;
DataAttribute iedModel_PROT_IPTOC4_Op_t;

//----------------------------------------------------------------------------
// IPTOC5
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_IPTOC5;

DataObject    iedModel_PROT_IPTOC5_Mod;					// �����
DataAttribute iedModel_PROT_IPTOC5_Mod_q;
DataAttribute iedModel_PROT_IPTOC5_Mod_t;
DataAttribute iedModel_PROT_IPTOC5_Mod_stVal;

DataObject    iedModel_PROT_IPTOC5_Beh;					// ����� ������
DataAttribute iedModel_PROT_IPTOC5_Beh_stVal;
DataAttribute iedModel_PROT_IPTOC5_Beh_q;
DataAttribute iedModel_PROT_IPTOC5_Beh_t;

DataObject    iedModel_PROT_IPTOC5_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_IPTOC5_Health_stVal;
DataAttribute iedModel_PROT_IPTOC5_Health_q;
DataAttribute iedModel_PROT_IPTOC5_Health_t;

DataObject    iedModel_PROT_IPTOC5_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_IPTOC5_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_IPTOC5_NamPlt_swRev;		// 		������� ����������� �����
DataAttribute iedModel_PROT_IPTOC5_NamPlt_d;			//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_IPTOC5_Str;
DataAttribute iedModel_PROT_IPTOC5_Str_general;
DataAttribute iedModel_PROT_IPTOC5_Str_dirGeneral;
DataAttribute iedModel_PROT_IPTOC5_Str_q;
DataAttribute iedModel_PROT_IPTOC5_Str_t;

DataObject    iedModel_PROT_IPTOC5_Op;
DataAttribute iedModel_PROT_IPTOC5_Op_general;
DataAttribute iedModel_PROT_IPTOC5_Op_q;
DataAttribute iedModel_PROT_IPTOC5_Op_t;

//----------------------------------------------------------------------------
// IPTOC6
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_IPTOC6;

DataObject    iedModel_PROT_IPTOC6_Mod;					// �����
DataAttribute iedModel_PROT_IPTOC6_Mod_q;
DataAttribute iedModel_PROT_IPTOC6_Mod_t;
DataAttribute iedModel_PROT_IPTOC6_Mod_stVal;
//DataAttribute iedModel_PROT_IPTOC6_Mod_ctlModel;

DataObject    iedModel_PROT_IPTOC6_Beh;					// ����� ������
DataAttribute iedModel_PROT_IPTOC6_Beh_stVal;
DataAttribute iedModel_PROT_IPTOC6_Beh_q;
DataAttribute iedModel_PROT_IPTOC6_Beh_t;

DataObject    iedModel_PROT_IPTOC6_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_IPTOC6_Health_stVal;
DataAttribute iedModel_PROT_IPTOC6_Health_q;
DataAttribute iedModel_PROT_IPTOC6_Health_t;

DataObject    iedModel_PROT_IPTOC6_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_IPTOC6_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_IPTOC6_NamPlt_swRev;		// 		������� ����������� �����
DataAttribute iedModel_PROT_IPTOC6_NamPlt_d;			//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_IPTOC6_Str;
DataAttribute iedModel_PROT_IPTOC6_Str_general;
DataAttribute iedModel_PROT_IPTOC6_Str_dirGeneral;
DataAttribute iedModel_PROT_IPTOC6_Str_q;
DataAttribute iedModel_PROT_IPTOC6_Str_t;

DataObject    iedModel_PROT_IPTOC6_Op;
DataAttribute iedModel_PROT_IPTOC6_Op_general;
DataAttribute iedModel_PROT_IPTOC6_Op_q;
DataAttribute iedModel_PROT_IPTOC6_Op_t;

//----------------------------------------------------------------------------
// IPTOC7
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_IPTOC7;

DataObject    iedModel_PROT_IPTOC7_Mod;					// �����
DataAttribute iedModel_PROT_IPTOC7_Mod_q;
DataAttribute iedModel_PROT_IPTOC7_Mod_t;
DataAttribute iedModel_PROT_IPTOC7_Mod_stVal;
//DataAttribute iedModel_PROT_IPTOC7_Mod_ctlModel;

DataObject    iedModel_PROT_IPTOC7_Beh;					// ����� ������
DataAttribute iedModel_PROT_IPTOC7_Beh_stVal;
DataAttribute iedModel_PROT_IPTOC7_Beh_q;
DataAttribute iedModel_PROT_IPTOC7_Beh_t;

DataObject    iedModel_PROT_IPTOC7_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_IPTOC7_Health_stVal;
DataAttribute iedModel_PROT_IPTOC7_Health_q;
DataAttribute iedModel_PROT_IPTOC7_Health_t;

DataObject    iedModel_PROT_IPTOC7_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_IPTOC7_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_IPTOC7_NamPlt_swRev;		// 		������� ����������� �����
DataAttribute iedModel_PROT_IPTOC7_NamPlt_d;			//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_IPTOC7_Str;
DataAttribute iedModel_PROT_IPTOC7_Str_general;
DataAttribute iedModel_PROT_IPTOC7_Str_dirGeneral;
DataAttribute iedModel_PROT_IPTOC7_Str_q;
DataAttribute iedModel_PROT_IPTOC7_Str_t;

DataObject    iedModel_PROT_IPTOC7_Op;
DataAttribute iedModel_PROT_IPTOC7_Op_general;
DataAttribute iedModel_PROT_IPTOC7_Op_q;
DataAttribute iedModel_PROT_IPTOC7_Op_t;

//----------------------------------------------------------------------------
// IPTOC8
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_IPTOC8;

DataObject    iedModel_PROT_IPTOC8_Mod;					// �����
DataAttribute iedModel_PROT_IPTOC8_Mod_q;
DataAttribute iedModel_PROT_IPTOC8_Mod_t;
DataAttribute iedModel_PROT_IPTOC8_Mod_stVal;
//DataAttribute iedModel_PROT_IPTOC8_Mod_ctlModel;

DataObject    iedModel_PROT_IPTOC8_Beh;					// ����� ������
DataAttribute iedModel_PROT_IPTOC8_Beh_stVal;
DataAttribute iedModel_PROT_IPTOC8_Beh_q;
DataAttribute iedModel_PROT_IPTOC8_Beh_t;

DataObject    iedModel_PROT_IPTOC8_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_IPTOC8_Health_stVal;
DataAttribute iedModel_PROT_IPTOC8_Health_q;
DataAttribute iedModel_PROT_IPTOC8_Health_t;

DataObject    iedModel_PROT_IPTOC8_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_IPTOC8_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_IPTOC8_NamPlt_swRev;		// 		������� ����������� �����
DataAttribute iedModel_PROT_IPTOC8_NamPlt_d;			//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_IPTOC8_Str;
DataAttribute iedModel_PROT_IPTOC8_Str_general;
DataAttribute iedModel_PROT_IPTOC8_Str_dirGeneral;
DataAttribute iedModel_PROT_IPTOC8_Str_q;
DataAttribute iedModel_PROT_IPTOC8_Str_t;

DataObject    iedModel_PROT_IPTOC8_Op;
DataAttribute iedModel_PROT_IPTOC8_Op_general;
DataAttribute iedModel_PROT_IPTOC8_Op_q;
DataAttribute iedModel_PROT_IPTOC8_Op_t;

//----------------------------------------------------------------------------
// I20PTOC1
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_I20PTOC1;

DataObject    iedModel_PROT_I20PTOC1_Mod;					// �����
DataAttribute iedModel_PROT_I20PTOC1_Mod_q;
DataAttribute iedModel_PROT_I20PTOC1_Mod_t;
DataAttribute iedModel_PROT_I20PTOC1_Mod_stVal;
//DataAttribute iedModel_PROT_I20PTOC1_Mod_ctlModel;

DataObject    iedModel_PROT_I20PTOC1_Beh;					// ����� ������
DataAttribute iedModel_PROT_I20PTOC1_Beh_stVal;
DataAttribute iedModel_PROT_I20PTOC1_Beh_q;
DataAttribute iedModel_PROT_I20PTOC1_Beh_t;

DataObject    iedModel_PROT_I20PTOC1_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_I20PTOC1_Health_stVal;
DataAttribute iedModel_PROT_I20PTOC1_Health_q;
DataAttribute iedModel_PROT_I20PTOC1_Health_t;

DataObject    iedModel_PROT_I20PTOC1_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_I20PTOC1_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_I20PTOC1_NamPlt_swRev;		// 		������� ����������� �����
DataAttribute iedModel_PROT_I20PTOC1_NamPlt_d;			//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_I20PTOC1_Str;
DataAttribute iedModel_PROT_I20PTOC1_Str_general;
DataAttribute iedModel_PROT_I20PTOC1_Str_dirGeneral;
DataAttribute iedModel_PROT_I20PTOC1_Str_q;
DataAttribute iedModel_PROT_I20PTOC1_Str_t;

DataObject    iedModel_PROT_I20PTOC1_Op;
DataAttribute iedModel_PROT_I20PTOC1_Op_general;
DataAttribute iedModel_PROT_I20PTOC1_Op_q;
DataAttribute iedModel_PROT_I20PTOC1_Op_t;

//----------------------------------------------------------------------------
// I20PTOC2
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_I20PTOC2;

DataObject    iedModel_PROT_I20PTOC2_Mod;					// �����
DataAttribute iedModel_PROT_I20PTOC2_Mod_q;
DataAttribute iedModel_PROT_I20PTOC2_Mod_t;
DataAttribute iedModel_PROT_I20PTOC2_Mod_stVal;
//DataAttribute iedModel_PROT_I20PTOC2_Mod_ctlModel;

DataObject    iedModel_PROT_I20PTOC2_Beh;					// ����� ������
DataAttribute iedModel_PROT_I20PTOC2_Beh_stVal;
DataAttribute iedModel_PROT_I20PTOC2_Beh_q;
DataAttribute iedModel_PROT_I20PTOC2_Beh_t;

DataObject    iedModel_PROT_I20PTOC2_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_I20PTOC2_Health_stVal;
DataAttribute iedModel_PROT_I20PTOC2_Health_q;
DataAttribute iedModel_PROT_I20PTOC2_Health_t;

DataObject    iedModel_PROT_I20PTOC2_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_I20PTOC2_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_I20PTOC2_NamPlt_swRev;		// 		������� ����������� �����
DataAttribute iedModel_PROT_I20PTOC2_NamPlt_d;			//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_I20PTOC2_Str;
DataAttribute iedModel_PROT_I20PTOC2_Str_general;
DataAttribute iedModel_PROT_I20PTOC2_Str_dirGeneral;
DataAttribute iedModel_PROT_I20PTOC2_Str_q;
DataAttribute iedModel_PROT_I20PTOC2_Str_t;

DataObject    iedModel_PROT_I20PTOC2_Op;
DataAttribute iedModel_PROT_I20PTOC2_Op_general;
DataAttribute iedModel_PROT_I20PTOC2_Op_q;
DataAttribute iedModel_PROT_I20PTOC2_Op_t;

//----------------------------------------------------------------------------
// I20PTOC3
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_I20PTOC3;

DataObject    iedModel_PROT_I20PTOC3_Mod;					// �����
DataAttribute iedModel_PROT_I20PTOC3_Mod_q;
DataAttribute iedModel_PROT_I20PTOC3_Mod_t;
DataAttribute iedModel_PROT_I20PTOC3_Mod_stVal;

DataObject    iedModel_PROT_I20PTOC3_Beh;					// ����� ������
DataAttribute iedModel_PROT_I20PTOC3_Beh_stVal;
DataAttribute iedModel_PROT_I20PTOC3_Beh_q;
DataAttribute iedModel_PROT_I20PTOC3_Beh_t;

DataObject    iedModel_PROT_I20PTOC3_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_I20PTOC3_Health_stVal;
DataAttribute iedModel_PROT_I20PTOC3_Health_q;
DataAttribute iedModel_PROT_I20PTOC3_Health_t;

DataObject    iedModel_PROT_I20PTOC3_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_I20PTOC3_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_I20PTOC3_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_I20PTOC3_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_I20PTOC3_Str;
DataAttribute iedModel_PROT_I20PTOC3_Str_general;
DataAttribute iedModel_PROT_I20PTOC3_Str_dirGeneral;
DataAttribute iedModel_PROT_I20PTOC3_Str_q;
DataAttribute iedModel_PROT_I20PTOC3_Str_t;

DataObject    iedModel_PROT_I20PTOC3_Op;
DataAttribute iedModel_PROT_I20PTOC3_Op_general;
DataAttribute iedModel_PROT_I20PTOC3_Op_q;
DataAttribute iedModel_PROT_I20PTOC3_Op_t;

//----------------------------------------------------------------------------
// I20PTOC4
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_I20PTOC4;

DataObject    iedModel_PROT_I20PTOC4_Mod;					// �����
DataAttribute iedModel_PROT_I20PTOC4_Mod_q;
DataAttribute iedModel_PROT_I20PTOC4_Mod_t;
DataAttribute iedModel_PROT_I20PTOC4_Mod_stVal;

DataObject    iedModel_PROT_I20PTOC4_Beh;					// ����� ������
DataAttribute iedModel_PROT_I20PTOC4_Beh_stVal;
DataAttribute iedModel_PROT_I20PTOC4_Beh_q;
DataAttribute iedModel_PROT_I20PTOC4_Beh_t;

DataObject    iedModel_PROT_I20PTOC4_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_I20PTOC4_Health_stVal;
DataAttribute iedModel_PROT_I20PTOC4_Health_q;
DataAttribute iedModel_PROT_I20PTOC4_Health_t;

DataObject    iedModel_PROT_I20PTOC4_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_I20PTOC4_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_I20PTOC4_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_I20PTOC4_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_I20PTOC4_Str;
DataAttribute iedModel_PROT_I20PTOC4_Str_general;
DataAttribute iedModel_PROT_I20PTOC4_Str_dirGeneral;
DataAttribute iedModel_PROT_I20PTOC4_Str_q;
DataAttribute iedModel_PROT_I20PTOC4_Str_t;

DataObject    iedModel_PROT_I20PTOC4_Op;
DataAttribute iedModel_PROT_I20PTOC4_Op_general;
DataAttribute iedModel_PROT_I20PTOC4_Op_q;
DataAttribute iedModel_PROT_I20PTOC4_Op_t;

//----------------------------------------------------------------------------
// I20PTOC5
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_I20PTOC5;

DataObject    iedModel_PROT_I20PTOC5_Mod;					// �����
DataAttribute iedModel_PROT_I20PTOC5_Mod_q;
DataAttribute iedModel_PROT_I20PTOC5_Mod_t;
DataAttribute iedModel_PROT_I20PTOC5_Mod_stVal;

DataObject    iedModel_PROT_I20PTOC5_Beh;					// ����� ������
DataAttribute iedModel_PROT_I20PTOC5_Beh_stVal;
DataAttribute iedModel_PROT_I20PTOC5_Beh_q;
DataAttribute iedModel_PROT_I20PTOC5_Beh_t;

DataObject    iedModel_PROT_I20PTOC5_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_I20PTOC5_Health_stVal;
DataAttribute iedModel_PROT_I20PTOC5_Health_q;
DataAttribute iedModel_PROT_I20PTOC5_Health_t;

DataObject    iedModel_PROT_I20PTOC5_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_I20PTOC5_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_I20PTOC5_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_I20PTOC5_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_I20PTOC5_Str;
DataAttribute iedModel_PROT_I20PTOC5_Str_general;
DataAttribute iedModel_PROT_I20PTOC5_Str_dirGeneral;
DataAttribute iedModel_PROT_I20PTOC5_Str_q;
DataAttribute iedModel_PROT_I20PTOC5_Str_t;

DataObject    iedModel_PROT_I20PTOC5_Op;
DataAttribute iedModel_PROT_I20PTOC5_Op_general;
DataAttribute iedModel_PROT_I20PTOC5_Op_q;
DataAttribute iedModel_PROT_I20PTOC5_Op_t;

//----------------------------------------------------------------------------
// I20PTOC6
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_I20PTOC6;

DataObject    iedModel_PROT_I20PTOC6_Mod;					// �����
DataAttribute iedModel_PROT_I20PTOC6_Mod_q;
DataAttribute iedModel_PROT_I20PTOC6_Mod_t;
DataAttribute iedModel_PROT_I20PTOC6_Mod_stVal;

DataObject    iedModel_PROT_I20PTOC6_Beh;					// ����� ������
DataAttribute iedModel_PROT_I20PTOC6_Beh_stVal;
DataAttribute iedModel_PROT_I20PTOC6_Beh_q;
DataAttribute iedModel_PROT_I20PTOC6_Beh_t;

DataObject    iedModel_PROT_I20PTOC6_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_I20PTOC6_Health_stVal;
DataAttribute iedModel_PROT_I20PTOC6_Health_q;
DataAttribute iedModel_PROT_I20PTOC6_Health_t;

DataObject    iedModel_PROT_I20PTOC6_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_I20PTOC6_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_I20PTOC6_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_I20PTOC6_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_I20PTOC6_Str;
DataAttribute iedModel_PROT_I20PTOC6_Str_general;
DataAttribute iedModel_PROT_I20PTOC6_Str_dirGeneral;
DataAttribute iedModel_PROT_I20PTOC6_Str_q;
DataAttribute iedModel_PROT_I20PTOC6_Str_t;

DataObject    iedModel_PROT_I20PTOC6_Op;
DataAttribute iedModel_PROT_I20PTOC6_Op_general;
DataAttribute iedModel_PROT_I20PTOC6_Op_q;
DataAttribute iedModel_PROT_I20PTOC6_Op_t;

//----------------------------------------------------------------------------
// I20PTOC7
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_I20PTOC7;

DataObject    iedModel_PROT_I20PTOC7_Mod;					// �����
DataAttribute iedModel_PROT_I20PTOC7_Mod_q;
DataAttribute iedModel_PROT_I20PTOC7_Mod_t;
DataAttribute iedModel_PROT_I20PTOC7_Mod_stVal;

DataObject    iedModel_PROT_I20PTOC7_Beh;					// ����� ������
DataAttribute iedModel_PROT_I20PTOC7_Beh_stVal;
DataAttribute iedModel_PROT_I20PTOC7_Beh_q;
DataAttribute iedModel_PROT_I20PTOC7_Beh_t;

DataObject    iedModel_PROT_I20PTOC7_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_I20PTOC7_Health_stVal;
DataAttribute iedModel_PROT_I20PTOC7_Health_q;
DataAttribute iedModel_PROT_I20PTOC7_Health_t;

DataObject    iedModel_PROT_I20PTOC7_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_I20PTOC7_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_I20PTOC7_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_I20PTOC7_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_I20PTOC7_Str;
DataAttribute iedModel_PROT_I20PTOC7_Str_general;
DataAttribute iedModel_PROT_I20PTOC7_Str_dirGeneral;
DataAttribute iedModel_PROT_I20PTOC7_Str_q;
DataAttribute iedModel_PROT_I20PTOC7_Str_t;

DataObject    iedModel_PROT_I20PTOC7_Op;
DataAttribute iedModel_PROT_I20PTOC7_Op_general;
DataAttribute iedModel_PROT_I20PTOC7_Op_q;
DataAttribute iedModel_PROT_I20PTOC7_Op_t;

//----------------------------------------------------------------------------
// I20PTOC8
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_I20PTOC8;

DataObject    iedModel_PROT_I20PTOC8_Mod;					// �����
DataAttribute iedModel_PROT_I20PTOC8_Mod_q;
DataAttribute iedModel_PROT_I20PTOC8_Mod_t;
DataAttribute iedModel_PROT_I20PTOC8_Mod_stVal;

DataObject    iedModel_PROT_I20PTOC8_Beh;					// ����� ������
DataAttribute iedModel_PROT_I20PTOC8_Beh_stVal;
DataAttribute iedModel_PROT_I20PTOC8_Beh_q;
DataAttribute iedModel_PROT_I20PTOC8_Beh_t;

DataObject    iedModel_PROT_I20PTOC8_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_I20PTOC8_Health_stVal;
DataAttribute iedModel_PROT_I20PTOC8_Health_q;
DataAttribute iedModel_PROT_I20PTOC8_Health_t;

DataObject    iedModel_PROT_I20PTOC8_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_I20PTOC8_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_I20PTOC8_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_I20PTOC8_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_I20PTOC8_Str;
DataAttribute iedModel_PROT_I20PTOC8_Str_general;
DataAttribute iedModel_PROT_I20PTOC8_Str_dirGeneral;
DataAttribute iedModel_PROT_I20PTOC8_Str_q;
DataAttribute iedModel_PROT_I20PTOC8_Str_t;

DataObject    iedModel_PROT_I20PTOC8_Op;
DataAttribute iedModel_PROT_I20PTOC8_Op_general;
DataAttribute iedModel_PROT_I20PTOC8_Op_q;
DataAttribute iedModel_PROT_I20PTOC8_Op_t;

//----------------------------------------------------------------------------
// I2I1PTOC1
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_I2I1PTOC1;

DataObject    iedModel_PROT_I2I1PTOC1_Mod;
DataAttribute iedModel_PROT_I2I1PTOC1_Mod_q;
DataAttribute iedModel_PROT_I2I1PTOC1_Mod_t;
DataAttribute iedModel_PROT_I2I1PTOC1_Mod_stVal;

DataObject    iedModel_PROT_I2I1PTOC1_Beh;
DataAttribute iedModel_PROT_I2I1PTOC1_Beh_stVal;
DataAttribute iedModel_PROT_I2I1PTOC1_Beh_q;
DataAttribute iedModel_PROT_I2I1PTOC1_Beh_t;

DataObject    iedModel_PROT_I2I1PTOC1_Health;
DataAttribute iedModel_PROT_I2I1PTOC1_Health_stVal;
DataAttribute iedModel_PROT_I2I1PTOC1_Health_q;
DataAttribute iedModel_PROT_I2I1PTOC1_Health_t;

DataObject    iedModel_PROT_I2I1PTOC1_NamPlt;
DataAttribute iedModel_PROT_I2I1PTOC1_NamPlt_vendor;
DataAttribute iedModel_PROT_I2I1PTOC1_NamPlt_swRev;
DataAttribute iedModel_PROT_I2I1PTOC1_NamPlt_d;

DataObject    iedModel_PROT_I2I1PTOC1_Str;
DataAttribute iedModel_PROT_I2I1PTOC1_Str_general;
DataAttribute iedModel_PROT_I2I1PTOC1_Str_dirGeneral;
DataAttribute iedModel_PROT_I2I1PTOC1_Str_q;
DataAttribute iedModel_PROT_I2I1PTOC1_Str_t;

DataObject    iedModel_PROT_I2I1PTOC1_Op;
DataAttribute iedModel_PROT_I2I1PTOC1_Op_general;
DataAttribute iedModel_PROT_I2I1PTOC1_Op_q;
DataAttribute iedModel_PROT_I2I1PTOC1_Op_t;

//----------------------------------------------------------------------------
// IPTUC1
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_IPTUC1;

DataObject    iedModel_PROT_IPTUC1_Mod;					// �����
DataAttribute iedModel_PROT_IPTUC1_Mod_q;
DataAttribute iedModel_PROT_IPTUC1_Mod_t;
DataAttribute iedModel_PROT_IPTUC1_Mod_stVal;
//DataAttribute iedModel_PROT_IPTUC1_Mod_ctlModel;

DataObject    iedModel_PROT_IPTUC1_Beh;					// ����� ������
DataAttribute iedModel_PROT_IPTUC1_Beh_stVal;
DataAttribute iedModel_PROT_IPTUC1_Beh_q;
DataAttribute iedModel_PROT_IPTUC1_Beh_t;

DataObject    iedModel_PROT_IPTUC1_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_IPTUC1_Health_stVal;
DataAttribute iedModel_PROT_IPTUC1_Health_q;
DataAttribute iedModel_PROT_IPTUC1_Health_t;

DataObject    iedModel_PROT_IPTUC1_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_IPTUC1_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_IPTUC1_NamPlt_swRev;		// 		������� ����������� �����
DataAttribute iedModel_PROT_IPTUC1_NamPlt_d;			//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_IPTUC1_Str;
DataAttribute iedModel_PROT_IPTUC1_Str_general;
DataAttribute iedModel_PROT_IPTUC1_Str_dirGeneral;
DataAttribute iedModel_PROT_IPTUC1_Str_q;
DataAttribute iedModel_PROT_IPTUC1_Str_t;

DataObject    iedModel_PROT_IPTUC1_Op;
DataAttribute iedModel_PROT_IPTUC1_Op_general;
DataAttribute iedModel_PROT_IPTUC1_Op_q;
DataAttribute iedModel_PROT_IPTUC1_Op_t;
//----------------------------------------------------------------------------
// UPTOV1
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_UPTOV1;

DataObject    iedModel_PROT_UPTOV1_Mod;					// �����
DataAttribute iedModel_PROT_UPTOV1_Mod_q;
DataAttribute iedModel_PROT_UPTOV1_Mod_t;
DataAttribute iedModel_PROT_UPTOV1_Mod_stVal;

DataObject    iedModel_PROT_UPTOV1_Beh;					// ����� ������
DataAttribute iedModel_PROT_UPTOV1_Beh_stVal;
DataAttribute iedModel_PROT_UPTOV1_Beh_q;
DataAttribute iedModel_PROT_UPTOV1_Beh_t;

DataObject    iedModel_PROT_UPTOV1_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_UPTOV1_Health_stVal;
DataAttribute iedModel_PROT_UPTOV1_Health_q;
DataAttribute iedModel_PROT_UPTOV1_Health_t;

DataObject    iedModel_PROT_UPTOV1_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_UPTOV1_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_UPTOV1_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_UPTOV1_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_UPTOV1_Str;
DataAttribute iedModel_PROT_UPTOV1_Str_general;
DataAttribute iedModel_PROT_UPTOV1_Str_dirGeneral;
DataAttribute iedModel_PROT_UPTOV1_Str_q;
DataAttribute iedModel_PROT_UPTOV1_Str_t;

DataObject    iedModel_PROT_UPTOV1_Op;
DataAttribute iedModel_PROT_UPTOV1_Op_general;
DataAttribute iedModel_PROT_UPTOV1_Op_q;
DataAttribute iedModel_PROT_UPTOV1_Op_t;

//----------------------------------------------------------------------------
// UPTOV2
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_UPTOV2;

DataObject    iedModel_PROT_UPTOV2_Mod;					// �����
DataAttribute iedModel_PROT_UPTOV2_Mod_q;
DataAttribute iedModel_PROT_UPTOV2_Mod_t;
DataAttribute iedModel_PROT_UPTOV2_Mod_stVal;

DataObject    iedModel_PROT_UPTOV2_Beh;					// ����� ������
DataAttribute iedModel_PROT_UPTOV2_Beh_stVal;
DataAttribute iedModel_PROT_UPTOV2_Beh_q;
DataAttribute iedModel_PROT_UPTOV2_Beh_t;

DataObject    iedModel_PROT_UPTOV2_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_UPTOV2_Health_stVal;
DataAttribute iedModel_PROT_UPTOV2_Health_q;
DataAttribute iedModel_PROT_UPTOV2_Health_t;

DataObject    iedModel_PROT_UPTOV2_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_UPTOV2_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_UPTOV2_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_UPTOV2_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_UPTOV2_Str;
DataAttribute iedModel_PROT_UPTOV2_Str_general;
DataAttribute iedModel_PROT_UPTOV2_Str_dirGeneral;
DataAttribute iedModel_PROT_UPTOV2_Str_q;
DataAttribute iedModel_PROT_UPTOV2_Str_t;

DataObject    iedModel_PROT_UPTOV2_Op;
DataAttribute iedModel_PROT_UPTOV2_Op_general;
DataAttribute iedModel_PROT_UPTOV2_Op_q;
DataAttribute iedModel_PROT_UPTOV2_Op_t;

//----------------------------------------------------------------------------
// UPTOV3
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_UPTOV3;

DataObject    iedModel_PROT_UPTOV3_Mod;					// �����
DataAttribute iedModel_PROT_UPTOV3_Mod_q;
DataAttribute iedModel_PROT_UPTOV3_Mod_t;
DataAttribute iedModel_PROT_UPTOV3_Mod_stVal;

DataObject    iedModel_PROT_UPTOV3_Beh;					// ����� ������
DataAttribute iedModel_PROT_UPTOV3_Beh_stVal;
DataAttribute iedModel_PROT_UPTOV3_Beh_q;
DataAttribute iedModel_PROT_UPTOV3_Beh_t;

DataObject    iedModel_PROT_UPTOV3_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_UPTOV3_Health_stVal;
DataAttribute iedModel_PROT_UPTOV3_Health_q;
DataAttribute iedModel_PROT_UPTOV3_Health_t;

DataObject    iedModel_PROT_UPTOV3_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_UPTOV3_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_UPTOV3_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_UPTOV3_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_UPTOV3_Str;
DataAttribute iedModel_PROT_UPTOV3_Str_general;
DataAttribute iedModel_PROT_UPTOV3_Str_dirGeneral;
DataAttribute iedModel_PROT_UPTOV3_Str_q;
DataAttribute iedModel_PROT_UPTOV3_Str_t;

DataObject    iedModel_PROT_UPTOV3_Op;
DataAttribute iedModel_PROT_UPTOV3_Op_general;
DataAttribute iedModel_PROT_UPTOV3_Op_q;
DataAttribute iedModel_PROT_UPTOV3_Op_t;

//----------------------------------------------------------------------------
// UPTOV4
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_UPTOV4;

DataObject    iedModel_PROT_UPTOV4_Mod;					// �����
DataAttribute iedModel_PROT_UPTOV4_Mod_q;
DataAttribute iedModel_PROT_UPTOV4_Mod_t;
DataAttribute iedModel_PROT_UPTOV4_Mod_stVal;

DataObject    iedModel_PROT_UPTOV4_Beh;					// ����� ������
DataAttribute iedModel_PROT_UPTOV4_Beh_stVal;
DataAttribute iedModel_PROT_UPTOV4_Beh_q;
DataAttribute iedModel_PROT_UPTOV4_Beh_t;

DataObject    iedModel_PROT_UPTOV4_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_UPTOV4_Health_stVal;
DataAttribute iedModel_PROT_UPTOV4_Health_q;
DataAttribute iedModel_PROT_UPTOV4_Health_t;

DataObject    iedModel_PROT_UPTOV4_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_UPTOV4_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_UPTOV4_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_UPTOV4_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_UPTOV4_Str;
DataAttribute iedModel_PROT_UPTOV4_Str_general;
DataAttribute iedModel_PROT_UPTOV4_Str_dirGeneral;
DataAttribute iedModel_PROT_UPTOV4_Str_q;
DataAttribute iedModel_PROT_UPTOV4_Str_t;

DataObject    iedModel_PROT_UPTOV4_Op;
DataAttribute iedModel_PROT_UPTOV4_Op_general;
DataAttribute iedModel_PROT_UPTOV4_Op_q;
DataAttribute iedModel_PROT_UPTOV4_Op_t;

//----------------------------------------------------------------------------
// UPTUV1
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_UPTUV1;

DataObject    iedModel_PROT_UPTUV1_Mod;					// �����
DataAttribute iedModel_PROT_UPTUV1_Mod_q;
DataAttribute iedModel_PROT_UPTUV1_Mod_t;
DataAttribute iedModel_PROT_UPTUV1_Mod_stVal;

DataObject    iedModel_PROT_UPTUV1_Beh;					// ����� ������
DataAttribute iedModel_PROT_UPTUV1_Beh_stVal;
DataAttribute iedModel_PROT_UPTUV1_Beh_q;
DataAttribute iedModel_PROT_UPTUV1_Beh_t;

DataObject    iedModel_PROT_UPTUV1_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_UPTUV1_Health_stVal;
DataAttribute iedModel_PROT_UPTUV1_Health_q;
DataAttribute iedModel_PROT_UPTUV1_Health_t;

DataObject    iedModel_PROT_UPTUV1_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_UPTUV1_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_UPTUV1_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_UPTUV1_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_UPTUV1_Str;
DataAttribute iedModel_PROT_UPTUV1_Str_general;
DataAttribute iedModel_PROT_UPTUV1_Str_dirGeneral;
DataAttribute iedModel_PROT_UPTUV1_Str_q;
DataAttribute iedModel_PROT_UPTUV1_Str_t;

DataObject    iedModel_PROT_UPTUV1_Op;
DataAttribute iedModel_PROT_UPTUV1_Op_general;
DataAttribute iedModel_PROT_UPTUV1_Op_q;
DataAttribute iedModel_PROT_UPTUV1_Op_t;

//----------------------------------------------------------------------------
// UPTUV2
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_UPTUV2;

DataObject    iedModel_PROT_UPTUV2_Mod;					// �����
DataAttribute iedModel_PROT_UPTUV2_Mod_q;
DataAttribute iedModel_PROT_UPTUV2_Mod_t;
DataAttribute iedModel_PROT_UPTUV2_Mod_stVal;

DataObject    iedModel_PROT_UPTUV2_Beh;					// ����� ������
DataAttribute iedModel_PROT_UPTUV2_Beh_stVal;
DataAttribute iedModel_PROT_UPTUV2_Beh_q;
DataAttribute iedModel_PROT_UPTUV2_Beh_t;

DataObject    iedModel_PROT_UPTUV2_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_UPTUV2_Health_stVal;
DataAttribute iedModel_PROT_UPTUV2_Health_q;
DataAttribute iedModel_PROT_UPTUV2_Health_t;

DataObject    iedModel_PROT_UPTUV2_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_UPTUV2_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_UPTUV2_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_UPTUV2_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_UPTUV2_Str;
DataAttribute iedModel_PROT_UPTUV2_Str_general;
DataAttribute iedModel_PROT_UPTUV2_Str_dirGeneral;
DataAttribute iedModel_PROT_UPTUV2_Str_q;
DataAttribute iedModel_PROT_UPTUV2_Str_t;

DataObject    iedModel_PROT_UPTUV2_Op;
DataAttribute iedModel_PROT_UPTUV2_Op_general;
DataAttribute iedModel_PROT_UPTUV2_Op_q;
DataAttribute iedModel_PROT_UPTUV2_Op_t;

//----------------------------------------------------------------------------
// UPTUV3
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_UPTUV3;

DataObject    iedModel_PROT_UPTUV3_Mod;					// �����
DataAttribute iedModel_PROT_UPTUV3_Mod_q;
DataAttribute iedModel_PROT_UPTUV3_Mod_t;
DataAttribute iedModel_PROT_UPTUV3_Mod_stVal;

DataObject    iedModel_PROT_UPTUV3_Beh;					// ����� ������
DataAttribute iedModel_PROT_UPTUV3_Beh_stVal;
DataAttribute iedModel_PROT_UPTUV3_Beh_q;
DataAttribute iedModel_PROT_UPTUV3_Beh_t;

DataObject    iedModel_PROT_UPTUV3_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_UPTUV3_Health_stVal;
DataAttribute iedModel_PROT_UPTUV3_Health_q;
DataAttribute iedModel_PROT_UPTUV3_Health_t;

DataObject    iedModel_PROT_UPTUV3_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_UPTUV3_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_UPTUV3_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_UPTUV3_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_UPTUV3_Str;
DataAttribute iedModel_PROT_UPTUV3_Str_general;
DataAttribute iedModel_PROT_UPTUV3_Str_dirGeneral;
DataAttribute iedModel_PROT_UPTUV3_Str_q;
DataAttribute iedModel_PROT_UPTUV3_Str_t;

DataObject    iedModel_PROT_UPTUV3_Op;
DataAttribute iedModel_PROT_UPTUV3_Op_general;
DataAttribute iedModel_PROT_UPTUV3_Op_q;
DataAttribute iedModel_PROT_UPTUV3_Op_t;

//----------------------------------------------------------------------------
// UPTUV4
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_UPTUV4;

DataObject    iedModel_PROT_UPTUV4_Mod;					// �����
DataAttribute iedModel_PROT_UPTUV4_Mod_q;
DataAttribute iedModel_PROT_UPTUV4_Mod_t;
DataAttribute iedModel_PROT_UPTUV4_Mod_stVal;

DataObject    iedModel_PROT_UPTUV4_Beh;					// ����� ������
DataAttribute iedModel_PROT_UPTUV4_Beh_stVal;
DataAttribute iedModel_PROT_UPTUV4_Beh_q;
DataAttribute iedModel_PROT_UPTUV4_Beh_t;

DataObject    iedModel_PROT_UPTUV4_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_UPTUV4_Health_stVal;
DataAttribute iedModel_PROT_UPTUV4_Health_q;
DataAttribute iedModel_PROT_UPTUV4_Health_t;

DataObject    iedModel_PROT_UPTUV4_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_UPTUV4_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_UPTUV4_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_UPTUV4_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_UPTUV4_Str;
DataAttribute iedModel_PROT_UPTUV4_Str_general;
DataAttribute iedModel_PROT_UPTUV4_Str_dirGeneral;
DataAttribute iedModel_PROT_UPTUV4_Str_q;
DataAttribute iedModel_PROT_UPTUV4_Str_t;

DataObject    iedModel_PROT_UPTUV4_Op;
DataAttribute iedModel_PROT_UPTUV4_Op_general;
DataAttribute iedModel_PROT_UPTUV4_Op_q;
DataAttribute iedModel_PROT_UPTUV4_Op_t;

//----------------------------------------------------------------------------
// PTOF1
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_PTOF1;

DataObject    iedModel_PROT_PTOF1_Mod;					// �����
DataAttribute iedModel_PROT_PTOF1_Mod_q;
DataAttribute iedModel_PROT_PTOF1_Mod_t;
DataAttribute iedModel_PROT_PTOF1_Mod_stVal;

DataObject    iedModel_PROT_PTOF1_Beh;					// ����� ������
DataAttribute iedModel_PROT_PTOF1_Beh_stVal;
DataAttribute iedModel_PROT_PTOF1_Beh_q;
DataAttribute iedModel_PROT_PTOF1_Beh_t;

DataObject    iedModel_PROT_PTOF1_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_PTOF1_Health_stVal;
DataAttribute iedModel_PROT_PTOF1_Health_q;
DataAttribute iedModel_PROT_PTOF1_Health_t;

DataObject    iedModel_PROT_PTOF1_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_PTOF1_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_PTOF1_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_PTOF1_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_PTOF1_Str;
DataAttribute iedModel_PROT_PTOF1_Str_general;
DataAttribute iedModel_PROT_PTOF1_Str_dirGeneral;
DataAttribute iedModel_PROT_PTOF1_Str_q;
DataAttribute iedModel_PROT_PTOF1_Str_t;

DataObject    iedModel_PROT_PTOF1_Op;
DataAttribute iedModel_PROT_PTOF1_Op_general;
DataAttribute iedModel_PROT_PTOF1_Op_q;
DataAttribute iedModel_PROT_PTOF1_Op_t;

//----------------------------------------------------------------------------
// PTOF2
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_PTOF2;

DataObject    iedModel_PROT_PTOF2_Mod;					// �����
DataAttribute iedModel_PROT_PTOF2_Mod_q;
DataAttribute iedModel_PROT_PTOF2_Mod_t;
DataAttribute iedModel_PROT_PTOF2_Mod_stVal;

DataObject    iedModel_PROT_PTOF2_Beh;					// ����� ������
DataAttribute iedModel_PROT_PTOF2_Beh_stVal;
DataAttribute iedModel_PROT_PTOF2_Beh_q;
DataAttribute iedModel_PROT_PTOF2_Beh_t;

DataObject    iedModel_PROT_PTOF2_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_PTOF2_Health_stVal;
DataAttribute iedModel_PROT_PTOF2_Health_q;
DataAttribute iedModel_PROT_PTOF2_Health_t;

DataObject    iedModel_PROT_PTOF2_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_PTOF2_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_PTOF2_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_PTOF2_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_PTOF2_Str;
DataAttribute iedModel_PROT_PTOF2_Str_general;
DataAttribute iedModel_PROT_PTOF2_Str_dirGeneral;
DataAttribute iedModel_PROT_PTOF2_Str_q;
DataAttribute iedModel_PROT_PTOF2_Str_t;

DataObject    iedModel_PROT_PTOF2_Op;
DataAttribute iedModel_PROT_PTOF2_Op_general;
DataAttribute iedModel_PROT_PTOF2_Op_q;
DataAttribute iedModel_PROT_PTOF2_Op_t;

//----------------------------------------------------------------------------
// PTOF3
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_PTOF3;

DataObject    iedModel_PROT_PTOF3_Mod;					// �����
DataAttribute iedModel_PROT_PTOF3_Mod_q;
DataAttribute iedModel_PROT_PTOF3_Mod_t;
DataAttribute iedModel_PROT_PTOF3_Mod_stVal;

DataObject    iedModel_PROT_PTOF3_Beh;					// ����� ������
DataAttribute iedModel_PROT_PTOF3_Beh_stVal;
DataAttribute iedModel_PROT_PTOF3_Beh_q;
DataAttribute iedModel_PROT_PTOF3_Beh_t;

DataObject    iedModel_PROT_PTOF3_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_PTOF3_Health_stVal;
DataAttribute iedModel_PROT_PTOF3_Health_q;
DataAttribute iedModel_PROT_PTOF3_Health_t;

DataObject    iedModel_PROT_PTOF3_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_PTOF3_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_PTOF3_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_PTOF3_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_PTOF3_Str;
DataAttribute iedModel_PROT_PTOF3_Str_general;
DataAttribute iedModel_PROT_PTOF3_Str_dirGeneral;
DataAttribute iedModel_PROT_PTOF3_Str_q;
DataAttribute iedModel_PROT_PTOF3_Str_t;

DataObject    iedModel_PROT_PTOF3_Op;
DataAttribute iedModel_PROT_PTOF3_Op_general;
DataAttribute iedModel_PROT_PTOF3_Op_q;
DataAttribute iedModel_PROT_PTOF3_Op_t;

//----------------------------------------------------------------------------
// PTOF4
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_PTOF4;

DataObject    iedModel_PROT_PTOF4_Mod;					// �����
DataAttribute iedModel_PROT_PTOF4_Mod_q;
DataAttribute iedModel_PROT_PTOF4_Mod_t;
DataAttribute iedModel_PROT_PTOF4_Mod_stVal;

DataObject    iedModel_PROT_PTOF4_Beh;					// ����� ������
DataAttribute iedModel_PROT_PTOF4_Beh_stVal;
DataAttribute iedModel_PROT_PTOF4_Beh_q;
DataAttribute iedModel_PROT_PTOF4_Beh_t;

DataObject    iedModel_PROT_PTOF4_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_PTOF4_Health_stVal;
DataAttribute iedModel_PROT_PTOF4_Health_q;
DataAttribute iedModel_PROT_PTOF4_Health_t;

DataObject    iedModel_PROT_PTOF4_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_PTOF4_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_PTOF4_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_PTOF4_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_PTOF4_Str;
DataAttribute iedModel_PROT_PTOF4_Str_general;
DataAttribute iedModel_PROT_PTOF4_Str_dirGeneral;
DataAttribute iedModel_PROT_PTOF4_Str_q;
DataAttribute iedModel_PROT_PTOF4_Str_t;

DataObject    iedModel_PROT_PTOF4_Op;
DataAttribute iedModel_PROT_PTOF4_Op_general;
DataAttribute iedModel_PROT_PTOF4_Op_q;
DataAttribute iedModel_PROT_PTOF4_Op_t;

//----------------------------------------------------------------------------
// PTUF1
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_PTUF1;

DataObject    iedModel_PROT_PTUF1_Mod;					// �����
DataAttribute iedModel_PROT_PTUF1_Mod_q;
DataAttribute iedModel_PROT_PTUF1_Mod_t;
DataAttribute iedModel_PROT_PTUF1_Mod_stVal;

DataObject    iedModel_PROT_PTUF1_Beh;					// ����� ������
DataAttribute iedModel_PROT_PTUF1_Beh_stVal;
DataAttribute iedModel_PROT_PTUF1_Beh_q;
DataAttribute iedModel_PROT_PTUF1_Beh_t;

DataObject    iedModel_PROT_PTUF1_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_PTUF1_Health_stVal;
DataAttribute iedModel_PROT_PTUF1_Health_q;
DataAttribute iedModel_PROT_PTUF1_Health_t;

DataObject    iedModel_PROT_PTUF1_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_PTUF1_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_PTUF1_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_PTUF1_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_PTUF1_Str;
DataAttribute iedModel_PROT_PTUF1_Str_general;
DataAttribute iedModel_PROT_PTUF1_Str_dirGeneral;
DataAttribute iedModel_PROT_PTUF1_Str_q;
DataAttribute iedModel_PROT_PTUF1_Str_t;

DataObject    iedModel_PROT_PTUF1_Op;
DataAttribute iedModel_PROT_PTUF1_Op_general;
DataAttribute iedModel_PROT_PTUF1_Op_q;
DataAttribute iedModel_PROT_PTUF1_Op_t;

//----------------------------------------------------------------------------
// PTUF2
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_PTUF2;

DataObject    iedModel_PROT_PTUF2_Mod;					// �����
DataAttribute iedModel_PROT_PTUF2_Mod_q;
DataAttribute iedModel_PROT_PTUF2_Mod_t;
DataAttribute iedModel_PROT_PTUF2_Mod_stVal;

DataObject    iedModel_PROT_PTUF2_Beh;					// ����� ������
DataAttribute iedModel_PROT_PTUF2_Beh_stVal;
DataAttribute iedModel_PROT_PTUF2_Beh_q;
DataAttribute iedModel_PROT_PTUF2_Beh_t;

DataObject    iedModel_PROT_PTUF2_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_PTUF2_Health_stVal;
DataAttribute iedModel_PROT_PTUF2_Health_q;
DataAttribute iedModel_PROT_PTUF2_Health_t;

DataObject    iedModel_PROT_PTUF2_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_PTUF2_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_PTUF2_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_PTUF2_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_PTUF2_Str;
DataAttribute iedModel_PROT_PTUF2_Str_general;
DataAttribute iedModel_PROT_PTUF2_Str_dirGeneral;
DataAttribute iedModel_PROT_PTUF2_Str_q;
DataAttribute iedModel_PROT_PTUF2_Str_t;

DataObject    iedModel_PROT_PTUF2_Op;
DataAttribute iedModel_PROT_PTUF2_Op_general;
DataAttribute iedModel_PROT_PTUF2_Op_q;
DataAttribute iedModel_PROT_PTUF2_Op_t;

//----------------------------------------------------------------------------
// PTUF3
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_PTUF3;

DataObject    iedModel_PROT_PTUF3_Mod;					// �����
DataAttribute iedModel_PROT_PTUF3_Mod_q;
DataAttribute iedModel_PROT_PTUF3_Mod_t;
DataAttribute iedModel_PROT_PTUF3_Mod_stVal;

DataObject    iedModel_PROT_PTUF3_Beh;					// ����� ������
DataAttribute iedModel_PROT_PTUF3_Beh_stVal;
DataAttribute iedModel_PROT_PTUF3_Beh_q;
DataAttribute iedModel_PROT_PTUF3_Beh_t;

DataObject    iedModel_PROT_PTUF3_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_PTUF3_Health_stVal;
DataAttribute iedModel_PROT_PTUF3_Health_q;
DataAttribute iedModel_PROT_PTUF3_Health_t;

DataObject    iedModel_PROT_PTUF3_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_PTUF3_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_PTUF3_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_PTUF3_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_PTUF3_Str;
DataAttribute iedModel_PROT_PTUF3_Str_general;
DataAttribute iedModel_PROT_PTUF3_Str_dirGeneral;
DataAttribute iedModel_PROT_PTUF3_Str_q;
DataAttribute iedModel_PROT_PTUF3_Str_t;

DataObject    iedModel_PROT_PTUF3_Op;
DataAttribute iedModel_PROT_PTUF3_Op_general;
DataAttribute iedModel_PROT_PTUF3_Op_q;
DataAttribute iedModel_PROT_PTUF3_Op_t;

//----------------------------------------------------------------------------
// PTUF4
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_PTUF4;

DataObject    iedModel_PROT_PTUF4_Mod;					// �����
DataAttribute iedModel_PROT_PTUF4_Mod_q;
DataAttribute iedModel_PROT_PTUF4_Mod_t;
DataAttribute iedModel_PROT_PTUF4_Mod_stVal;

DataObject    iedModel_PROT_PTUF4_Beh;					// ����� ������
DataAttribute iedModel_PROT_PTUF4_Beh_stVal;
DataAttribute iedModel_PROT_PTUF4_Beh_q;
DataAttribute iedModel_PROT_PTUF4_Beh_t;

DataObject    iedModel_PROT_PTUF4_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_PTUF4_Health_stVal;
DataAttribute iedModel_PROT_PTUF4_Health_q;
DataAttribute iedModel_PROT_PTUF4_Health_t;

DataObject    iedModel_PROT_PTUF4_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_PTUF4_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_PTUF4_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_PTUF4_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_PTUF4_Str;
DataAttribute iedModel_PROT_PTUF4_Str_general;
DataAttribute iedModel_PROT_PTUF4_Str_dirGeneral;
DataAttribute iedModel_PROT_PTUF4_Str_q;
DataAttribute iedModel_PROT_PTUF4_Str_t;

DataObject    iedModel_PROT_PTUF4_Op;
DataAttribute iedModel_PROT_PTUF4_Op_general;
DataAttribute iedModel_PROT_PTUF4_Op_q;
DataAttribute iedModel_PROT_PTUF4_Op_t;

//----------------------------------------------------------------------------
// BLKPTTR1
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_BLKPTTR1;

DataObject iedModel_PROT_BLKPTTR1_Mod;
DataAttribute iedModel_PROT_BLKPTTR1_Mod_q;
DataAttribute iedModel_PROT_BLKPTTR1_Mod_t;
DataAttribute iedModel_PROT_BLKPTTR1_Mod_stVal;

DataObject iedModel_PROT_BLKPTTR1_Beh;
DataAttribute iedModel_PROT_BLKPTTR1_Beh_stVal;
DataAttribute iedModel_PROT_BLKPTTR1_Beh_q;
DataAttribute iedModel_PROT_BLKPTTR1_Beh_t;

DataObject iedModel_PROT_BLKPTTR1_Health;
DataAttribute iedModel_PROT_BLKPTTR1_Health_stVal;
DataAttribute iedModel_PROT_BLKPTTR1_Health_q;
DataAttribute iedModel_PROT_BLKPTTR1_Health_t;

DataObject iedModel_PROT_BLKPTTR1_NamPlt;
DataAttribute iedModel_PROT_BLKPTTR1_NamPlt_vendor;
DataAttribute iedModel_PROT_BLKPTTR1_NamPlt_swRev;
DataAttribute iedModel_PROT_BLKPTTR1_NamPlt_d;

DataObject iedModel_PROT_BLKPTTR1_TmpRI;
DataAttribute iedModel_PROT_BLKPTTR1_TmpRI_mag;
DataAttribute iedModel_PROT_BLKPTTR1_TmpRI_mag_f;
DataAttribute iedModel_PROT_BLKPTTR1_TmpRI_q;
DataAttribute iedModel_PROT_BLKPTTR1_TmpRI_t;
DataAttribute iedModel_PROT_BLKPTTR1_TmpRI_db;
DataAttribute iedModel_PROT_BLKPTTR1_TmpRI_zeroDb;

DataObject iedModel_PROT_BLKPTTR1_Op;
DataAttribute iedModel_PROT_BLKPTTR1_Op_general;
DataAttribute iedModel_PROT_BLKPTTR1_Op_q;
DataAttribute iedModel_PROT_BLKPTTR1_Op_t;

//----------------------------------------------------------------------------
// QPTTR1
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_QPTTR1;

DataObject iedModel_PROT_QPTTR1_Mod;
DataAttribute iedModel_PROT_QPTTR1_Mod_q;
DataAttribute iedModel_PROT_QPTTR1_Mod_t;
DataAttribute iedModel_PROT_QPTTR1_Mod_stVal;

DataObject iedModel_PROT_QPTTR1_Beh;
DataAttribute iedModel_PROT_QPTTR1_Beh_stVal;
DataAttribute iedModel_PROT_QPTTR1_Beh_q;
DataAttribute iedModel_PROT_QPTTR1_Beh_t;

DataObject iedModel_PROT_QPTTR1_Health;
DataAttribute iedModel_PROT_QPTTR1_Health_stVal;
DataAttribute iedModel_PROT_QPTTR1_Health_q;
DataAttribute iedModel_PROT_QPTTR1_Health_t;

DataObject iedModel_PROT_QPTTR1_NamPlt;
DataAttribute iedModel_PROT_QPTTR1_NamPlt_vendor;
DataAttribute iedModel_PROT_QPTTR1_NamPlt_swRev;
DataAttribute iedModel_PROT_QPTTR1_NamPlt_d;

DataObject iedModel_PROT_QPTTR1_TmpRI;
DataAttribute iedModel_PROT_QPTTR1_TmpRI_mag;
DataAttribute iedModel_PROT_QPTTR1_TmpRI_mag_f;
DataAttribute iedModel_PROT_QPTTR1_TmpRI_q;
DataAttribute iedModel_PROT_QPTTR1_TmpRI_t;
DataAttribute iedModel_PROT_QPTTR1_TmpRI_db;
DataAttribute iedModel_PROT_QPTTR1_TmpRI_zeroDb;

DataObject iedModel_PROT_QPTTR1_Op;
DataAttribute iedModel_PROT_QPTTR1_Op_general;
DataAttribute iedModel_PROT_QPTTR1_Op_q;
DataAttribute iedModel_PROT_QPTTR1_Op_t;

//----------------------------------------------------------------------------
// QPTTR2
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_QPTTR2;

DataObject iedModel_PROT_QPTTR2_Mod;
DataAttribute iedModel_PROT_QPTTR2_Mod_q;
DataAttribute iedModel_PROT_QPTTR2_Mod_t;
DataAttribute iedModel_PROT_QPTTR2_Mod_stVal;

DataObject iedModel_PROT_QPTTR2_Beh;
DataAttribute iedModel_PROT_QPTTR2_Beh_stVal;
DataAttribute iedModel_PROT_QPTTR2_Beh_q;
DataAttribute iedModel_PROT_QPTTR2_Beh_t;

DataObject iedModel_PROT_QPTTR2_Health;
DataAttribute iedModel_PROT_QPTTR2_Health_stVal;
DataAttribute iedModel_PROT_QPTTR2_Health_q;
DataAttribute iedModel_PROT_QPTTR2_Health_t;

DataObject iedModel_PROT_QPTTR2_NamPlt;
DataAttribute iedModel_PROT_QPTTR2_NamPlt_vendor;
DataAttribute iedModel_PROT_QPTTR2_NamPlt_swRev;
DataAttribute iedModel_PROT_QPTTR2_NamPlt_d;

DataObject iedModel_PROT_QPTTR2_TmpRI;
DataAttribute iedModel_PROT_QPTTR2_TmpRI_mag;
DataAttribute iedModel_PROT_QPTTR2_TmpRI_mag_f;
DataAttribute iedModel_PROT_QPTTR2_TmpRI_q;
DataAttribute iedModel_PROT_QPTTR2_TmpRI_t;
DataAttribute iedModel_PROT_QPTTR2_TmpRI_db;
DataAttribute iedModel_PROT_QPTTR2_TmpRI_zeroDb;

DataObject iedModel_PROT_QPTTR2_Op;
DataAttribute iedModel_PROT_QPTTR2_Op_general;
DataAttribute iedModel_PROT_QPTTR2_Op_q;
DataAttribute iedModel_PROT_QPTTR2_Op_t;

//----------------------------------------------------------------------------
// RREC1
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_RREC1;

DataObject    iedModel_PROT_RREC1_Mod;
DataAttribute iedModel_PROT_RREC1_Mod_q;
DataAttribute iedModel_PROT_RREC1_Mod_t;
DataAttribute iedModel_PROT_RREC1_Mod_stVal;

DataObject    iedModel_PROT_RREC1_Beh;
DataAttribute iedModel_PROT_RREC1_Beh_stVal;
DataAttribute iedModel_PROT_RREC1_Beh_q;
DataAttribute iedModel_PROT_RREC1_Beh_t;

DataObject    iedModel_PROT_RREC1_Health;
DataAttribute iedModel_PROT_RREC1_Health_stVal;
DataAttribute iedModel_PROT_RREC1_Health_q;
DataAttribute iedModel_PROT_RREC1_Health_t;

DataObject    iedModel_PROT_RREC1_NamPlt;
DataAttribute iedModel_PROT_RREC1_NamPlt_vendor;
DataAttribute iedModel_PROT_RREC1_NamPlt_swRev;
DataAttribute iedModel_PROT_RREC1_NamPlt_d;

DataObject 	  iedModel_PROT_RREC1_AutoRecSt;
DataAttribute iedModel_PROT_RREC1_AutoRecSt_stVal;
DataAttribute iedModel_PROT_RREC1_AutoRecSt_q;
DataAttribute iedModel_PROT_RREC1_AutoRecSt_t;

DataObject    iedModel_PROT_RREC1_Op;
DataAttribute iedModel_PROT_RREC1_Op_general;
DataAttribute iedModel_PROT_RREC1_Op_q;
DataAttribute iedModel_PROT_RREC1_Op_t;

//----------------------------------------------------------------------------
// RSYN1
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_RSYN1;

DataObject iedModel_PROT_RSYN1_Mod;
DataAttribute iedModel_PROT_RSYN1_Mod_q;
DataAttribute iedModel_PROT_RSYN1_Mod_t;
DataAttribute iedModel_PROT_RSYN1_Mod_stVal;

DataObject iedModel_PROT_RSYN1_Beh;
DataAttribute iedModel_PROT_RSYN1_Beh_stVal;
DataAttribute iedModel_PROT_RSYN1_Beh_q;
DataAttribute iedModel_PROT_RSYN1_Beh_t;

DataObject iedModel_PROT_RSYN1_Health;
DataAttribute iedModel_PROT_RSYN1_Health_stVal;
DataAttribute iedModel_PROT_RSYN1_Health_q;
DataAttribute iedModel_PROT_RSYN1_Health_t;

DataObject iedModel_PROT_RSYN1_NamPlt;
DataAttribute iedModel_PROT_RSYN1_NamPlt_vendor;
DataAttribute iedModel_PROT_RSYN1_NamPlt_swRev;
DataAttribute iedModel_PROT_RSYN1_NamPlt_d;

DataObject iedModel_PROT_RSYN1_Rel;
DataAttribute iedModel_PROT_RSYN1_Rel_stVal;
DataAttribute iedModel_PROT_RSYN1_Rel_q;
DataAttribute iedModel_PROT_RSYN1_Rel_t;

DataObject iedModel_PROT_RSYN1_DifVCIc;
DataAttribute iedModel_PROT_RSYN1_DifVCIc_mag;
DataAttribute iedModel_PROT_RSYN1_DifVCIc_mag_f;
DataAttribute iedModel_PROT_RSYN1_DifVCIc_q;
DataAttribute iedModel_PROT_RSYN1_DifVCIc_t;
DataAttribute iedModel_PROT_RSYN1_DifVCIc_db;
DataAttribute iedModel_PROT_RSYN1_DifVCIc_zeroDb;

DataObject iedModel_PROT_RSYN1_DifHzCIc;
DataAttribute iedModel_PROT_RSYN1_DifHzCIc_mag;
DataAttribute iedModel_PROT_RSYN1_DifHzCIc_mag_f;
DataAttribute iedModel_PROT_RSYN1_DifHzCIc_q;
DataAttribute iedModel_PROT_RSYN1_DifHzCIc_t;
DataAttribute iedModel_PROT_RSYN1_DifHzCIc_db;
DataAttribute iedModel_PROT_RSYN1_DifHzCIc_zeroDb;

DataObject iedModel_PROT_RSYN1_DifAngCIc;
DataAttribute iedModel_PROT_RSYN1_DifAngCIc_mag;
DataAttribute iedModel_PROT_RSYN1_DifAngCIc_mag_f;
DataAttribute iedModel_PROT_RSYN1_DifAngCIc_q;
DataAttribute iedModel_PROT_RSYN1_DifAngCIc_t;
DataAttribute iedModel_PROT_RSYN1_DifAngCIc_db;
DataAttribute iedModel_PROT_RSYN1_DifAngCIc_zeroDb;

//----------------------------------------------------------------------------
// RBRF1
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_RBRF1;

DataObject    iedModel_PROT_RBRF1_Mod;					// �����
DataAttribute iedModel_PROT_RBRF1_Mod_q;
DataAttribute iedModel_PROT_RBRF1_Mod_t;
DataAttribute iedModel_PROT_RBRF1_Mod_stVal;

DataObject    iedModel_PROT_RBRF1_Beh;					// ����� ������
DataAttribute iedModel_PROT_RBRF1_Beh_stVal;
DataAttribute iedModel_PROT_RBRF1_Beh_q;
DataAttribute iedModel_PROT_RBRF1_Beh_t;

DataObject    iedModel_PROT_RBRF1_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_RBRF1_Health_stVal;
DataAttribute iedModel_PROT_RBRF1_Health_q;
DataAttribute iedModel_PROT_RBRF1_Health_t;

DataObject    iedModel_PROT_RBRF1_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_RBRF1_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_RBRF1_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_RBRF1_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_RBRF1_OpEx;
DataAttribute iedModel_PROT_RBRF1_OpEx_general;
DataAttribute iedModel_PROT_RBRF1_OpEx_q;
DataAttribute iedModel_PROT_RBRF1_OpEx_t;
/*
//----------------------------------------------------------------------------
// RBRF2
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_RBRF2;

DataObject    iedModel_PROT_RBRF2_Mod;					// �����
DataAttribute iedModel_PROT_RBRF2_Mod_q;
DataAttribute iedModel_PROT_RBRF2_Mod_t;
DataAttribute iedModel_PROT_RBRF2_Mod_stVal;

DataObject    iedModel_PROT_RBRF2_Beh;					// ����� ������
DataAttribute iedModel_PROT_RBRF2_Beh_stVal;
DataAttribute iedModel_PROT_RBRF2_Beh_q;
DataAttribute iedModel_PROT_RBRF2_Beh_t;

DataObject    iedModel_PROT_RBRF2_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_RBRF2_Health_stVal;
DataAttribute iedModel_PROT_RBRF2_Health_q;
DataAttribute iedModel_PROT_RBRF2_Health_t;

DataObject    iedModel_PROT_RBRF2_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_RBRF2_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_RBRF2_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_RBRF2_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_RBRF2_OpEx;
DataAttribute iedModel_PROT_RBRF2_OpEx_general;
DataAttribute iedModel_PROT_RBRF2_OpEx_q;
DataAttribute iedModel_PROT_RBRF2_OpEx_t;
*/
//----------------------------------------------------------------------------
// BLKRBRF
//----------------------------------------------------------------------------
LogicalNode   iedModel_PROT_BLKRBRF;

DataObject    iedModel_PROT_BLKRBRF_Mod;					// �����
DataAttribute iedModel_PROT_BLKRBRF_Mod_q;
DataAttribute iedModel_PROT_BLKRBRF_Mod_t;
DataAttribute iedModel_PROT_BLKRBRF_Mod_stVal;

DataObject    iedModel_PROT_BLKRBRF_Beh;					// ����� ������
DataAttribute iedModel_PROT_BLKRBRF_Beh_stVal;
DataAttribute iedModel_PROT_BLKRBRF_Beh_q;
DataAttribute iedModel_PROT_BLKRBRF_Beh_t;

DataObject    iedModel_PROT_BLKRBRF_Health;				// ��������� �����������������
DataAttribute iedModel_PROT_BLKRBRF_Health_stVal;
DataAttribute iedModel_PROT_BLKRBRF_Health_q;
DataAttribute iedModel_PROT_BLKRBRF_Health_t;

DataObject    iedModel_PROT_BLKRBRF_NamPlt;				// ���������� ��������
DataAttribute iedModel_PROT_BLKRBRF_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_PROT_BLKRBRF_NamPlt_swRev;			// 		������� ����������� �����
DataAttribute iedModel_PROT_BLKRBRF_NamPlt_d;				//		��������� �������� ������ ����� ��������� � ����������� ���� LN PTOC1.

DataObject    iedModel_PROT_BLKRBRF_OpEx;
DataAttribute iedModel_PROT_BLKRBRF_OpEx_general;
DataAttribute iedModel_PROT_BLKRBRF_OpEx_q;
DataAttribute iedModel_PROT_BLKRBRF_OpEx_t;

//----------------------------------------------------------------------------
// RPSB1
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_RPSB1;

DataObject iedModel_PROT_RPSB1_Mod;
DataAttribute iedModel_PROT_RPSB1_Mod_q;
DataAttribute iedModel_PROT_RPSB1_Mod_t;
DataAttribute iedModel_PROT_RPSB1_Mod_stVal;

DataObject iedModel_PROT_RPSB1_Beh;
DataAttribute iedModel_PROT_RPSB1_Beh_stVal;
DataAttribute iedModel_PROT_RPSB1_Beh_q;
DataAttribute iedModel_PROT_RPSB1_Beh_t;

DataObject iedModel_PROT_RPSB1_Health;
DataAttribute iedModel_PROT_RPSB1_Health_stVal;
DataAttribute iedModel_PROT_RPSB1_Health_q;
DataAttribute iedModel_PROT_RPSB1_Health_t;

DataObject iedModel_PROT_RPSB1_NamPlt;
DataAttribute iedModel_PROT_RPSB1_NamPlt_vendor;
DataAttribute iedModel_PROT_RPSB1_NamPlt_swRev;
DataAttribute iedModel_PROT_RPSB1_NamPlt_d;

DataObject iedModel_PROT_RPSB1_Str;
DataAttribute iedModel_PROT_RPSB1_Str_general;
DataAttribute iedModel_PROT_RPSB1_Str_q;
DataAttribute iedModel_PROT_RPSB1_Str_t;

DataObject iedModel_PROT_RPSB1_BlkZn;
DataAttribute iedModel_PROT_RPSB1_BlkZn_general;
DataAttribute iedModel_PROT_RPSB1_BlkZn_q;
DataAttribute iedModel_PROT_RPSB1_BlkZn_t;

//----------------------------------------------------------------------------
// PDIS1
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_PDIS1;

DataObject iedModel_PROT_PDIS1_Mod;
DataAttribute iedModel_PROT_PDIS1_Mod_q;
DataAttribute iedModel_PROT_PDIS1_Mod_t;
DataAttribute iedModel_PROT_PDIS1_Mod_stVal;
DataAttribute iedModel_PROT_PDIS1_Mod_ctlModel;

DataObject iedModel_PROT_PDIS1_Beh;
DataAttribute iedModel_PROT_PDIS1_Beh_stVal;
DataAttribute iedModel_PROT_PDIS1_Beh_q;
DataAttribute iedModel_PROT_PDIS1_Beh_t;

DataObject iedModel_PROT_PDIS1_Health;
DataAttribute iedModel_PROT_PDIS1_Health_stVal;
DataAttribute iedModel_PROT_PDIS1_Health_q;
DataAttribute iedModel_PROT_PDIS1_Health_t;

DataObject iedModel_PROT_PDIS1_NamPlt;
DataAttribute iedModel_PROT_PDIS1_NamPlt_vendor;
DataAttribute iedModel_PROT_PDIS1_NamPlt_swRev;
DataAttribute iedModel_PROT_PDIS1_NamPlt_d;

DataObject iedModel_PROT_PDIS1_Op;
DataAttribute iedModel_PROT_PDIS1_Op_general;
DataAttribute iedModel_PROT_PDIS1_Op_q;
DataAttribute iedModel_PROT_PDIS1_Op_t;

DataObject iedModel_PROT_PDIS1_Str;
DataAttribute iedModel_PROT_PDIS1_Str_general;
DataAttribute iedModel_PROT_PDIS1_Str_dirGeneral;
DataAttribute iedModel_PROT_PDIS1_Str_q;
DataAttribute iedModel_PROT_PDIS1_Str_t;

//----------------------------------------------------------------------------
// PDIS1
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_PDIS2;

DataObject iedModel_PROT_PDIS2_Mod;
DataAttribute iedModel_PROT_PDIS2_Mod_q;
DataAttribute iedModel_PROT_PDIS2_Mod_t;
DataAttribute iedModel_PROT_PDIS2_Mod_stVal;
DataAttribute iedModel_PROT_PDIS2_Mod_ctlModel;

DataObject iedModel_PROT_PDIS2_Beh;
DataAttribute iedModel_PROT_PDIS2_Beh_stVal;
DataAttribute iedModel_PROT_PDIS2_Beh_q;
DataAttribute iedModel_PROT_PDIS2_Beh_t;

DataObject iedModel_PROT_PDIS2_Health;
DataAttribute iedModel_PROT_PDIS2_Health_stVal;
DataAttribute iedModel_PROT_PDIS2_Health_q;
DataAttribute iedModel_PROT_PDIS2_Health_t;

DataObject iedModel_PROT_PDIS2_NamPlt;
DataAttribute iedModel_PROT_PDIS2_NamPlt_vendor;
DataAttribute iedModel_PROT_PDIS2_NamPlt_swRev;
DataAttribute iedModel_PROT_PDIS2_NamPlt_d;

DataObject iedModel_PROT_PDIS2_Op;
DataAttribute iedModel_PROT_PDIS2_Op_general;
DataAttribute iedModel_PROT_PDIS2_Op_q;
DataAttribute iedModel_PROT_PDIS2_Op_t;

DataObject iedModel_PROT_PDIS2_Str;
DataAttribute iedModel_PROT_PDIS2_Str_general;
DataAttribute iedModel_PROT_PDIS2_Str_dirGeneral;
DataAttribute iedModel_PROT_PDIS2_Str_q;
DataAttribute iedModel_PROT_PDIS2_Str_t;

//----------------------------------------------------------------------------
// PDIS1
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_PDIS3;

DataObject iedModel_PROT_PDIS3_Mod;
DataAttribute iedModel_PROT_PDIS3_Mod_q;
DataAttribute iedModel_PROT_PDIS3_Mod_t;
DataAttribute iedModel_PROT_PDIS3_Mod_stVal;
DataAttribute iedModel_PROT_PDIS3_Mod_ctlModel;

DataObject iedModel_PROT_PDIS3_Beh;
DataAttribute iedModel_PROT_PDIS3_Beh_stVal;
DataAttribute iedModel_PROT_PDIS3_Beh_q;
DataAttribute iedModel_PROT_PDIS3_Beh_t;

DataObject iedModel_PROT_PDIS3_Health;
DataAttribute iedModel_PROT_PDIS3_Health_stVal;
DataAttribute iedModel_PROT_PDIS3_Health_q;
DataAttribute iedModel_PROT_PDIS3_Health_t;

DataObject iedModel_PROT_PDIS3_NamPlt;
DataAttribute iedModel_PROT_PDIS3_NamPlt_vendor;
DataAttribute iedModel_PROT_PDIS3_NamPlt_swRev;
DataAttribute iedModel_PROT_PDIS3_NamPlt_d;

DataObject iedModel_PROT_PDIS3_Op;
DataAttribute iedModel_PROT_PDIS3_Op_general;
DataAttribute iedModel_PROT_PDIS3_Op_q;
DataAttribute iedModel_PROT_PDIS3_Op_t;

DataObject iedModel_PROT_PDIS3_Str;
DataAttribute iedModel_PROT_PDIS3_Str_general;
DataAttribute iedModel_PROT_PDIS3_Str_dirGeneral;
DataAttribute iedModel_PROT_PDIS3_Str_q;
DataAttribute iedModel_PROT_PDIS3_Str_t;

//----------------------------------------------------------------------------
// PDIS1
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_PDIS4;

DataObject iedModel_PROT_PDIS4_Mod;
DataAttribute iedModel_PROT_PDIS4_Mod_q;
DataAttribute iedModel_PROT_PDIS4_Mod_t;
DataAttribute iedModel_PROT_PDIS4_Mod_stVal;
DataAttribute iedModel_PROT_PDIS4_Mod_ctlModel;

DataObject iedModel_PROT_PDIS4_Beh;
DataAttribute iedModel_PROT_PDIS4_Beh_stVal;
DataAttribute iedModel_PROT_PDIS4_Beh_q;
DataAttribute iedModel_PROT_PDIS4_Beh_t;

DataObject iedModel_PROT_PDIS4_Health;
DataAttribute iedModel_PROT_PDIS4_Health_stVal;
DataAttribute iedModel_PROT_PDIS4_Health_q;
DataAttribute iedModel_PROT_PDIS4_Health_t;

DataObject iedModel_PROT_PDIS4_NamPlt;
DataAttribute iedModel_PROT_PDIS4_NamPlt_vendor;
DataAttribute iedModel_PROT_PDIS4_NamPlt_swRev;
DataAttribute iedModel_PROT_PDIS4_NamPlt_d;

DataObject iedModel_PROT_PDIS4_Op;
DataAttribute iedModel_PROT_PDIS4_Op_general;
DataAttribute iedModel_PROT_PDIS4_Op_q;
DataAttribute iedModel_PROT_PDIS4_Op_t;

DataObject iedModel_PROT_PDIS4_Str;
DataAttribute iedModel_PROT_PDIS4_Str_general;
DataAttribute iedModel_PROT_PDIS4_Str_dirGeneral;
DataAttribute iedModel_PROT_PDIS4_Str_q;
DataAttribute iedModel_PROT_PDIS4_Str_t;

//----------------------------------------------------------------------------
// PDIS1
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_PDIS5;

DataObject iedModel_PROT_PDIS5_Mod;
DataAttribute iedModel_PROT_PDIS5_Mod_q;
DataAttribute iedModel_PROT_PDIS5_Mod_t;
DataAttribute iedModel_PROT_PDIS5_Mod_stVal;
DataAttribute iedModel_PROT_PDIS5_Mod_ctlModel;

DataObject iedModel_PROT_PDIS5_Beh;
DataAttribute iedModel_PROT_PDIS5_Beh_stVal;
DataAttribute iedModel_PROT_PDIS5_Beh_q;
DataAttribute iedModel_PROT_PDIS5_Beh_t;

DataObject iedModel_PROT_PDIS5_Health;
DataAttribute iedModel_PROT_PDIS5_Health_stVal;
DataAttribute iedModel_PROT_PDIS5_Health_q;
DataAttribute iedModel_PROT_PDIS5_Health_t;

DataObject iedModel_PROT_PDIS5_NamPlt;
DataAttribute iedModel_PROT_PDIS5_NamPlt_vendor;
DataAttribute iedModel_PROT_PDIS5_NamPlt_swRev;
DataAttribute iedModel_PROT_PDIS5_NamPlt_d;

DataObject iedModel_PROT_PDIS5_Op;
DataAttribute iedModel_PROT_PDIS5_Op_general;
DataAttribute iedModel_PROT_PDIS5_Op_q;
DataAttribute iedModel_PROT_PDIS5_Op_t;

DataObject iedModel_PROT_PDIS5_Str;
DataAttribute iedModel_PROT_PDIS5_Str_general;
DataAttribute iedModel_PROT_PDIS5_Str_dirGeneral;
DataAttribute iedModel_PROT_PDIS5_Str_q;
DataAttribute iedModel_PROT_PDIS5_Str_t;

//----------------------------------------------------------------------------
// PDIS1
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_PDIS6;

DataObject iedModel_PROT_PDIS6_Mod;
DataAttribute iedModel_PROT_PDIS6_Mod_q;
DataAttribute iedModel_PROT_PDIS6_Mod_t;
DataAttribute iedModel_PROT_PDIS6_Mod_stVal;
DataAttribute iedModel_PROT_PDIS6_Mod_ctlModel;

DataObject iedModel_PROT_PDIS6_Beh;
DataAttribute iedModel_PROT_PDIS6_Beh_stVal;
DataAttribute iedModel_PROT_PDIS6_Beh_q;
DataAttribute iedModel_PROT_PDIS6_Beh_t;

DataObject iedModel_PROT_PDIS6_Health;
DataAttribute iedModel_PROT_PDIS6_Health_stVal;
DataAttribute iedModel_PROT_PDIS6_Health_q;
DataAttribute iedModel_PROT_PDIS6_Health_t;

DataObject iedModel_PROT_PDIS6_NamPlt;
DataAttribute iedModel_PROT_PDIS6_NamPlt_vendor;
DataAttribute iedModel_PROT_PDIS6_NamPlt_swRev;
DataAttribute iedModel_PROT_PDIS6_NamPlt_d;

DataObject iedModel_PROT_PDIS6_Op;
DataAttribute iedModel_PROT_PDIS6_Op_general;
DataAttribute iedModel_PROT_PDIS6_Op_q;
DataAttribute iedModel_PROT_PDIS6_Op_t;

DataObject iedModel_PROT_PDIS6_Str;
DataAttribute iedModel_PROT_PDIS6_Str_general;
DataAttribute iedModel_PROT_PDIS6_Str_dirGeneral;
DataAttribute iedModel_PROT_PDIS6_Str_q;
DataAttribute iedModel_PROT_PDIS6_Str_t;

//----------------------------------------------------------------------------
// PDIS1
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_PDIS7;

DataObject iedModel_PROT_PDIS7_Mod;
DataAttribute iedModel_PROT_PDIS7_Mod_q;
DataAttribute iedModel_PROT_PDIS7_Mod_t;
DataAttribute iedModel_PROT_PDIS7_Mod_stVal;
DataAttribute iedModel_PROT_PDIS7_Mod_ctlModel;

DataObject iedModel_PROT_PDIS7_Beh;
DataAttribute iedModel_PROT_PDIS7_Beh_stVal;
DataAttribute iedModel_PROT_PDIS7_Beh_q;
DataAttribute iedModel_PROT_PDIS7_Beh_t;

DataObject iedModel_PROT_PDIS7_Health;
DataAttribute iedModel_PROT_PDIS7_Health_stVal;
DataAttribute iedModel_PROT_PDIS7_Health_q;
DataAttribute iedModel_PROT_PDIS7_Health_t;

DataObject iedModel_PROT_PDIS7_NamPlt;
DataAttribute iedModel_PROT_PDIS7_NamPlt_vendor;
DataAttribute iedModel_PROT_PDIS7_NamPlt_swRev;
DataAttribute iedModel_PROT_PDIS7_NamPlt_d;

DataObject iedModel_PROT_PDIS7_Op;
DataAttribute iedModel_PROT_PDIS7_Op_general;
DataAttribute iedModel_PROT_PDIS7_Op_q;
DataAttribute iedModel_PROT_PDIS7_Op_t;

DataObject iedModel_PROT_PDIS7_Str;
DataAttribute iedModel_PROT_PDIS7_Str_general;
DataAttribute iedModel_PROT_PDIS7_Str_dirGeneral;
DataAttribute iedModel_PROT_PDIS7_Str_q;
DataAttribute iedModel_PROT_PDIS7_Str_t;

//----------------------------------------------------------------------------
// PDIS1
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_PDIS8;

DataObject iedModel_PROT_PDIS8_Mod;
DataAttribute iedModel_PROT_PDIS8_Mod_q;
DataAttribute iedModel_PROT_PDIS8_Mod_t;
DataAttribute iedModel_PROT_PDIS8_Mod_stVal;
DataAttribute iedModel_PROT_PDIS8_Mod_ctlModel;

DataObject iedModel_PROT_PDIS8_Beh;
DataAttribute iedModel_PROT_PDIS8_Beh_stVal;
DataAttribute iedModel_PROT_PDIS8_Beh_q;
DataAttribute iedModel_PROT_PDIS8_Beh_t;

DataObject iedModel_PROT_PDIS8_Health;
DataAttribute iedModel_PROT_PDIS8_Health_stVal;
DataAttribute iedModel_PROT_PDIS8_Health_q;
DataAttribute iedModel_PROT_PDIS8_Health_t;

DataObject iedModel_PROT_PDIS8_NamPlt;
DataAttribute iedModel_PROT_PDIS8_NamPlt_vendor;
DataAttribute iedModel_PROT_PDIS8_NamPlt_swRev;
DataAttribute iedModel_PROT_PDIS8_NamPlt_d;

DataObject iedModel_PROT_PDIS8_Op;
DataAttribute iedModel_PROT_PDIS8_Op_general;
DataAttribute iedModel_PROT_PDIS8_Op_q;
DataAttribute iedModel_PROT_PDIS8_Op_t;

DataObject iedModel_PROT_PDIS8_Str;
DataAttribute iedModel_PROT_PDIS8_Str_general;
DataAttribute iedModel_PROT_PDIS8_Str_dirGeneral;
DataAttribute iedModel_PROT_PDIS8_Str_q;
DataAttribute iedModel_PROT_PDIS8_Str_t;

//----------------------------------------------------------------------------
// PDIS1
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_PDIS9;

DataObject iedModel_PROT_PDIS9_Mod;
DataAttribute iedModel_PROT_PDIS9_Mod_q;
DataAttribute iedModel_PROT_PDIS9_Mod_t;
DataAttribute iedModel_PROT_PDIS9_Mod_stVal;
DataAttribute iedModel_PROT_PDIS9_Mod_ctlModel;

DataObject iedModel_PROT_PDIS9_Beh;
DataAttribute iedModel_PROT_PDIS9_Beh_stVal;
DataAttribute iedModel_PROT_PDIS9_Beh_q;
DataAttribute iedModel_PROT_PDIS9_Beh_t;

DataObject iedModel_PROT_PDIS9_Health;
DataAttribute iedModel_PROT_PDIS9_Health_stVal;
DataAttribute iedModel_PROT_PDIS9_Health_q;
DataAttribute iedModel_PROT_PDIS9_Health_t;

DataObject iedModel_PROT_PDIS9_NamPlt;
DataAttribute iedModel_PROT_PDIS9_NamPlt_vendor;
DataAttribute iedModel_PROT_PDIS9_NamPlt_swRev;
DataAttribute iedModel_PROT_PDIS9_NamPlt_d;

DataObject iedModel_PROT_PDIS9_Op;
DataAttribute iedModel_PROT_PDIS9_Op_general;
DataAttribute iedModel_PROT_PDIS9_Op_q;
DataAttribute iedModel_PROT_PDIS9_Op_t;

DataObject iedModel_PROT_PDIS9_Str;
DataAttribute iedModel_PROT_PDIS9_Str_general;
DataAttribute iedModel_PROT_PDIS9_Str_dirGeneral;
DataAttribute iedModel_PROT_PDIS9_Str_q;
DataAttribute iedModel_PROT_PDIS9_Str_t;

//----------------------------------------------------------------------------
// PDIS1
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_PDIS10;

DataObject iedModel_PROT_PDIS10_Mod;
DataAttribute iedModel_PROT_PDIS10_Mod_q;
DataAttribute iedModel_PROT_PDIS10_Mod_t;
DataAttribute iedModel_PROT_PDIS10_Mod_stVal;
DataAttribute iedModel_PROT_PDIS10_Mod_ctlModel;

DataObject iedModel_PROT_PDIS10_Beh;
DataAttribute iedModel_PROT_PDIS10_Beh_stVal;
DataAttribute iedModel_PROT_PDIS10_Beh_q;
DataAttribute iedModel_PROT_PDIS10_Beh_t;

DataObject iedModel_PROT_PDIS10_Health;
DataAttribute iedModel_PROT_PDIS10_Health_stVal;
DataAttribute iedModel_PROT_PDIS10_Health_q;
DataAttribute iedModel_PROT_PDIS10_Health_t;

DataObject iedModel_PROT_PDIS10_NamPlt;
DataAttribute iedModel_PROT_PDIS10_NamPlt_vendor;
DataAttribute iedModel_PROT_PDIS10_NamPlt_swRev;
DataAttribute iedModel_PROT_PDIS10_NamPlt_d;

DataObject iedModel_PROT_PDIS10_Op;
DataAttribute iedModel_PROT_PDIS10_Op_general;
DataAttribute iedModel_PROT_PDIS10_Op_q;
DataAttribute iedModel_PROT_PDIS10_Op_t;

DataObject iedModel_PROT_PDIS10_Str;
DataAttribute iedModel_PROT_PDIS10_Str_general;
DataAttribute iedModel_PROT_PDIS10_Str_dirGeneral;
DataAttribute iedModel_PROT_PDIS10_Str_q;
DataAttribute iedModel_PROT_PDIS10_Str_t;

//----------------------------------------------------------------------------
// VZGGIO1
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_VZGGIO1;

DataObject iedModel_PROT_VZGGIO1_Mod;
DataAttribute iedModel_PROT_VZGGIO1_Mod_q;
DataAttribute iedModel_PROT_VZGGIO1_Mod_t;
DataAttribute iedModel_PROT_VZGGIO1_Mod_stVal;

DataObject iedModel_PROT_VZGGIO1_Beh;
DataAttribute iedModel_PROT_VZGGIO1_Beh_stVal;
DataAttribute iedModel_PROT_VZGGIO1_Beh_q;
DataAttribute iedModel_PROT_VZGGIO1_Beh_t;

DataObject iedModel_PROT_VZGGIO1_Health;
DataAttribute iedModel_PROT_VZGGIO1_Health_stVal;
DataAttribute iedModel_PROT_VZGGIO1_Health_q;
DataAttribute iedModel_PROT_VZGGIO1_Health_t;

DataObject iedModel_PROT_VZGGIO1_NamPlt;
DataAttribute iedModel_PROT_VZGGIO1_NamPlt_vendor;
DataAttribute iedModel_PROT_VZGGIO1_NamPlt_swRev;
DataAttribute iedModel_PROT_VZGGIO1_NamPlt_d;

DataObject iedModel_PROT_VZGGIO1_Alm;
DataAttribute iedModel_PROT_VZGGIO1_Alm_stVal;
DataAttribute iedModel_PROT_VZGGIO1_Alm_q;
DataAttribute iedModel_PROT_VZGGIO1_Alm_t;

//----------------------------------------------------------------------------
// VZGGIO2
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_VZGGIO2;
DataObject iedModel_PROT_VZGGIO2_Mod;
DataAttribute iedModel_PROT_VZGGIO2_Mod_q;
DataAttribute iedModel_PROT_VZGGIO2_Mod_t;
DataAttribute iedModel_PROT_VZGGIO2_Mod_stVal;

DataObject iedModel_PROT_VZGGIO2_Beh;
DataAttribute iedModel_PROT_VZGGIO2_Beh_stVal;
DataAttribute iedModel_PROT_VZGGIO2_Beh_q;
DataAttribute iedModel_PROT_VZGGIO2_Beh_t;

DataObject iedModel_PROT_VZGGIO2_Health;
DataAttribute iedModel_PROT_VZGGIO2_Health_stVal;
DataAttribute iedModel_PROT_VZGGIO2_Health_q;
DataAttribute iedModel_PROT_VZGGIO2_Health_t;

DataObject iedModel_PROT_VZGGIO2_NamPlt;

DataAttribute iedModel_PROT_VZGGIO2_NamPlt_vendor;
DataAttribute iedModel_PROT_VZGGIO2_NamPlt_swRev;
DataAttribute iedModel_PROT_VZGGIO2_NamPlt_d;

DataObject iedModel_PROT_VZGGIO2_Alm;
DataAttribute iedModel_PROT_VZGGIO2_Alm_stVal;
DataAttribute iedModel_PROT_VZGGIO2_Alm_q;
DataAttribute iedModel_PROT_VZGGIO2_Alm_t;

//----------------------------------------------------------------------------
// VZGGIO3
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_VZGGIO3;

DataObject iedModel_PROT_VZGGIO3_Mod;
DataAttribute iedModel_PROT_VZGGIO3_Mod_q;
DataAttribute iedModel_PROT_VZGGIO3_Mod_t;
DataAttribute iedModel_PROT_VZGGIO3_Mod_stVal;

DataObject iedModel_PROT_VZGGIO3_Beh;
DataAttribute iedModel_PROT_VZGGIO3_Beh_stVal;
DataAttribute iedModel_PROT_VZGGIO3_Beh_q;
DataAttribute iedModel_PROT_VZGGIO3_Beh_t;

DataObject iedModel_PROT_VZGGIO3_Health;
DataAttribute iedModel_PROT_VZGGIO3_Health_stVal;
DataAttribute iedModel_PROT_VZGGIO3_Health_q;
DataAttribute iedModel_PROT_VZGGIO3_Health_t;

DataObject iedModel_PROT_VZGGIO3_NamPlt;
DataAttribute iedModel_PROT_VZGGIO3_NamPlt_vendor;
DataAttribute iedModel_PROT_VZGGIO3_NamPlt_swRev;
DataAttribute iedModel_PROT_VZGGIO3_NamPlt_d;

DataObject iedModel_PROT_VZGGIO3_Alm;
DataAttribute iedModel_PROT_VZGGIO3_Alm_stVal;
DataAttribute iedModel_PROT_VZGGIO3_Alm_q;
DataAttribute iedModel_PROT_VZGGIO3_Alm_t;

//----------------------------------------------------------------------------
// VZGGIO4
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_VZGGIO4;
DataObject iedModel_PROT_VZGGIO4_Mod;
DataAttribute iedModel_PROT_VZGGIO4_Mod_q;
DataAttribute iedModel_PROT_VZGGIO4_Mod_t;
DataAttribute iedModel_PROT_VZGGIO4_Mod_stVal;

DataObject iedModel_PROT_VZGGIO4_Beh;
DataAttribute iedModel_PROT_VZGGIO4_Beh_stVal;
DataAttribute iedModel_PROT_VZGGIO4_Beh_q;
DataAttribute iedModel_PROT_VZGGIO4_Beh_t;

DataObject iedModel_PROT_VZGGIO4_Health;
DataAttribute iedModel_PROT_VZGGIO4_Health_stVal;
DataAttribute iedModel_PROT_VZGGIO4_Health_q;
DataAttribute iedModel_PROT_VZGGIO4_Health_t;

DataObject iedModel_PROT_VZGGIO4_NamPlt;
DataAttribute iedModel_PROT_VZGGIO4_NamPlt_vendor;
DataAttribute iedModel_PROT_VZGGIO4_NamPlt_swRev;
DataAttribute iedModel_PROT_VZGGIO4_NamPlt_d;

DataObject iedModel_PROT_VZGGIO4_Alm;
DataAttribute iedModel_PROT_VZGGIO4_Alm_stVal;
DataAttribute iedModel_PROT_VZGGIO4_Alm_q;
DataAttribute iedModel_PROT_VZGGIO4_Alm_t;

//----------------------------------------------------------------------------
// VZGGIO5
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_VZGGIO5;
DataObject iedModel_PROT_VZGGIO5_Mod;
DataAttribute iedModel_PROT_VZGGIO5_Mod_q;
DataAttribute iedModel_PROT_VZGGIO5_Mod_t;
DataAttribute iedModel_PROT_VZGGIO5_Mod_stVal;

DataObject iedModel_PROT_VZGGIO5_Beh;
DataAttribute iedModel_PROT_VZGGIO5_Beh_stVal;
DataAttribute iedModel_PROT_VZGGIO5_Beh_q;
DataAttribute iedModel_PROT_VZGGIO5_Beh_t;

DataObject iedModel_PROT_VZGGIO5_Health;
DataAttribute iedModel_PROT_VZGGIO5_Health_stVal;
DataAttribute iedModel_PROT_VZGGIO5_Health_q;
DataAttribute iedModel_PROT_VZGGIO5_Health_t;

DataObject iedModel_PROT_VZGGIO5_NamPlt;
DataAttribute iedModel_PROT_VZGGIO5_NamPlt_vendor;
DataAttribute iedModel_PROT_VZGGIO5_NamPlt_swRev;
DataAttribute iedModel_PROT_VZGGIO5_NamPlt_d;

DataObject iedModel_PROT_VZGGIO5_Alm;
DataAttribute iedModel_PROT_VZGGIO5_Alm_stVal;
DataAttribute iedModel_PROT_VZGGIO5_Alm_q;
DataAttribute iedModel_PROT_VZGGIO5_Alm_t;

//----------------------------------------------------------------------------
// VZGGIO6
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_VZGGIO6;
DataObject iedModel_PROT_VZGGIO6_Mod;
DataAttribute iedModel_PROT_VZGGIO6_Mod_q;
DataAttribute iedModel_PROT_VZGGIO6_Mod_t;
DataAttribute iedModel_PROT_VZGGIO6_Mod_stVal;

DataObject iedModel_PROT_VZGGIO6_Beh;
DataAttribute iedModel_PROT_VZGGIO6_Beh_stVal;
DataAttribute iedModel_PROT_VZGGIO6_Beh_q;
DataAttribute iedModel_PROT_VZGGIO6_Beh_t;

DataObject iedModel_PROT_VZGGIO6_Health;
DataAttribute iedModel_PROT_VZGGIO6_Health_stVal;
DataAttribute iedModel_PROT_VZGGIO6_Health_q;
DataAttribute iedModel_PROT_VZGGIO6_Health_t;

DataObject iedModel_PROT_VZGGIO6_NamPlt;
DataAttribute iedModel_PROT_VZGGIO6_NamPlt_vendor;
DataAttribute iedModel_PROT_VZGGIO6_NamPlt_swRev;
DataAttribute iedModel_PROT_VZGGIO6_NamPlt_d;

DataObject iedModel_PROT_VZGGIO6_Alm;
DataAttribute iedModel_PROT_VZGGIO6_Alm_stVal;
DataAttribute iedModel_PROT_VZGGIO6_Alm_q;
DataAttribute iedModel_PROT_VZGGIO6_Alm_t;

//----------------------------------------------------------------------------
// VZGGIO7
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_VZGGIO7;
DataObject iedModel_PROT_VZGGIO7_Mod;
DataAttribute iedModel_PROT_VZGGIO7_Mod_q;
DataAttribute iedModel_PROT_VZGGIO7_Mod_t;
DataAttribute iedModel_PROT_VZGGIO7_Mod_stVal;

DataObject iedModel_PROT_VZGGIO7_Beh;
DataAttribute iedModel_PROT_VZGGIO7_Beh_stVal;
DataAttribute iedModel_PROT_VZGGIO7_Beh_q;
DataAttribute iedModel_PROT_VZGGIO7_Beh_t;

DataObject iedModel_PROT_VZGGIO7_Health;
DataAttribute iedModel_PROT_VZGGIO7_Health_stVal;
DataAttribute iedModel_PROT_VZGGIO7_Health_q;
DataAttribute iedModel_PROT_VZGGIO7_Health_t;

DataObject iedModel_PROT_VZGGIO7_NamPlt;
DataAttribute iedModel_PROT_VZGGIO7_NamPlt_vendor;
DataAttribute iedModel_PROT_VZGGIO7_NamPlt_swRev;
DataAttribute iedModel_PROT_VZGGIO7_NamPlt_d;

DataObject iedModel_PROT_VZGGIO7_Alm;
DataAttribute iedModel_PROT_VZGGIO7_Alm_stVal;
DataAttribute iedModel_PROT_VZGGIO7_Alm_q;
DataAttribute iedModel_PROT_VZGGIO7_Alm_t;

//----------------------------------------------------------------------------
// VZGGIO8
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_VZGGIO8;
DataObject iedModel_PROT_VZGGIO8_Mod;
DataAttribute iedModel_PROT_VZGGIO8_Mod_q;
DataAttribute iedModel_PROT_VZGGIO8_Mod_t;
DataAttribute iedModel_PROT_VZGGIO8_Mod_stVal;

DataObject iedModel_PROT_VZGGIO8_Beh;
DataAttribute iedModel_PROT_VZGGIO8_Beh_stVal;
DataAttribute iedModel_PROT_VZGGIO8_Beh_q;
DataAttribute iedModel_PROT_VZGGIO8_Beh_t;

DataObject iedModel_PROT_VZGGIO8_Health;
DataAttribute iedModel_PROT_VZGGIO8_Health_stVal;
DataAttribute iedModel_PROT_VZGGIO8_Health_q;
DataAttribute iedModel_PROT_VZGGIO8_Health_t;

DataObject iedModel_PROT_VZGGIO8_NamPlt;
DataAttribute iedModel_PROT_VZGGIO8_NamPlt_vendor;
DataAttribute iedModel_PROT_VZGGIO8_NamPlt_swRev;
DataAttribute iedModel_PROT_VZGGIO8_NamPlt_d;

DataObject iedModel_PROT_VZGGIO8_Alm;
DataAttribute iedModel_PROT_VZGGIO8_Alm_stVal;
DataAttribute iedModel_PROT_VZGGIO8_Alm_q;
DataAttribute iedModel_PROT_VZGGIO8_Alm_t;

//----------------------------------------------------------------------------
// VZGGIO9
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_VZGGIO9;

DataObject iedModel_PROT_VZGGIO9_Mod;
DataAttribute iedModel_PROT_VZGGIO9_Mod_q;
DataAttribute iedModel_PROT_VZGGIO9_Mod_t;
DataAttribute iedModel_PROT_VZGGIO9_Mod_stVal;

DataObject iedModel_PROT_VZGGIO9_Beh;
DataAttribute iedModel_PROT_VZGGIO9_Beh_stVal;
DataAttribute iedModel_PROT_VZGGIO9_Beh_q;
DataAttribute iedModel_PROT_VZGGIO9_Beh_t;

DataObject iedModel_PROT_VZGGIO9_Health;
DataAttribute iedModel_PROT_VZGGIO9_Health_stVal;
DataAttribute iedModel_PROT_VZGGIO9_Health_q;
DataAttribute iedModel_PROT_VZGGIO9_Health_t;

DataObject iedModel_PROT_VZGGIO9_NamPlt;
DataAttribute iedModel_PROT_VZGGIO9_NamPlt_vendor;
DataAttribute iedModel_PROT_VZGGIO9_NamPlt_swRev;
DataAttribute iedModel_PROT_VZGGIO9_NamPlt_d;

DataObject iedModel_PROT_VZGGIO9_Alm;
DataAttribute iedModel_PROT_VZGGIO9_Alm_stVal;
DataAttribute iedModel_PROT_VZGGIO9_Alm_q;
DataAttribute iedModel_PROT_VZGGIO9_Alm_t;

//----------------------------------------------------------------------------
// VZGGIO10
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_VZGGIO10;

DataObject iedModel_PROT_VZGGIO10_Mod;
DataAttribute iedModel_PROT_VZGGIO10_Mod_q;
DataAttribute iedModel_PROT_VZGGIO10_Mod_t;
DataAttribute iedModel_PROT_VZGGIO10_Mod_stVal;

DataObject iedModel_PROT_VZGGIO10_Beh;
DataAttribute iedModel_PROT_VZGGIO10_Beh_stVal;
DataAttribute iedModel_PROT_VZGGIO10_Beh_q;
DataAttribute iedModel_PROT_VZGGIO10_Beh_t;

DataObject iedModel_PROT_VZGGIO10_Health;
DataAttribute iedModel_PROT_VZGGIO10_Health_stVal;
DataAttribute iedModel_PROT_VZGGIO10_Health_q;
DataAttribute iedModel_PROT_VZGGIO10_Health_t;

DataObject iedModel_PROT_VZGGIO10_NamPlt;
DataAttribute iedModel_PROT_VZGGIO10_NamPlt_vendor;
DataAttribute iedModel_PROT_VZGGIO10_NamPlt_swRev;
DataAttribute iedModel_PROT_VZGGIO10_NamPlt_d;

DataObject iedModel_PROT_VZGGIO10_Alm;
DataAttribute iedModel_PROT_VZGGIO10_Alm_stVal;
DataAttribute iedModel_PROT_VZGGIO10_Alm_q;
DataAttribute iedModel_PROT_VZGGIO10_Alm_t;

//----------------------------------------------------------------------------
// VZGGIO11
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_VZGGIO11;

DataObject iedModel_PROT_VZGGIO11_Mod;
DataAttribute iedModel_PROT_VZGGIO11_Mod_q;
DataAttribute iedModel_PROT_VZGGIO11_Mod_t;
DataAttribute iedModel_PROT_VZGGIO11_Mod_stVal;

DataObject iedModel_PROT_VZGGIO11_Beh;
DataAttribute iedModel_PROT_VZGGIO11_Beh_stVal;
DataAttribute iedModel_PROT_VZGGIO11_Beh_q;
DataAttribute iedModel_PROT_VZGGIO11_Beh_t;

DataObject iedModel_PROT_VZGGIO11_Health;
DataAttribute iedModel_PROT_VZGGIO11_Health_stVal;
DataAttribute iedModel_PROT_VZGGIO11_Health_q;
DataAttribute iedModel_PROT_VZGGIO11_Health_t;

DataObject iedModel_PROT_VZGGIO11_NamPlt;

DataAttribute iedModel_PROT_VZGGIO11_NamPlt_vendor;
DataAttribute iedModel_PROT_VZGGIO11_NamPlt_swRev;
DataAttribute iedModel_PROT_VZGGIO11_NamPlt_d;

DataObject iedModel_PROT_VZGGIO11_Alm;
DataAttribute iedModel_PROT_VZGGIO11_Alm_stVal;
DataAttribute iedModel_PROT_VZGGIO11_Alm_q;
DataAttribute iedModel_PROT_VZGGIO11_Alm_t;

//----------------------------------------------------------------------------
// VZGGIO12
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_VZGGIO12;

DataObject iedModel_PROT_VZGGIO12_Mod;
DataAttribute iedModel_PROT_VZGGIO12_Mod_q;
DataAttribute iedModel_PROT_VZGGIO12_Mod_t;
DataAttribute iedModel_PROT_VZGGIO12_Mod_stVal;

DataObject iedModel_PROT_VZGGIO12_Beh;
DataAttribute iedModel_PROT_VZGGIO12_Beh_stVal;
DataAttribute iedModel_PROT_VZGGIO12_Beh_q;
DataAttribute iedModel_PROT_VZGGIO12_Beh_t;

DataObject iedModel_PROT_VZGGIO12_Health;
DataAttribute iedModel_PROT_VZGGIO12_Health_stVal;
DataAttribute iedModel_PROT_VZGGIO12_Health_q;
DataAttribute iedModel_PROT_VZGGIO12_Health_t;

DataObject iedModel_PROT_VZGGIO12_NamPlt;
DataAttribute iedModel_PROT_VZGGIO12_NamPlt_vendor;
DataAttribute iedModel_PROT_VZGGIO12_NamPlt_swRev;
DataAttribute iedModel_PROT_VZGGIO12_NamPlt_d;

DataObject iedModel_PROT_VZGGIO12_Alm;
DataAttribute iedModel_PROT_VZGGIO12_Alm_stVal;
DataAttribute iedModel_PROT_VZGGIO12_Alm_q;
DataAttribute iedModel_PROT_VZGGIO12_Alm_t;

//----------------------------------------------------------------------------
// VZGGIO13
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_VZGGIO13;

DataObject iedModel_PROT_VZGGIO13_Mod;
DataAttribute iedModel_PROT_VZGGIO13_Mod_q;
DataAttribute iedModel_PROT_VZGGIO13_Mod_t;
DataAttribute iedModel_PROT_VZGGIO13_Mod_stVal;

DataObject iedModel_PROT_VZGGIO13_Beh;
DataAttribute iedModel_PROT_VZGGIO13_Beh_stVal;
DataAttribute iedModel_PROT_VZGGIO13_Beh_q;
DataAttribute iedModel_PROT_VZGGIO13_Beh_t;

DataObject iedModel_PROT_VZGGIO13_Health;
DataAttribute iedModel_PROT_VZGGIO13_Health_stVal;
DataAttribute iedModel_PROT_VZGGIO13_Health_q;
DataAttribute iedModel_PROT_VZGGIO13_Health_t;

DataObject iedModel_PROT_VZGGIO13_NamPlt;
DataAttribute iedModel_PROT_VZGGIO13_NamPlt_vendor;
DataAttribute iedModel_PROT_VZGGIO13_NamPlt_swRev;
DataAttribute iedModel_PROT_VZGGIO13_NamPlt_d;

DataObject iedModel_PROT_VZGGIO13_Alm;
DataAttribute iedModel_PROT_VZGGIO13_Alm_stVal;
DataAttribute iedModel_PROT_VZGGIO13_Alm_q;
DataAttribute iedModel_PROT_VZGGIO13_Alm_t;

//----------------------------------------------------------------------------
// VZGGIO14
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_VZGGIO14;

DataObject iedModel_PROT_VZGGIO14_Mod;
DataAttribute iedModel_PROT_VZGGIO14_Mod_q;
DataAttribute iedModel_PROT_VZGGIO14_Mod_t;
DataAttribute iedModel_PROT_VZGGIO14_Mod_stVal;

DataObject iedModel_PROT_VZGGIO14_Beh;
DataAttribute iedModel_PROT_VZGGIO14_Beh_stVal;
DataAttribute iedModel_PROT_VZGGIO14_Beh_q;
DataAttribute iedModel_PROT_VZGGIO14_Beh_t;

DataObject iedModel_PROT_VZGGIO14_Health;
DataAttribute iedModel_PROT_VZGGIO14_Health_stVal;
DataAttribute iedModel_PROT_VZGGIO14_Health_q;
DataAttribute iedModel_PROT_VZGGIO14_Health_t;

DataObject iedModel_PROT_VZGGIO14_NamPlt;
DataAttribute iedModel_PROT_VZGGIO14_NamPlt_vendor;
DataAttribute iedModel_PROT_VZGGIO14_NamPlt_swRev;
DataAttribute iedModel_PROT_VZGGIO14_NamPlt_d;

DataObject iedModel_PROT_VZGGIO14_Alm;
DataAttribute iedModel_PROT_VZGGIO14_Alm_stVal;
DataAttribute iedModel_PROT_VZGGIO14_Alm_q;
DataAttribute iedModel_PROT_VZGGIO14_Alm_t;

//----------------------------------------------------------------------------
// VZGGIO15
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_VZGGIO15;

DataObject iedModel_PROT_VZGGIO15_Mod;
DataAttribute iedModel_PROT_VZGGIO15_Mod_q;
DataAttribute iedModel_PROT_VZGGIO15_Mod_t;
DataAttribute iedModel_PROT_VZGGIO15_Mod_stVal;

DataObject iedModel_PROT_VZGGIO15_Beh;
DataAttribute iedModel_PROT_VZGGIO15_Beh_stVal;
DataAttribute iedModel_PROT_VZGGIO15_Beh_q;
DataAttribute iedModel_PROT_VZGGIO15_Beh_t;

DataObject iedModel_PROT_VZGGIO15_Health;
DataAttribute iedModel_PROT_VZGGIO15_Health_stVal;
DataAttribute iedModel_PROT_VZGGIO15_Health_q;
DataAttribute iedModel_PROT_VZGGIO15_Health_t;

DataObject iedModel_PROT_VZGGIO15_NamPlt;
DataAttribute iedModel_PROT_VZGGIO15_NamPlt_vendor;
DataAttribute iedModel_PROT_VZGGIO15_NamPlt_swRev;
DataAttribute iedModel_PROT_VZGGIO15_NamPlt_d;

DataObject iedModel_PROT_VZGGIO15_Alm;
DataAttribute iedModel_PROT_VZGGIO15_Alm_stVal;
DataAttribute iedModel_PROT_VZGGIO15_Alm_q;
DataAttribute iedModel_PROT_VZGGIO15_Alm_t;

//----------------------------------------------------------------------------
// VZGGIO16
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_VZGGIO16;

DataObject iedModel_PROT_VZGGIO16_Mod;
DataAttribute iedModel_PROT_VZGGIO16_Mod_q;
DataAttribute iedModel_PROT_VZGGIO16_Mod_t;
DataAttribute iedModel_PROT_VZGGIO16_Mod_stVal;

DataObject iedModel_PROT_VZGGIO16_Beh;
DataAttribute iedModel_PROT_VZGGIO16_Beh_stVal;
DataAttribute iedModel_PROT_VZGGIO16_Beh_q;
DataAttribute iedModel_PROT_VZGGIO16_Beh_t;

DataObject iedModel_PROT_VZGGIO16_Health;
DataAttribute iedModel_PROT_VZGGIO16_Health_stVal;
DataAttribute iedModel_PROT_VZGGIO16_Health_q;
DataAttribute iedModel_PROT_VZGGIO16_Health_t;

DataObject iedModel_PROT_VZGGIO16_NamPlt;
DataAttribute iedModel_PROT_VZGGIO16_NamPlt_vendor;
DataAttribute iedModel_PROT_VZGGIO16_NamPlt_swRev;
DataAttribute iedModel_PROT_VZGGIO16_NamPlt_d;

DataObject iedModel_PROT_VZGGIO16_Alm;
DataAttribute iedModel_PROT_VZGGIO16_Alm_stVal;
DataAttribute iedModel_PROT_VZGGIO16_Alm_q;
DataAttribute iedModel_PROT_VZGGIO16_Alm_t;

// ---------------------------------------------------------------------------------------------------------
//  00  00000  000    0
// 0      0    0  0   0
// 0      0    0  0   0
// 0      0    000    0
// 0      0    0 0    0
//  00    0    0  0   0000
// ---------------------------------------------------------------------------------------------------------
LogicalNode   iedModel_CTRL_LLN0;								// ���������� ���� ����. ���: LLN0
DataObject    iedModel_CTRL_LLN0_Mod;							// Mod - �����
DataAttribute iedModel_CTRL_LLN0_Mod_q;
DataAttribute iedModel_CTRL_LLN0_Mod_t;
DataAttribute iedModel_CTRL_LLN0_Mod_stVal;
DataAttribute iedModel_CTRL_LLN0_Mod_ctlModel;

DataObject    iedModel_CTRL_LLN0_Beh;							// Beh - ����� ������
DataAttribute iedModel_CTRL_LLN0_Beh_stVal;
DataAttribute iedModel_CTRL_LLN0_Beh_q;
DataAttribute iedModel_CTRL_LLN0_Beh_t;

DataObject    iedModel_CTRL_LLN0_Health;						// Health - ��������� �����������������
DataAttribute iedModel_CTRL_LLN0_Health_stVal;
DataAttribute iedModel_CTRL_LLN0_Health_q;
DataAttribute iedModel_CTRL_LLN0_Health_t;

DataObject    iedModel_CTRL_LLN0_NamPlt;						// NamPIt - ���������� ��������
DataAttribute iedModel_CTRL_LLN0_NamPlt_vendor;
DataAttribute iedModel_CTRL_LLN0_NamPlt_swRev;
DataAttribute iedModel_CTRL_LLN0_NamPlt_d;
DataAttribute iedModel_CTRL_LLN0_NamPlt_configRev;
DataAttribute iedModel_CTRL_LLN0_NamPlt_ldNs;

DataObject    iedModel_CTRL_LLN0_SGCB;							// SGCB - ���������� �������� �������
DataAttribute iedModel_CTRL_LLN0_SGCB_ActSG;
DataAttribute iedModel_CTRL_LLN0_SGCB_q;
DataAttribute iedModel_CTRL_LLN0_SGCB_t;

// ---------------------------------------------------------------------------------------------------------
LogicalNode   iedModel_CTRL_LPHD1;								// LPHD - ���������� � ���������� ����������. ������������: LPHD

DataObject    iedModel_CTRL_LPHD1_PhyNam;						// PhyNam - ���������� �������� ����������� ����������
DataAttribute iedModel_CTRL_LPHD1_PhyNam_vendor;

DataObject    iedModel_CTRL_LPHD1_PhyHealth;					// PhyHealth - ��������� ����������������� ����������� ����������
DataAttribute iedModel_CTRL_LPHD1_PhyHealth_stVal;
DataAttribute iedModel_CTRL_LPHD1_PhyHealth_q;
DataAttribute iedModel_CTRL_LPHD1_PhyHealth_t;

DataObject    iedModel_CTRL_LPHD1_Proxy;						// Proxy - ��������, ������ �� ������ LN �����������
DataAttribute iedModel_CTRL_LPHD1_Proxy_stVal;
DataAttribute iedModel_CTRL_LPHD1_Proxy_q;
DataAttribute iedModel_CTRL_LPHD1_Proxy_t;

//----------------------------------------------------------------------------
// CSWI1
//----------------------------------------------------------------------------
LogicalNode   iedModel_CTRL_CSWI1;
DataObject    iedModel_CTRL_CSWI1_Mod;
DataAttribute iedModel_CTRL_CSWI1_Mod_q;
DataAttribute iedModel_CTRL_CSWI1_Mod_t;
DataAttribute iedModel_CTRL_CSWI1_Mod_stVal;
DataAttribute iedModel_CTRL_CSWI1_Mod_ctlModel;
DataAttribute iedModel_CTRL_CSWI1_Mod_Oper;
DataAttribute iedModel_CTRL_CSWI1_Mod_Oper_ctlVal;
DataAttribute iedModel_CTRL_CSWI1_Mod_Oper_origin;
DataAttribute iedModel_CTRL_CSWI1_Mod_Oper_origin_orCat;
DataAttribute iedModel_CTRL_CSWI1_Mod_Oper_origin_orIdent;
DataAttribute iedModel_CTRL_CSWI1_Mod_Oper_ctlNum;
DataAttribute iedModel_CTRL_CSWI1_Mod_Oper_T;
DataAttribute iedModel_CTRL_CSWI1_Mod_Oper_Test;
DataAttribute iedModel_CTRL_CSWI1_Mod_Oper_Check;

// Beh
DataObject    iedModel_CTRL_CSWI1_Beh;					// ����� ������
DataAttribute iedModel_CTRL_CSWI1_Beh_stVal;
DataAttribute iedModel_CTRL_CSWI1_Beh_q;
DataAttribute iedModel_CTRL_CSWI1_Beh_t;

// Health
DataObject    iedModel_CTRL_CSWI1_Health;				// ��������� �����������������
DataAttribute iedModel_CTRL_CSWI1_Health_stVal;
DataAttribute iedModel_CTRL_CSWI1_Health_q;
DataAttribute iedModel_CTRL_CSWI1_Health_t;

// NamPlt
DataObject    iedModel_CTRL_CSWI1_NamPlt;				// ���������� ��������
DataAttribute iedModel_CTRL_CSWI1_NamPlt_vendor;		// 		��� ����������
DataAttribute iedModel_CTRL_CSWI1_NamPlt_swRev;		// 		������� ����������� �����
DataAttribute iedModel_CTRL_CSWI1_NamPlt_d;			//		��������� �������� ������ ����� ��������� � ����������� ���� LN CSWI1.

DataObject iedModel_CTRL_CSWI1_Pos;
DataAttribute iedModel_CTRL_CSWI1_Pos_stVal;
DataAttribute iedModel_CTRL_CSWI1_Pos_q;
DataAttribute iedModel_CTRL_CSWI1_Pos_t;
DataAttribute iedModel_CTRL_CSWI1_Pos_ctlModel;
DataAttribute iedModel_CTRL_CSWI1_Pos_Oper;
DataAttribute iedModel_CTRL_CSWI1_Pos_Oper_ctlVal;
DataAttribute iedModel_CTRL_CSWI1_Pos_Oper_origin;
DataAttribute iedModel_CTRL_CSWI1_Pos_Oper_origin_orCat;
DataAttribute iedModel_CTRL_CSWI1_Pos_Oper_origin_orIdent;
DataAttribute iedModel_CTRL_CSWI1_Pos_Oper_ctlNum;
DataAttribute iedModel_CTRL_CSWI1_Pos_Oper_T;
DataAttribute iedModel_CTRL_CSWI1_Pos_Oper_Test;
DataAttribute iedModel_CTRL_CSWI1_Pos_Oper_Check;

//----------------------------------------------------------------------------
// XCBR1
//----------------------------------------------------------------------------
LogicalNode iedModel_CTRL_XCBR1;
DataObject iedModel_CTRL_XCBR1_Mod;
DataAttribute iedModel_CTRL_XCBR1_Mod_q;
DataAttribute iedModel_CTRL_XCBR1_Mod_t;
DataAttribute iedModel_CTRL_XCBR1_Mod_stVal;
DataAttribute iedModel_CTRL_XCBR1_Mod_ctlModel;
DataAttribute iedModel_CTRL_XCBR1_Mod_Oper;
DataAttribute iedModel_CTRL_XCBR1_Mod_Oper_ctlVal;
DataAttribute iedModel_CTRL_XCBR1_Mod_Oper_origin;
DataAttribute iedModel_CTRL_XCBR1_Mod_Oper_origin_orCat;
DataAttribute iedModel_CTRL_XCBR1_Mod_Oper_origin_orIdent;
DataAttribute iedModel_CTRL_XCBR1_Mod_Oper_ctlNum;
DataAttribute iedModel_CTRL_XCBR1_Mod_Oper_T;
DataAttribute iedModel_CTRL_XCBR1_Mod_Oper_Test;
DataAttribute iedModel_CTRL_XCBR1_Mod_Oper_Check;

DataObject iedModel_CTRL_XCBR1_Beh;
DataAttribute iedModel_CTRL_XCBR1_Beh_stVal;
DataAttribute iedModel_CTRL_XCBR1_Beh_q;
DataAttribute iedModel_CTRL_XCBR1_Beh_t;

DataObject iedModel_CTRL_XCBR1_Health;
DataAttribute iedModel_CTRL_XCBR1_Health_stVal;
DataAttribute iedModel_CTRL_XCBR1_Health_q;
DataAttribute iedModel_CTRL_XCBR1_Health_t;

DataObject iedModel_CTRL_XCBR1_NamPlt;
DataAttribute iedModel_CTRL_XCBR1_NamPlt_vendor;
DataAttribute iedModel_CTRL_XCBR1_NamPlt_swRev;
DataAttribute iedModel_CTRL_XCBR1_NamPlt_d;

DataObject iedModel_CTRL_XCBR1_Pos;
DataAttribute iedModel_CTRL_XCBR1_Pos_stVal;
DataAttribute iedModel_CTRL_XCBR1_Pos_q;
DataAttribute iedModel_CTRL_XCBR1_Pos_t;
DataAttribute iedModel_CTRL_XCBR1_Pos_ctlModel;

DataObject iedModel_CTRL_XCBR1_Loc;
DataAttribute iedModel_CTRL_XCBR1_Loc_stVal;
DataAttribute iedModel_CTRL_XCBR1_Loc_q;
DataAttribute iedModel_CTRL_XCBR1_Loc_t;

DataObject iedModel_CTRL_XCBR1_OpCnt;
DataAttribute iedModel_CTRL_XCBR1_OpCnt_stVal;
DataAttribute iedModel_CTRL_XCBR1_OpCnt_q;
DataAttribute iedModel_CTRL_XCBR1_OpCnt_t;

DataObject iedModel_CTRL_XCBR1_CBOpCap;
DataAttribute iedModel_CTRL_XCBR1_CBOpCap_stVal;
DataAttribute iedModel_CTRL_XCBR1_CBOpCap_q;
DataAttribute iedModel_CTRL_XCBR1_CBOpCap_t;

DataObject iedModel_CTRL_XCBR1_BlkOpn;
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_stVal;
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_q;
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_t;
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_ctlModel;
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_Oper;
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_Oper_ctlVal;
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_Oper_origin;
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_Oper_origin_orCat;
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_Oper_origin_orIdent;
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_Oper_ctlNum;
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_Oper_T;
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_Oper_Test;
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_Oper_Check;

DataObject iedModel_CTRL_XCBR1_BlkCls;
DataAttribute iedModel_CTRL_XCBR1_BlkCls_stVal;
DataAttribute iedModel_CTRL_XCBR1_BlkCls_q;
DataAttribute iedModel_CTRL_XCBR1_BlkCls_t;
DataAttribute iedModel_CTRL_XCBR1_BlkCls_ctlModel;
DataAttribute iedModel_CTRL_XCBR1_BlkCls_Oper;
DataAttribute iedModel_CTRL_XCBR1_BlkCls_Oper_ctlVal;
DataAttribute iedModel_CTRL_XCBR1_BlkCls_Oper_origin;
DataAttribute iedModel_CTRL_XCBR1_BlkCls_Oper_origin_orCat;
DataAttribute iedModel_CTRL_XCBR1_BlkCls_Oper_origin_orIdent;
DataAttribute iedModel_CTRL_XCBR1_BlkCls_Oper_ctlNum;
DataAttribute iedModel_CTRL_XCBR1_BlkCls_Oper_T;
DataAttribute iedModel_CTRL_XCBR1_BlkCls_Oper_Test;
DataAttribute iedModel_CTRL_XCBR1_BlkCls_Oper_Check;

//----------------------------------------------------------------------------
// PTRC
//----------------------------------------------------------------------------
LogicalNode iedModel_CTRL_PTRC;

DataObject iedModel_CTRL_PTRC_Mod;
DataAttribute iedModel_CTRL_PTRC_Mod_q;
DataAttribute iedModel_CTRL_PTRC_Mod_t;
DataAttribute iedModel_CTRL_PTRC_Mod_stVal;
DataAttribute iedModel_CTRL_PTRC_Mod_ctlModel;

DataObject iedModel_CTRL_PTRC_Beh;
DataAttribute iedModel_CTRL_PTRC_Beh_stVal;
DataAttribute iedModel_CTRL_PTRC_Beh_q;
DataAttribute iedModel_CTRL_PTRC_Beh_t;

DataObject iedModel_CTRL_PTRC_Health;
DataAttribute iedModel_CTRL_PTRC_Health_stVal;
DataAttribute iedModel_CTRL_PTRC_Health_q;
DataAttribute iedModel_CTRL_PTRC_Health_t;

DataObject iedModel_CTRL_PTRC_NamPlt;
DataAttribute iedModel_CTRL_PTRC_NamPlt_vendor;
DataAttribute iedModel_CTRL_PTRC_NamPlt_swRev;
DataAttribute iedModel_CTRL_PTRC_NamPlt_d;

DataObject iedModel_CTRL_PTRC_Op;
DataAttribute iedModel_CTRL_PTRC_Op_general;
DataAttribute iedModel_CTRL_PTRC_Op_q;
DataAttribute iedModel_CTRL_PTRC_Op_t;

//----------------------------------------------------------------------------
// GGIO1
//----------------------------------------------------------------------------
LogicalNode iedModel_CTRL_GGIO1;
DataObject iedModel_CTRL_GGIO1_SPCSO1;
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_q;
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_t;
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_d;
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_stVal;
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_ctlModel;
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper;
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_ctlVal;
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_origin;
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_origin_orCat;
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_origin_orIdent;
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_ctlNum;
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_T;
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_Test;
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_Check;

//SPCSO2
DataObject iedModel_CTRL_GGIO1_SPCSO2;
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_q;
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_t;
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_d;
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_stVal;
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_ctlModel;
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_Oper;
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_Oper_ctlVal;
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_Oper_origin;
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_Oper_origin_orCat;
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_Oper_origin_orIdent;
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_Oper_ctlNum;
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_Oper_T;
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_Oper_Test;
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_Oper_Check;
//SPCSO3
DataObject iedModel_CTRL_GGIO1_SPCSO3;
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_q;
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_t;
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_d;
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_stVal;
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_ctlModel;
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_Oper;
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_Oper_ctlVal;
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_Oper_origin;
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_Oper_origin_orCat;
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_Oper_origin_orIdent;
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_Oper_ctlNum;
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_Oper_T;
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_Oper_Test;
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_Oper_Check;

// ---------------------------------------------------------------------------------------------------------
// 0     0  0000   000
// 00   00  0     0
// 0 0 0 0  0     0
// 0  0  0  0000   000
// 0     0  0         0
// 0     0  0         0
// 0     0  0000   000
// ---------------------------------------------------------------------------------------------------------
LogicalNode   iedModel_MES_LLN0;								// ���������� ���� ����. ���: LLN0
DataObject    iedModel_MES_LLN0_Mod;							// Mod - �����
DataAttribute iedModel_MES_LLN0_Mod_q;
DataAttribute iedModel_MES_LLN0_Mod_t;
DataAttribute iedModel_MES_LLN0_Mod_stVal;
DataAttribute iedModel_MES_LLN0_Mod_ctlModel;

DataObject    iedModel_MES_LLN0_Beh;							// Beh - ����� ������
DataAttribute iedModel_MES_LLN0_Beh_stVal;
DataAttribute iedModel_MES_LLN0_Beh_q;
DataAttribute iedModel_MES_LLN0_Beh_t;

DataObject    iedModel_MES_LLN0_Health;						// Health - ��������� �����������������
DataAttribute iedModel_MES_LLN0_Health_stVal;
DataAttribute iedModel_MES_LLN0_Health_q;
DataAttribute iedModel_MES_LLN0_Health_t;

DataObject    iedModel_MES_LLN0_NamPlt;						// NamPIt - ���������� ��������
DataAttribute iedModel_MES_LLN0_NamPlt_vendor;
DataAttribute iedModel_MES_LLN0_NamPlt_swRev;
DataAttribute iedModel_MES_LLN0_NamPlt_d;
DataAttribute iedModel_MES_LLN0_NamPlt_configRev;
DataAttribute iedModel_MES_LLN0_NamPlt_ldNs;

DataObject    iedModel_MES_LLN0_SGCB;							// SGCB - ���������� �������� �������
DataAttribute iedModel_MES_LLN0_SGCB_ActSG;
DataAttribute iedModel_MES_LLN0_SGCB_q;
DataAttribute iedModel_MES_LLN0_SGCB_t;

// ---------------------------------------------------------------------------------------------------------
LogicalNode   iedModel_MES_LPHD1;								// LPHD - ���������� � ���������� ����������. ������������: LPHD

DataObject    iedModel_MES_LPHD1_PhyNam;						// PhyNam - ���������� �������� ����������� ����������
DataAttribute iedModel_MES_LPHD1_PhyNam_vendor;

DataObject    iedModel_MES_LPHD1_PhyHealth;					// PhyHealth - ��������� ����������������� ����������� ����������
DataAttribute iedModel_MES_LPHD1_PhyHealth_stVal;
DataAttribute iedModel_MES_LPHD1_PhyHealth_q;
DataAttribute iedModel_MES_LPHD1_PhyHealth_t;

DataObject    iedModel_MES_LPHD1_Proxy;						// Proxy - ��������, ������ �� ������ LN �����������
DataAttribute iedModel_MES_LPHD1_Proxy_stVal;
DataAttribute iedModel_MES_LPHD1_Proxy_q;
DataAttribute iedModel_MES_LPHD1_Proxy_t;


// -----------------------------------------------------------------------------
// LN MMXU1
// -----------------------------------------------------------------------------
LogicalNode   iedModel_MES_MMXU1;
DataObject    iedModel_MES_MMXU1_Mod;
DataAttribute iedModel_MES_MMXU1_Mod_q;
DataAttribute iedModel_MES_MMXU1_Mod_t;
DataAttribute iedModel_MES_MMXU1_Mod_stVal;
DataAttribute iedModel_MES_MMXU1_Mod_ctlModel;
DataObject    iedModel_MES_MMXU1_Beh;
DataAttribute iedModel_MES_MMXU1_Beh_stVal;
DataAttribute iedModel_MES_MMXU1_Beh_q;
DataAttribute iedModel_MES_MMXU1_Beh_t;
DataObject    iedModel_MES_MMXU1_Health;
DataAttribute iedModel_MES_MMXU1_Health_stVal;
DataAttribute iedModel_MES_MMXU1_Health_q;
DataAttribute iedModel_MES_MMXU1_Health_t;
DataObject    iedModel_MES_MMXU1_NamPlt;
DataAttribute iedModel_MES_MMXU1_NamPlt_vendor;
DataAttribute iedModel_MES_MMXU1_NamPlt_swRev;
DataAttribute iedModel_MES_MMXU1_NamPlt_d;

DataObject iedModel_MES_MMXU1_A;
DataObject iedModel_MES_MMXU1_A_phsA;
DataAttribute iedModel_MES_MMXU1_A_phsA_cVal;
DataAttribute iedModel_MES_MMXU1_A_phsA_cVal_mag;
DataAttribute iedModel_MES_MMXU1_A_phsA_cVal_mag_f;
DataAttribute iedModel_MES_MMXU1_A_phsA_q;
DataAttribute iedModel_MES_MMXU1_A_phsA_t;
DataAttribute iedModel_MES_MMXU1_A_phsA_db;
DataAttribute iedModel_MES_MMXU1_A_phsA_zeroDb;
DataObject iedModel_MES_MMXU1_A_phsB;
DataAttribute iedModel_MES_MMXU1_A_phsB_cVal;
DataAttribute iedModel_MES_MMXU1_A_phsB_cVal_mag;
DataAttribute iedModel_MES_MMXU1_A_phsB_cVal_mag_f;
DataAttribute iedModel_MES_MMXU1_A_phsB_q;
DataAttribute iedModel_MES_MMXU1_A_phsB_t;
DataAttribute iedModel_MES_MMXU1_A_phsB_db;
DataAttribute iedModel_MES_MMXU1_A_phsB_zeroDb;
DataObject iedModel_MES_MMXU1_A_phsC;
DataAttribute iedModel_MES_MMXU1_A_phsC_cVal;
DataAttribute iedModel_MES_MMXU1_A_phsC_cVal_mag;
DataAttribute iedModel_MES_MMXU1_A_phsC_cVal_mag_f;
DataAttribute iedModel_MES_MMXU1_A_phsC_q;
DataAttribute iedModel_MES_MMXU1_A_phsC_t;
DataAttribute iedModel_MES_MMXU1_A_phsC_db;
DataAttribute iedModel_MES_MMXU1_A_phsC_zeroDb;
DataObject iedModel_MES_MMXU1_A_neut;
DataAttribute iedModel_MES_MMXU1_A_neut_cVal;
DataAttribute iedModel_MES_MMXU1_A_neut_cVal_mag;
DataAttribute iedModel_MES_MMXU1_A_neut_cVal_mag_f;
DataAttribute iedModel_MES_MMXU1_A_neut_q;
DataAttribute iedModel_MES_MMXU1_A_neut_t;
DataAttribute iedModel_MES_MMXU1_A_neut_db;
DataAttribute iedModel_MES_MMXU1_A_neut_zeroDb;

DataObject iedModel_MES_MMXU1_phV;
DataObject iedModel_MES_MMXU1_phV_phsA;
DataAttribute iedModel_MES_MMXU1_phV_phsA_cVal;
DataAttribute iedModel_MES_MMXU1_phV_phsA_cVal_mag;
DataAttribute iedModel_MES_MMXU1_phV_phsA_cVal_mag_f;
DataAttribute iedModel_MES_MMXU1_phV_phsA_q;
DataAttribute iedModel_MES_MMXU1_phV_phsA_t;
DataAttribute iedModel_MES_MMXU1_phV_phsA_db;
DataAttribute iedModel_MES_MMXU1_phV_phsA_zeroDb;

DataObject iedModel_MES_MMXU1_phV_phsB;
DataAttribute iedModel_MES_MMXU1_phV_phsB_cVal;
DataAttribute iedModel_MES_MMXU1_phV_phsB_cVal_mag;
DataAttribute iedModel_MES_MMXU1_phV_phsB_cVal_mag_f;
DataAttribute iedModel_MES_MMXU1_phV_phsB_q;
DataAttribute iedModel_MES_MMXU1_phV_phsB_t;
DataAttribute iedModel_MES_MMXU1_phV_phsB_db;
DataAttribute iedModel_MES_MMXU1_phV_phsB_zeroDb;

DataObject iedModel_MES_MMXU1_phV_phsC;
DataAttribute iedModel_MES_MMXU1_phV_phsC_cVal;
DataAttribute iedModel_MES_MMXU1_phV_phsC_cVal_mag;
DataAttribute iedModel_MES_MMXU1_phV_phsC_cVal_mag_f;
DataAttribute iedModel_MES_MMXU1_phV_phsC_q;
DataAttribute iedModel_MES_MMXU1_phV_phsC_t;
DataAttribute iedModel_MES_MMXU1_phV_phsC_db;
DataAttribute iedModel_MES_MMXU1_phV_phsC_zeroDb;

DataObject iedModel_MES_MMXU1_phV_neut;
DataAttribute iedModel_MES_MMXU1_phV_neut_cVal;
DataAttribute iedModel_MES_MMXU1_phV_neut_cVal_mag;
DataAttribute iedModel_MES_MMXU1_phV_neut_cVal_mag_f;
DataAttribute iedModel_MES_MMXU1_phV_neut_q;
DataAttribute iedModel_MES_MMXU1_phV_neut_t;
DataAttribute iedModel_MES_MMXU1_phV_neut_db;
DataAttribute iedModel_MES_MMXU1_phV_neut_zeroDb;

DataObject iedModel_MES_MMXU1_phV_neut1;
DataAttribute iedModel_MES_MMXU1_phV_neut1_cVal;
DataAttribute iedModel_MES_MMXU1_phV_neut1_cVal_mag;
DataAttribute iedModel_MES_MMXU1_phV_neut1_cVal_mag_f;
DataAttribute iedModel_MES_MMXU1_phV_neut1_q;
DataAttribute iedModel_MES_MMXU1_phV_neut1_t;
DataAttribute iedModel_MES_MMXU1_phV_neut1_db;
DataAttribute iedModel_MES_MMXU1_phV_neut1_zeroDb;

// PPV
DataObject iedModel_MES_MMXU1_PPV;
DataObject iedModel_MES_MMXU1_PPV_phsA;
DataAttribute iedModel_MES_MMXU1_PPV_phsA_cVal;
DataAttribute iedModel_MES_MMXU1_PPV_phsA_cVal_mag;
DataAttribute iedModel_MES_MMXU1_PPV_phsA_cVal_mag_f;
DataAttribute iedModel_MES_MMXU1_PPV_phsA_q;
DataAttribute iedModel_MES_MMXU1_PPV_phsA_t;
DataAttribute iedModel_MES_MMXU1_PPV_phsA_db;
DataAttribute iedModel_MES_MMXU1_PPV_phsA_zeroDb;

DataObject iedModel_MES_MMXU1_PPV_phsB;
DataAttribute iedModel_MES_MMXU1_PPV_phsB_cVal;
DataAttribute iedModel_MES_MMXU1_PPV_phsB_cVal_mag;
DataAttribute iedModel_MES_MMXU1_PPV_phsB_cVal_mag_f;
DataAttribute iedModel_MES_MMXU1_PPV_phsB_q;
DataAttribute iedModel_MES_MMXU1_PPV_phsB_t;
DataAttribute iedModel_MES_MMXU1_PPV_phsB_db;
DataAttribute iedModel_MES_MMXU1_PPV_phsB_zeroDb;

DataObject iedModel_MES_MMXU1_PPV_phsC;
DataAttribute iedModel_MES_MMXU1_PPV_phsC_cVal;
DataAttribute iedModel_MES_MMXU1_PPV_phsC_cVal_mag;
DataAttribute iedModel_MES_MMXU1_PPV_phsC_cVal_mag_f;
DataAttribute iedModel_MES_MMXU1_PPV_phsC_q;
DataAttribute iedModel_MES_MMXU1_PPV_phsC_t;
DataAttribute iedModel_MES_MMXU1_PPV_phsC_db;
DataAttribute iedModel_MES_MMXU1_PPV_phsC_zeroDb;

// totW
DataObject    iedModel_MES_MMXU1_totW;
DataAttribute iedModel_MES_MMXU1_totW_mag;
DataAttribute iedModel_MES_MMXU1_totW_mag_f;
DataAttribute iedModel_MES_MMXU1_totW_q;
DataAttribute iedModel_MES_MMXU1_totW_t;
DataAttribute iedModel_MES_MMXU1_totW_db;
DataAttribute iedModel_MES_MMXU1_totW_zeroDb;

// totVAr
DataObject    iedModel_MES_MMXU1_totVAr;
DataAttribute iedModel_MES_MMXU1_totVAr_mag;
DataAttribute iedModel_MES_MMXU1_totVAr_mag_f;
DataAttribute iedModel_MES_MMXU1_totVAr_q;
DataAttribute iedModel_MES_MMXU1_totVAr_t;
DataAttribute iedModel_MES_MMXU1_totVAr_db;
DataAttribute iedModel_MES_MMXU1_totVAr_zeroDb;

// totPF
DataObject    iedModel_MES_MMXU1_totPF;
DataAttribute iedModel_MES_MMXU1_totPF_mag;
DataAttribute iedModel_MES_MMXU1_totPF_mag_f;
DataAttribute iedModel_MES_MMXU1_totPF_q;
DataAttribute iedModel_MES_MMXU1_totPF_t;
DataAttribute iedModel_MES_MMXU1_totPF_db;
DataAttribute iedModel_MES_MMXU1_totPF_zeroDb;

// HZ
DataObject    iedModel_MES_MMXU1_Hz;
DataAttribute iedModel_MES_MMXU1_Hz_mag;
DataAttribute iedModel_MES_MMXU1_Hz_mag_f;
DataAttribute iedModel_MES_MMXU1_Hz_q;
DataAttribute iedModel_MES_MMXU1_Hz_t;
DataAttribute iedModel_MES_MMXU1_Hz_db;
DataAttribute iedModel_MES_MMXU1_Hz_zeroDb;
/*******************************************************
 * MSQI1
 *******************************************************/
LogicalNode iedModel_MES_MSQI1;

DataObject iedModel_MES_MSQI1_Mod;
DataAttribute iedModel_MES_MSQI1_Mod_q;
DataAttribute iedModel_MES_MSQI1_Mod_t;
DataAttribute iedModel_MES_MSQI1_Mod_stVal;
DataAttribute iedModel_MES_MSQI1_Mod_ctlModel;

DataObject iedModel_MES_MSQI1_Beh;
DataAttribute iedModel_MES_MSQI1_Beh_stVal;
DataAttribute iedModel_MES_MSQI1_Beh_q;
DataAttribute iedModel_MES_MSQI1_Beh_t;

DataObject iedModel_MES_MSQI1_Health;
DataAttribute iedModel_MES_MSQI1_Health_stVal;
DataAttribute iedModel_MES_MSQI1_Health_q;
DataAttribute iedModel_MES_MSQI1_Health_t;

DataObject iedModel_MES_MSQI1_NamPlt;
DataAttribute iedModel_MES_MSQI1_NamPlt_vendor;
DataAttribute iedModel_MES_MSQI1_NamPlt_swRev;
DataAttribute iedModel_MES_MSQI1_NamPlt_d;

// SeqA
DataObject iedModel_MES_MSQI1_SeqA;
DataObject iedModel_MES_MSQI1_SeqA_I0;
DataAttribute iedModel_MES_MSQI1_SeqA_I0_cVal;
DataAttribute iedModel_MES_MSQI1_SeqA_I0_cVal_mag;
DataAttribute iedModel_MES_MSQI1_SeqA_I0_cVal_mag_f;
DataAttribute iedModel_MES_MSQI1_SeqA_I0_q;
DataAttribute iedModel_MES_MSQI1_SeqA_I0_t;

DataObject iedModel_MES_MSQI1_SeqA_I2;
DataAttribute iedModel_MES_MSQI1_SeqA_I2_cVal;
DataAttribute iedModel_MES_MSQI1_SeqA_I2_cVal_mag;
DataAttribute iedModel_MES_MSQI1_SeqA_I2_cVal_mag_f;
DataAttribute iedModel_MES_MSQI1_SeqA_I2_q;
DataAttribute iedModel_MES_MSQI1_SeqA_I2_t;

DataObject iedModel_MES_MSQI1_SeqA_3I0;
DataAttribute iedModel_MES_MSQI1_SeqA_3I0_cVal;
DataAttribute iedModel_MES_MSQI1_SeqA_3I0_cVal_mag;
DataAttribute iedModel_MES_MSQI1_SeqA_3I0_cVal_mag_f;
DataAttribute iedModel_MES_MSQI1_SeqA_3I0_q;
DataAttribute iedModel_MES_MSQI1_SeqA_3I0_t;

DataAttribute iedModel_MES_MSQI1_SeqA_SeqT;

// SeqU
DataObject iedModel_MES_MSQI1_SeqU;
DataObject iedModel_MES_MSQI1_SeqU_U0;
DataAttribute iedModel_MES_MSQI1_SeqU_U0_cVal;
DataAttribute iedModel_MES_MSQI1_SeqU_U0_cVal_mag;
DataAttribute iedModel_MES_MSQI1_SeqU_U0_cVal_mag_f;
DataAttribute iedModel_MES_MSQI1_SeqU_U0_q;
DataAttribute iedModel_MES_MSQI1_SeqU_U0_t;

DataObject iedModel_MES_MSQI1_SeqU_U2;
DataAttribute iedModel_MES_MSQI1_SeqU_U2_cVal;
DataAttribute iedModel_MES_MSQI1_SeqU_U2_cVal_mag;
DataAttribute iedModel_MES_MSQI1_SeqU_U2_cVal_mag_f;
DataAttribute iedModel_MES_MSQI1_SeqU_U2_q;
DataAttribute iedModel_MES_MSQI1_SeqU_U2_t;

DataObject iedModel_MES_MSQI1_SeqU_3U0;
DataAttribute iedModel_MES_MSQI1_SeqU_3U0_cVal;
DataAttribute iedModel_MES_MSQI1_SeqU_3U0_cVal_mag;
DataAttribute iedModel_MES_MSQI1_SeqU_3U0_cVal_mag_f;
DataAttribute iedModel_MES_MSQI1_SeqU_3U0_q;
DataAttribute iedModel_MES_MSQI1_SeqU_3U0_t;

DataAttribute iedModel_MES_MSQI1_SeqU_SeqT;

/*******************************************************
 * RFLO1
 *******************************************************/
LogicalNode iedModel_MES_RFLO1;
DataObject iedModel_MES_RFLO1_Mod;
DataAttribute iedModel_MES_RFLO1_Mod_q;
DataAttribute iedModel_MES_RFLO1_Mod_t;
DataAttribute iedModel_MES_RFLO1_Mod_stVal;
DataAttribute iedModel_MES_RFLO1_Mod_ctlModel;

DataObject iedModel_MES_RFLO1_Beh;
DataAttribute iedModel_MES_RFLO1_Beh_stVal;
DataAttribute iedModel_MES_RFLO1_Beh_q;
DataAttribute iedModel_MES_RFLO1_Beh_t;

DataObject iedModel_MES_RFLO1_Health;
DataAttribute iedModel_MES_RFLO1_Health_stVal;
DataAttribute iedModel_MES_RFLO1_Health_q;
DataAttribute iedModel_MES_RFLO1_Health_t;

DataObject iedModel_MES_RFLO1_NamPlt;
DataAttribute iedModel_MES_RFLO1_NamPlt_vendor;
DataAttribute iedModel_MES_RFLO1_NamPlt_swRev;
DataAttribute iedModel_MES_RFLO1_NamPlt_d;

DataObject    iedModel_MES_RFLO1_Fltz;
DataAttribute iedModel_MES_RFLO1_Fltz_mag;
DataAttribute iedModel_MES_RFLO1_Fltz_mag_f;
DataAttribute iedModel_MES_RFLO1_Fltz_q;
DataAttribute iedModel_MES_RFLO1_Fltz_t;
DataAttribute iedModel_MES_RFLO1_Fltz_db;
DataAttribute iedModel_MES_RFLO1_Fltz_zeroDb;

DataObject    iedModel_MES_RFLO1_FltDiskm;
DataAttribute iedModel_MES_RFLO1_FltDiskm_mag;
DataAttribute iedModel_MES_RFLO1_FltDiskm_mag_f;
DataAttribute iedModel_MES_RFLO1_FltDiskm_q;
DataAttribute iedModel_MES_RFLO1_FltDiskm_t;
DataAttribute iedModel_MES_RFLO1_FltDiskm_db;
DataAttribute iedModel_MES_RFLO1_FltDiskm_zeroDb;
// ---------------------------------------------------------------------------------------------------------
//   000   000  000   00
//  0     0      0   0  0
//  0     0      0   0  0
//  0     0      0   0  0
//  0  0  0  0   0   0  0
//   000   000  000   00
// ---------------------------------------------------------------------------------------------------------
LogicalNode   iedModel_GGIO_LLN0;								// ���������� ���� ����. ���: LLN0
DataObject    iedModel_GGIO_LLN0_Mod;							// Mod - �����
DataAttribute iedModel_GGIO_LLN0_Mod_q;
DataAttribute iedModel_GGIO_LLN0_Mod_t;
DataAttribute iedModel_GGIO_LLN0_Mod_stVal;
DataAttribute iedModel_GGIO_LLN0_Mod_ctlModel;

DataObject    iedModel_GGIO_LLN0_Beh;							// Beh - ����� ������
DataAttribute iedModel_GGIO_LLN0_Beh_stVal;
DataAttribute iedModel_GGIO_LLN0_Beh_q;
DataAttribute iedModel_GGIO_LLN0_Beh_t;

DataObject    iedModel_GGIO_LLN0_Health;						// Health - ��������� �����������������
DataAttribute iedModel_GGIO_LLN0_Health_stVal;
DataAttribute iedModel_GGIO_LLN0_Health_q;
DataAttribute iedModel_GGIO_LLN0_Health_t;

DataObject    iedModel_GGIO_LLN0_NamPlt;						// NamPIt - ���������� ��������
DataAttribute iedModel_GGIO_LLN0_NamPlt_vendor;
DataAttribute iedModel_GGIO_LLN0_NamPlt_swRev;
DataAttribute iedModel_GGIO_LLN0_NamPlt_d;
DataAttribute iedModel_GGIO_LLN0_NamPlt_configRev;
DataAttribute iedModel_GGIO_LLN0_NamPlt_ldNs;

DataObject    iedModel_GGIO_LLN0_SGCB;							// SGCB - ���������� �������� �������
DataAttribute iedModel_GGIO_LLN0_SGCB_ActSG;
DataAttribute iedModel_GGIO_LLN0_SGCB_q;
DataAttribute iedModel_GGIO_LLN0_SGCB_t;

// ---------------------------------------------------------------------------------------------------------
// LPHD1
// ---------------------------------------------------------------------------------------------------------
LogicalNode   iedModel_GGIO_LPHD1;								// LPHD - ���������� � ���������� ����������. ������������: LPHD

DataObject    iedModel_GGIO_LPHD1_PhyNam;						// PhyNam - ���������� �������� ����������� ����������
DataAttribute iedModel_GGIO_LPHD1_PhyNam_vendor;

DataObject    iedModel_GGIO_LPHD1_PhyHealth;					// PhyHealth - ��������� ����������������� ����������� ����������
DataAttribute iedModel_GGIO_LPHD1_PhyHealth_stVal;
DataAttribute iedModel_GGIO_LPHD1_PhyHealth_q;
DataAttribute iedModel_GGIO_LPHD1_PhyHealth_t;

DataObject    iedModel_GGIO_LPHD1_Proxy;						// Proxy - ��������, ������ �� ������ LN �����������
DataAttribute iedModel_GGIO_LPHD1_Proxy_stVal;
DataAttribute iedModel_GGIO_LPHD1_Proxy_q;
DataAttribute iedModel_GGIO_LPHD1_Proxy_t;

// ---------------------------------------------------------------------------------------------------------
// OUT
// ---------------------------------------------------------------------------------------------------------
LogicalNode   iedModel_GGIO_OUTGGIO1;								// GGIO - ����/����� ��� ����� ���������. ���: GGIO

DataObject    iedModel_GGIO_OUTGGIO1_Mod;							// Mod - �����
DataAttribute iedModel_GGIO_OUTGGIO1_Mod_q;
DataAttribute iedModel_GGIO_OUTGGIO1_Mod_t;
DataAttribute iedModel_GGIO_OUTGGIO1_Mod_stVal;
DataAttribute iedModel_GGIO_OUTGGIO1_Mod_ctlModel;

DataObject    iedModel_GGIO_OUTGGIO1_Beh;							// Beh - ����� ������
DataAttribute iedModel_GGIO_OUTGGIO1_Beh_stVal;
DataAttribute iedModel_GGIO_OUTGGIO1_Beh_q;
DataAttribute iedModel_GGIO_OUTGGIO1_Beh_t;

DataObject    iedModel_GGIO_OUTGGIO1_Health;						// Health - ��������� �����������������
DataAttribute iedModel_GGIO_OUTGGIO1_Health_stVal;
DataAttribute iedModel_GGIO_OUTGGIO1_Health_q;
DataAttribute iedModel_GGIO_OUTGGIO1_Health_t;

DataObject    iedModel_GGIO_OUTGGIO1_NamPlt;						// NamPIt - ���������� ��������
DataAttribute iedModel_GGIO_OUTGGIO1_NamPlt_vendor;
DataAttribute iedModel_GGIO_OUTGGIO1_NamPlt_swRev;
DataAttribute iedModel_GGIO_OUTGGIO1_NamPlt_d;

//SPCSO1
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO1;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO1_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO1_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO1_stVal;
//SPCSO2
DataObject 	  iedModel_GGIO_OUTGGIO1_SPCSO2;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO2_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO2_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO2_stVal;
//SPCSO3
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO3;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO3_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO3_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO3_stVal;
//SPCSO4
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO4;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO4_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO4_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO4_stVal;
//SPCSO5
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO5;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO5_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO5_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO5_stVal;
//SPCSO6
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO6;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO6_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO6_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO6_stVal;
//SPCSO7
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO7;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO7_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO7_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO7_stVal;
//SPCSO8
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO8;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO8_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO8_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO8_stVal;
//SPCSO9
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO9;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO9_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO9_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO9_stVal;
//SPCSO10
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO10;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO10_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO10_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO10_stVal;
//SPCSO11
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO11;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO11_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO11_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO11_stVal;
//SPCSO12
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO12;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO12_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO12_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO12_stVal;
//SPCSO13
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO13;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO13_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO13_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO13_stVal;
//SPCSO14
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO14;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO14_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO14_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO14_stVal;
//SPCSO15
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO15;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO15_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO15_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO15_stVal;
//SPCSO16
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO16;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO16_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO16_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO16_stVal;
//SPCSO17
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO17;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO17_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO17_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO17_stVal;
//SPCSO18
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO18;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO18_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO18_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO18_stVal;
//SPCSO19
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO19;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO19_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO19_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO19_stVal;
//SPCSO20
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO20;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO20_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO20_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO20_stVal;
//SPCSO21
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO21;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO21_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO21_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO21_stVal;
//SPCSO22
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO22;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO22_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO22_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO22_stVal;
//SPCSO23
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO23;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO23_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO23_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO23_stVal;
//SPCSO24
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO24;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO24_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO24_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO24_stVal;
//SPCSO25
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO25;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO25_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO25_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO25_stVal;
//SPCSO26
DataObject 	  iedModel_GGIO_OUTGGIO1_SPCSO26;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO26_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO26_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO26_stVal;
//SPCSO27
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO27;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO27_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO27_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO27_stVal;
//SPCSO28
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO28;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO28_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO28_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO28_stVal;
//SPCSO29
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO29;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO29_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO29_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO29_stVal;
//SPCSO30
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO30;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO30_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO30_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO30_stVal;
//SPCSO31
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO31;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO31_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO31_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO31_stVal;
//SPCSO32
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO32;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO32_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO32_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO32_stVal;
//SPCSO33
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO33;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO33_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO33_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO33_stVal;
//SPCSO34
DataObject    iedModel_GGIO_OUTGGIO1_SPCSO34;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO34_q;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO34_t;
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO34_stVal;

// ---------------------------------------------------------------------------------------------------------
// LED
// ---------------------------------------------------------------------------------------------------------
LogicalNode   iedModel_GGIO_LEDGGIO1;								// GGIO - ����/����� ��� ����� ���������. ���: GGIO

DataObject    iedModel_GGIO_LEDGGIO1_Mod;							// Mod - �����
DataAttribute iedModel_GGIO_LEDGGIO1_Mod_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Mod_t;
DataAttribute iedModel_GGIO_LEDGGIO1_Mod_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Mod_ctlModel;

DataObject    iedModel_GGIO_LEDGGIO1_Beh;							// Beh - ����� ������
DataAttribute iedModel_GGIO_LEDGGIO1_Beh_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Beh_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Beh_t;

DataObject    iedModel_GGIO_LEDGGIO1_Health;						// Health - ��������� �����������������
DataAttribute iedModel_GGIO_LEDGGIO1_Health_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Health_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Health_t;

DataObject    iedModel_GGIO_LEDGGIO1_NamPlt;						// NamPIt - ���������� ��������
DataAttribute iedModel_GGIO_LEDGGIO1_NamPlt_vendor;
DataAttribute iedModel_GGIO_LEDGGIO1_NamPlt_swRev;
DataAttribute iedModel_GGIO_LEDGGIO1_NamPlt_d;

DataObject    iedModel_GGIO_LEDGGIO1_Ind1;							//Ind ���������
DataAttribute iedModel_GGIO_LEDGGIO1_Ind1_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind1_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind1_t;

DataObject    iedModel_GGIO_LEDGGIO1_Ind2;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind2_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind2_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind2_t;

DataObject    iedModel_GGIO_LEDGGIO1_Ind3;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind3_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind3_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind3_t;

DataObject    iedModel_GGIO_LEDGGIO1_Ind4;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind4_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind4_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind4_t;

DataObject    iedModel_GGIO_LEDGGIO1_Ind5;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind5_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind5_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind5_t;

DataObject    iedModel_GGIO_LEDGGIO1_Ind6;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind6_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind6_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind6_t;

DataObject    iedModel_GGIO_LEDGGIO1_Ind7;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind7_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind7_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind7_t;

DataObject    iedModel_GGIO_LEDGGIO1_Ind8;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind8_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind8_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind8_t;

DataObject    iedModel_GGIO_LEDGGIO1_Ind9;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind9_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind9_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind9_t;

DataObject    iedModel_GGIO_LEDGGIO1_Ind10;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind10_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind10_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind10_t;

DataObject    iedModel_GGIO_LEDGGIO1_Ind11;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind11_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind11_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind11_t;

DataObject    iedModel_GGIO_LEDGGIO1_Ind12;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind12_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind12_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind12_t;

DataObject    iedModel_GGIO_LEDGGIO1_Ind13;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind13_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind13_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind13_t;

DataObject    iedModel_GGIO_LEDGGIO1_Ind14;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind14_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind14_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind14_t;

DataObject    iedModel_GGIO_LEDGGIO1_Ind15;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind15_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind15_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind15_t;

DataObject    iedModel_GGIO_LEDGGIO1_Ind16;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind16_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind16_q;
DataAttribute iedModel_GGIO_LEDGGIO1_Ind16_t;

//SPCSO1
DataObject iedModel_GGIO_LEDGGIO1_SPCSO1;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_q;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_t;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_d;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_ctlModel;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_Oper;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_ctlVal;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_origin;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_origin_orCat;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_origin_orIdent;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_ctlNum;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_T;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_Test;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_Check;
//SPCSO2
DataObject iedModel_GGIO_LEDGGIO1_SPCSO2;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO2_q;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO2_t;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO2_d;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO2_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO2_ctlModel;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO2_Oper;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO2_Oper_ctlVal;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO2_Oper_origin;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO2_Oper_origin_orCat;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO2_Oper_origin_orIdent;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO2_Oper_ctlNum;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO2_Oper_T;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO2_Oper_Test;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO2_Oper_Check;
//SPCSO3
DataObject iedModel_GGIO_LEDGGIO1_SPCSO3;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO3_q;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO3_t;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO3_d;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO3_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO3_ctlModel;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO3_Oper;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO3_Oper_ctlVal;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO3_Oper_origin;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO3_Oper_origin_orCat;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO3_Oper_origin_orIdent;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO3_Oper_ctlNum;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO3_Oper_T;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO3_Oper_Test;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO3_Oper_Check;
//SPCSO4
DataObject iedModel_GGIO_LEDGGIO1_SPCSO4;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO4_q;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO4_t;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO4_d;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO4_stVal;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO4_ctlModel;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO4_Oper;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO4_Oper_ctlVal;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO4_Oper_origin;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO4_Oper_origin_orCat;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO4_Oper_origin_orIdent;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO4_Oper_ctlNum;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO4_Oper_T;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO4_Oper_Test;
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO4_Oper_Check;

// ------------------------------------------------------------
// IN
// ------------------------------------------------------------

LogicalNode iedModel_GGIO_INGGIO1;

DataObject iedModel_GGIO_INGGIO1_Mod;
DataAttribute iedModel_GGIO_INGGIO1_Mod_q;
DataAttribute iedModel_GGIO_INGGIO1_Mod_t;
DataAttribute iedModel_GGIO_INGGIO1_Mod_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Mod_ctlModel;
DataAttribute iedModel_GGIO_INGGIO1_Mod_Oper;
DataAttribute iedModel_GGIO_INGGIO1_Mod_Oper_ctlVal;
DataAttribute iedModel_GGIO_INGGIO1_Mod_Oper_origin;
DataAttribute iedModel_GGIO_INGGIO1_Mod_Oper_origin_orCat;
DataAttribute iedModel_GGIO_INGGIO1_Mod_Oper_origin_orIdent;
DataAttribute iedModel_GGIO_INGGIO1_Mod_Oper_ctlNum;
DataAttribute iedModel_GGIO_INGGIO1_Mod_Oper_T;
DataAttribute iedModel_GGIO_INGGIO1_Mod_Oper_Test;
DataAttribute iedModel_GGIO_INGGIO1_Mod_Oper_Check;
//Beh
DataObject iedModel_GGIO_INGGIO1_Beh;
DataAttribute iedModel_GGIO_INGGIO1_Beh_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Beh_q;
DataAttribute iedModel_GGIO_INGGIO1_Beh_t;
//Health
DataObject iedModel_GGIO_INGGIO1_Health;
DataAttribute iedModel_GGIO_INGGIO1_Health_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Health_q;
DataAttribute iedModel_GGIO_INGGIO1_Health_t;
//NamPlt
DataObject iedModel_GGIO_INGGIO1_NamPlt;
DataAttribute iedModel_GGIO_INGGIO1_NamPlt_vendor;
DataAttribute iedModel_GGIO_INGGIO1_NamPlt_swRev;
DataAttribute iedModel_GGIO_INGGIO1_NamPlt_d;
DataObject    iedModel_GGIO_INGGIO1_Ind1;							//Ind ���������
DataAttribute iedModel_GGIO_INGGIO1_Ind1_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind1_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind1_t;

DataObject    iedModel_GGIO_INGGIO1_Ind2;
DataAttribute iedModel_GGIO_INGGIO1_Ind2_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind2_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind2_t;

DataObject    iedModel_GGIO_INGGIO1_Ind3;
DataAttribute iedModel_GGIO_INGGIO1_Ind3_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind3_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind3_t;

DataObject    iedModel_GGIO_INGGIO1_Ind4;
DataAttribute iedModel_GGIO_INGGIO1_Ind4_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind4_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind4_t;

DataObject    iedModel_GGIO_INGGIO1_Ind5;
DataAttribute iedModel_GGIO_INGGIO1_Ind5_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind5_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind5_t;

DataObject    iedModel_GGIO_INGGIO1_Ind6;
DataAttribute iedModel_GGIO_INGGIO1_Ind6_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind6_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind6_t;

DataObject    iedModel_GGIO_INGGIO1_Ind7;
DataAttribute iedModel_GGIO_INGGIO1_Ind7_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind7_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind7_t;

DataObject    iedModel_GGIO_INGGIO1_Ind8;
DataAttribute iedModel_GGIO_INGGIO1_Ind8_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind8_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind8_t;

DataObject    iedModel_GGIO_INGGIO1_Ind9;
DataAttribute iedModel_GGIO_INGGIO1_Ind9_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind9_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind9_t;

DataObject    iedModel_GGIO_INGGIO1_Ind10;
DataAttribute iedModel_GGIO_INGGIO1_Ind10_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind10_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind10_t;

DataObject    iedModel_GGIO_INGGIO1_Ind11;
DataAttribute iedModel_GGIO_INGGIO1_Ind11_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind11_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind11_t;

DataObject    iedModel_GGIO_INGGIO1_Ind12;
DataAttribute iedModel_GGIO_INGGIO1_Ind12_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind12_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind12_t;

DataObject    iedModel_GGIO_INGGIO1_Ind13;
DataAttribute iedModel_GGIO_INGGIO1_Ind13_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind13_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind13_t;

DataObject    iedModel_GGIO_INGGIO1_Ind14;
DataAttribute iedModel_GGIO_INGGIO1_Ind14_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind14_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind14_t;

DataObject    iedModel_GGIO_INGGIO1_Ind15;
DataAttribute iedModel_GGIO_INGGIO1_Ind15_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind15_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind15_t;

DataObject    iedModel_GGIO_INGGIO1_Ind16;
DataAttribute iedModel_GGIO_INGGIO1_Ind16_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind16_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind16_t;

DataObject    iedModel_GGIO_INGGIO1_Ind17;
DataAttribute iedModel_GGIO_INGGIO1_Ind17_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind17_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind17_t;

DataObject    iedModel_GGIO_INGGIO1_Ind18;
DataAttribute iedModel_GGIO_INGGIO1_Ind18_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind18_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind18_t;

DataObject    iedModel_GGIO_INGGIO1_Ind19;
DataAttribute iedModel_GGIO_INGGIO1_Ind19_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind19_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind19_t;

DataObject    iedModel_GGIO_INGGIO1_Ind20;
DataAttribute iedModel_GGIO_INGGIO1_Ind20_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind20_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind20_t;

DataObject    iedModel_GGIO_INGGIO1_Ind21;
DataAttribute iedModel_GGIO_INGGIO1_Ind21_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind21_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind21_t;

DataObject    iedModel_GGIO_INGGIO1_Ind22;
DataAttribute iedModel_GGIO_INGGIO1_Ind22_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind22_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind22_t;

DataObject    iedModel_GGIO_INGGIO1_Ind23;
DataAttribute iedModel_GGIO_INGGIO1_Ind23_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind23_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind23_t;

DataObject    iedModel_GGIO_INGGIO1_Ind24;
DataAttribute iedModel_GGIO_INGGIO1_Ind24_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind24_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind24_t;

DataObject    iedModel_GGIO_INGGIO1_Ind25;
DataAttribute iedModel_GGIO_INGGIO1_Ind25_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind25_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind25_t;

DataObject    iedModel_GGIO_INGGIO1_Ind26;
DataAttribute iedModel_GGIO_INGGIO1_Ind26_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind26_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind26_t;

DataObject    iedModel_GGIO_INGGIO1_Ind27;
DataAttribute iedModel_GGIO_INGGIO1_Ind27_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind27_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind27_t;

DataObject    iedModel_GGIO_INGGIO1_Ind28;
DataAttribute iedModel_GGIO_INGGIO1_Ind28_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind28_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind28_t;

DataObject    iedModel_GGIO_INGGIO1_Ind29;
DataAttribute iedModel_GGIO_INGGIO1_Ind29_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind29_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind29_t;

DataObject    iedModel_GGIO_INGGIO1_Ind30;
DataAttribute iedModel_GGIO_INGGIO1_Ind30_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind30_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind30_t;

DataObject    iedModel_GGIO_INGGIO1_Ind31;
DataAttribute iedModel_GGIO_INGGIO1_Ind31_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind31_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind31_t;

DataObject    iedModel_GGIO_INGGIO1_Ind32;
DataAttribute iedModel_GGIO_INGGIO1_Ind32_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind32_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind32_t;

DataObject    iedModel_GGIO_INGGIO1_Ind33;
DataAttribute iedModel_GGIO_INGGIO1_Ind33_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind33_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind33_t;

DataObject    iedModel_GGIO_INGGIO1_Ind34;
DataAttribute iedModel_GGIO_INGGIO1_Ind34_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind34_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind34_t;

DataObject    iedModel_GGIO_INGGIO1_Ind35;
DataAttribute iedModel_GGIO_INGGIO1_Ind35_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind35_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind35_t;

DataObject    iedModel_GGIO_INGGIO1_Ind36;
DataAttribute iedModel_GGIO_INGGIO1_Ind36_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind36_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind36_t;

DataObject    iedModel_GGIO_INGGIO1_Ind37;
DataAttribute iedModel_GGIO_INGGIO1_Ind37_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind37_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind37_t;

DataObject    iedModel_GGIO_INGGIO1_Ind38;
DataAttribute iedModel_GGIO_INGGIO1_Ind38_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind38_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind38_t;

DataObject    iedModel_GGIO_INGGIO1_Ind39;
DataAttribute iedModel_GGIO_INGGIO1_Ind39_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind39_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind39_t;

DataObject    iedModel_GGIO_INGGIO1_Ind40;
DataAttribute iedModel_GGIO_INGGIO1_Ind40_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind40_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind40_t;

DataObject    iedModel_GGIO_INGGIO1_Ind41;
DataAttribute iedModel_GGIO_INGGIO1_Ind41_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind41_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind41_t;

DataObject    iedModel_GGIO_INGGIO1_Ind42;
DataAttribute iedModel_GGIO_INGGIO1_Ind42_stVal;
DataAttribute iedModel_GGIO_INGGIO1_Ind42_q;
DataAttribute iedModel_GGIO_INGGIO1_Ind42_t;

//----------------------------------------------------------------------------
// SSL
//----------------------------------------------------------------------------

LogicalNode iedModel_GGIO_SSLGGIO1;

DataObject iedModel_GGIO_SSLGGIO1_Mod;
DataAttribute iedModel_GGIO_SSLGGIO1_Mod_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Mod_t;
DataAttribute iedModel_GGIO_SSLGGIO1_Mod_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Mod_ctlModel;

DataObject iedModel_GGIO_SSLGGIO1_Beh;
DataAttribute iedModel_GGIO_SSLGGIO1_Beh_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Beh_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Beh_t;

DataObject iedModel_GGIO_SSLGGIO1_Health;
DataAttribute iedModel_GGIO_SSLGGIO1_Health_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Health_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Health_t;

DataObject iedModel_GGIO_SSLGGIO1_NamPlt;

DataAttribute iedModel_GGIO_SSLGGIO1_NamPlt_vendor;
DataAttribute iedModel_GGIO_SSLGGIO1_NamPlt_swRev;
DataAttribute iedModel_GGIO_SSLGGIO1_NamPlt_d;

DataObject iedModel_GGIO_SSLGGIO1_Ind1;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind1_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind1_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind1_t;


DataObject iedModel_GGIO_SSLGGIO1_Ind2;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind2_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind2_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind2_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind3;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind3_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind3_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind3_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind4;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind4_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind4_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind4_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind5;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind5_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind5_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind5_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind6;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind6_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind6_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind6_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind7;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind7_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind7_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind7_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind8;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind8_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind8_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind8_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind9;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind9_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind9_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind9_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind10;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind10_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind10_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind10_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind11;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind11_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind11_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind11_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind12;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind12_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind12_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind12_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind13;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind13_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind13_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind13_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind14;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind14_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind14_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind14_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind15;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind15_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind15_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind15_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind16;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind16_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind16_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind16_t;


DataObject iedModel_GGIO_SSLGGIO1_Ind17;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind17_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind17_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind17_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind18;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind18_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind18_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind18_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind19;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind19_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind19_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind19_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind20;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind20_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind20_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind20_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind21;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind21_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind21_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind21_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind22;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind22_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind22_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind22_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind23;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind23_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind23_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind23_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind24;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind24_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind24_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind24_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind25;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind25_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind25_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind25_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind26;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind26_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind26_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind26_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind27;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind27_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind27_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind27_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind28;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind28_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind28_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind28_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind29;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind29_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind29_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind29_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind30;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind30_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind30_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind30_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind31;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind31_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind31_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind31_t;

DataObject iedModel_GGIO_SSLGGIO1_Ind32;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind32_stVal;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind32_q;
DataAttribute iedModel_GGIO_SSLGGIO1_Ind32_t;

//----------------------------------------------------------------------------
// VLS
//----------------------------------------------------------------------------
LogicalNode iedModel_GGIO_VLSGGIO1;

DataObject iedModel_GGIO_VLSGGIO1_Mod;
DataAttribute iedModel_GGIO_VLSGGIO1_Mod_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Mod_t;
DataAttribute iedModel_GGIO_VLSGGIO1_Mod_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Mod_ctlModel;

DataObject iedModel_GGIO_VLSGGIO1_Beh;
DataAttribute iedModel_GGIO_VLSGGIO1_Beh_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Beh_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Beh_t;

DataObject iedModel_GGIO_VLSGGIO1_Health;
DataAttribute iedModel_GGIO_VLSGGIO1_Health_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Health_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Health_t;

DataObject iedModel_GGIO_VLSGGIO1_NamPlt;

DataAttribute iedModel_GGIO_VLSGGIO1_NamPlt_vendor;
DataAttribute iedModel_GGIO_VLSGGIO1_NamPlt_swRev;
DataAttribute iedModel_GGIO_VLSGGIO1_NamPlt_d;

DataObject iedModel_GGIO_VLSGGIO1_Ind1;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind1_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind1_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind1_t;


DataObject iedModel_GGIO_VLSGGIO1_Ind2;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind2_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind2_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind2_t;

DataObject iedModel_GGIO_VLSGGIO1_Ind3;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind3_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind3_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind3_t;

DataObject iedModel_GGIO_VLSGGIO1_Ind4;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind4_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind4_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind4_t;

DataObject iedModel_GGIO_VLSGGIO1_Ind5;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind5_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind5_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind5_t;

DataObject iedModel_GGIO_VLSGGIO1_Ind6;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind6_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind6_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind6_t;

DataObject iedModel_GGIO_VLSGGIO1_Ind7;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind7_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind7_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind7_t;

DataObject iedModel_GGIO_VLSGGIO1_Ind8;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind8_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind8_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind8_t;

DataObject iedModel_GGIO_VLSGGIO1_Ind9;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind9_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind9_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind9_t;

DataObject iedModel_GGIO_VLSGGIO1_Ind10;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind10_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind10_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind10_t;

DataObject iedModel_GGIO_VLSGGIO1_Ind11;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind11_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind11_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind11_t;

DataObject iedModel_GGIO_VLSGGIO1_Ind12;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind12_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind12_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind12_t;

DataObject iedModel_GGIO_VLSGGIO1_Ind13;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind13_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind13_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind13_t;

DataObject iedModel_GGIO_VLSGGIO1_Ind14;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind14_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind14_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind14_t;

DataObject iedModel_GGIO_VLSGGIO1_Ind15;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind15_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind15_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind15_t;

DataObject iedModel_GGIO_VLSGGIO1_Ind16;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind16_stVal;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind16_q;
DataAttribute iedModel_GGIO_VLSGGIO1_Ind16_t;

//----------------------------------------------------------------------------
// LS
//----------------------------------------------------------------------------

LogicalNode iedModel_GGIO_LSGGIO1;

DataObject iedModel_GGIO_LSGGIO1_Mod;
DataAttribute iedModel_GGIO_LSGGIO1_Mod_q;
DataAttribute iedModel_GGIO_LSGGIO1_Mod_t;
DataAttribute iedModel_GGIO_LSGGIO1_Mod_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Mod_ctlModel;

DataObject iedModel_GGIO_LSGGIO1_Beh;
DataAttribute iedModel_GGIO_LSGGIO1_Beh_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Beh_q;
DataAttribute iedModel_GGIO_LSGGIO1_Beh_t;

DataObject iedModel_GGIO_LSGGIO1_Health;
DataAttribute iedModel_GGIO_LSGGIO1_Health_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Health_q;
DataAttribute iedModel_GGIO_LSGGIO1_Health_t;

DataObject iedModel_GGIO_LSGGIO1_NamPlt;

DataAttribute iedModel_GGIO_LSGGIO1_NamPlt_vendor;
DataAttribute iedModel_GGIO_LSGGIO1_NamPlt_swRev;
DataAttribute iedModel_GGIO_LSGGIO1_NamPlt_d;

DataObject iedModel_GGIO_LSGGIO1_Ind1;
DataAttribute iedModel_GGIO_LSGGIO1_Ind1_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Ind1_q;
DataAttribute iedModel_GGIO_LSGGIO1_Ind1_t;


DataObject iedModel_GGIO_LSGGIO1_Ind2;
DataAttribute iedModel_GGIO_LSGGIO1_Ind2_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Ind2_q;
DataAttribute iedModel_GGIO_LSGGIO1_Ind2_t;

DataObject iedModel_GGIO_LSGGIO1_Ind3;
DataAttribute iedModel_GGIO_LSGGIO1_Ind3_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Ind3_q;
DataAttribute iedModel_GGIO_LSGGIO1_Ind3_t;

DataObject iedModel_GGIO_LSGGIO1_Ind4;
DataAttribute iedModel_GGIO_LSGGIO1_Ind4_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Ind4_q;
DataAttribute iedModel_GGIO_LSGGIO1_Ind4_t;

DataObject iedModel_GGIO_LSGGIO1_Ind5;
DataAttribute iedModel_GGIO_LSGGIO1_Ind5_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Ind5_q;
DataAttribute iedModel_GGIO_LSGGIO1_Ind5_t;

DataObject iedModel_GGIO_LSGGIO1_Ind6;
DataAttribute iedModel_GGIO_LSGGIO1_Ind6_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Ind6_q;
DataAttribute iedModel_GGIO_LSGGIO1_Ind6_t;

DataObject iedModel_GGIO_LSGGIO1_Ind7;
DataAttribute iedModel_GGIO_LSGGIO1_Ind7_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Ind7_q;
DataAttribute iedModel_GGIO_LSGGIO1_Ind7_t;

DataObject iedModel_GGIO_LSGGIO1_Ind8;
DataAttribute iedModel_GGIO_LSGGIO1_Ind8_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Ind8_q;
DataAttribute iedModel_GGIO_LSGGIO1_Ind8_t;

DataObject iedModel_GGIO_LSGGIO1_Ind9;
DataAttribute iedModel_GGIO_LSGGIO1_Ind9_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Ind9_q;
DataAttribute iedModel_GGIO_LSGGIO1_Ind9_t;

DataObject iedModel_GGIO_LSGGIO1_Ind10;
DataAttribute iedModel_GGIO_LSGGIO1_Ind10_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Ind10_q;
DataAttribute iedModel_GGIO_LSGGIO1_Ind10_t;

DataObject iedModel_GGIO_LSGGIO1_Ind11;
DataAttribute iedModel_GGIO_LSGGIO1_Ind11_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Ind11_q;
DataAttribute iedModel_GGIO_LSGGIO1_Ind11_t;

DataObject iedModel_GGIO_LSGGIO1_Ind12;
DataAttribute iedModel_GGIO_LSGGIO1_Ind12_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Ind12_q;
DataAttribute iedModel_GGIO_LSGGIO1_Ind12_t;

DataObject iedModel_GGIO_LSGGIO1_Ind13;
DataAttribute iedModel_GGIO_LSGGIO1_Ind13_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Ind13_q;
DataAttribute iedModel_GGIO_LSGGIO1_Ind13_t;

DataObject iedModel_GGIO_LSGGIO1_Ind14;
DataAttribute iedModel_GGIO_LSGGIO1_Ind14_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Ind14_q;
DataAttribute iedModel_GGIO_LSGGIO1_Ind14_t;

DataObject iedModel_GGIO_LSGGIO1_Ind15;
DataAttribute iedModel_GGIO_LSGGIO1_Ind15_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Ind15_q;
DataAttribute iedModel_GGIO_LSGGIO1_Ind15_t;

DataObject iedModel_GGIO_LSGGIO1_Ind16;
DataAttribute iedModel_GGIO_LSGGIO1_Ind16_stVal;
DataAttribute iedModel_GGIO_LSGGIO1_Ind16_q;
DataAttribute iedModel_GGIO_LSGGIO1_Ind16_t;


IedModel iedModel = {
    "MR771",
    &iedModel_Generic_LD0,
    &iedModelds_LD0_LLN0_dataset0,				// DataSet
    &iedModel_LD0_LLN0_report0,					// ReportControlBlock
    NULL,//&iedModel_PROT_LLN0_gse0,			// GSEControlBlock
    NULL,										// SVControlBlock
    &iedModel_LD0_LLN0_sgcb0,					// SettingGroupControlBlock
    NULL,										// lcbs
    NULL,										// log
    initializeValues
};

/*************************************************************************
 * ���������� ���������� LD
 *************************************************************************/

LogicalDevice iedModel_Generic_LD0 		= { LogicalDeviceModelType, "LD0",	(ModelNode*)&iedModel,	(ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_LD0_LLN0	};
LogicalDevice iedModel_Generic_PROT 	= { LogicalDeviceModelType, "PROT",	(ModelNode*)&iedModel,  (ModelNode*)&iedModel_Generic_CTRL, (ModelNode*)&iedModel_PROT_LLN0	};
LogicalDevice iedModel_Generic_CTRL 	= {	LogicalDeviceModelType, "CTRL",	(ModelNode*)&iedModel, 	(ModelNode*)&iedModel_Generic_MES, 	(ModelNode*)&iedModel_CTRL_LLN0	};
LogicalDevice iedModel_Generic_MES 		= { LogicalDeviceModelType, "MES",	(ModelNode*)&iedModel,	(ModelNode*)&iedModel_Generic_GGIO,	(ModelNode*)&iedModel_MES_LLN0	};
LogicalDevice iedModel_Generic_GGIO 	= { LogicalDeviceModelType, "GGIO",	(ModelNode*)&iedModel,	NULL,								(ModelNode*)&iedModel_GGIO_LLN0	};

/*************************************************************************
 * ���������� ���� LN
 * ���������� ���� ���� LLN0
 *************************************************************************/

LogicalNode iedModel_LD0_LLN0 					= {    LogicalNodeModelType,    "LLN0",	    (ModelNode*)&iedModel_Generic_LD0,	    (ModelNode*) &iedModel_LD0_LPHD1,    (ModelNode*) &iedModel_LD0_LLN0_Mod};

DataObject iedModel_LD0_LLN0_Mod 				= {    DataObjectModelType,    "Mod",	    (ModelNode*) &iedModel_LD0_LLN0,	    (ModelNode*) &iedModel_LD0_LLN0_Beh,    (ModelNode*) &iedModel_LD0_LLN0_Mod_q,    0};
DataAttribute iedModel_LD0_LLN0_Mod_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_LD0_LLN0_Mod,    (ModelNode*) &iedModel_LD0_LLN0_Mod_t,    NULL,    0,    IEC61850_FC_CF,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_LD0_LLN0_Mod_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_LD0_LLN0_Mod,    (ModelNode*) &iedModel_LD0_LLN0_Mod_stVal,   NULL,    0,    IEC61850_FC_CF,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_LD0_LLN0_Mod_stVal 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_LD0_LLN0_Mod,    (ModelNode*) &iedModel_LD0_LLN0_Mod_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_LD0_LLN0_Mod_ctlModel 	= {    DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_LD0_LLN0_Mod,    NULL,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_LD0_LLN0_Beh 				= {    DataObjectModelType,    "Beh",	    (ModelNode*) &iedModel_LD0_LLN0,    (ModelNode*) &iedModel_LD0_LLN0_Health,    (ModelNode*) &iedModel_LD0_LLN0_Beh_stVal,    0};
DataAttribute iedModel_LD0_LLN0_Beh_stVal 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_LD0_LLN0_Beh,    (ModelNode*) &iedModel_LD0_LLN0_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_LD0_LLN0_Beh_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_LD0_LLN0_Beh,    (ModelNode*) &iedModel_LD0_LLN0_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_LD0_LLN0_Beh_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_LD0_LLN0_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_LD0_LLN0_Health 			= {    DataObjectModelType,    "Health",			    (ModelNode*) &iedModel_LD0_LLN0,    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,    (ModelNode*) &iedModel_LD0_LLN0_Health_stVal,    0};
DataAttribute iedModel_LD0_LLN0_Health_stVal 	= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_LD0_LLN0_Health,    (ModelNode*) &iedModel_LD0_LLN0_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_LD0_LLN0_Health_q 		= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_LD0_LLN0_Health,    (ModelNode*) &iedModel_LD0_LLN0_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_LD0_LLN0_Health_t 		= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_LD0_LLN0_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_LD0_LLN0_NamPlt 			= {    DataObjectModelType,    "NamPlt",								    (ModelNode*) &iedModel_LD0_LLN0,    NULL,    (ModelNode*) &iedModel_LD0_LLN0_NamPlt_vendor,    0};
DataAttribute iedModel_LD0_LLN0_NamPlt_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,    (ModelNode*) &iedModel_LD0_LLN0_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_LD0_LLN0_NamPlt_swRev 	= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,    (ModelNode*) &iedModel_LD0_LLN0_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_LD0_LLN0_NamPlt_d 		= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,    (ModelNode*) &iedModel_LD0_LLN0_NamPlt_configRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_LD0_LLN0_NamPlt_configRev = {    DataAttributeModelType,    "configRev",    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,    (ModelNode*) &iedModel_LD0_LLN0_NamPlt_ldNs,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_LD0_LLN0_NamPlt_ldNs 	= {    DataAttributeModelType,    "ldNs",    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_EX,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};


//----------------------------------------------------------------------------
// LD0_LPHD1
//----------------------------------------------------------------------------
LogicalNode iedModel_LD0_LPHD1 					= {    LogicalNodeModelType,    "LPHD1",    (ModelNode*)&iedModel_Generic_PROT,  NULL,    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam};

DataObject iedModel_LD0_LPHD1_PhyNam 			= {    DataObjectModelType,    "PhyNam",	    (ModelNode*) &iedModel_LD0_LPHD1,    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth,    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam_vendor,    0};
DataAttribute iedModel_LD0_LPHD1_PhyNam_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_LD0_LPHD1_PhyHealth 		= {    DataObjectModelType,    "PhyHealth",	    (ModelNode*) &iedModel_LD0_LPHD1,    (ModelNode*) &iedModel_LD0_LPHD1_Proxy,    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth_stVal,    0};
DataAttribute iedModel_LD0_LPHD1_PhyHealth_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth,    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_LD0_LPHD1_PhyHealth_q 	= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth,    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_LD0_LPHD1_PhyHealth_t 	= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_LD0_LPHD1_Proxy 			= {    DataObjectModelType,    "Proxy",    (ModelNode*) &iedModel_LD0_LPHD1,    NULL,    (ModelNode*) &iedModel_LD0_LPHD1_Proxy_stVal,    0};
DataAttribute iedModel_LD0_LPHD1_Proxy_stVal 	= { 	DataAttributeModelType, "stVal", (ModelNode*) &iedModel_LD0_LPHD1_Proxy, (ModelNode*) &iedModel_LD0_LPHD1_Proxy_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_NO, NULL };
DataAttribute iedModel_LD0_LPHD1_Proxy_q		= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_LD0_LPHD1_Proxy,    (ModelNode*) &iedModel_LD0_LPHD1_Proxy_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_LD0_LPHD1_Proxy_t 		= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_LD0_LPHD1_Proxy,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};


/*************************************************************************
 * ���������� ���� LN
 * ���������� ���� ���� LLN0
 *************************************************************************/
LogicalNode iedModel_PROT_LLN0 					= {    LogicalNodeModelType,    "LLN0",	    (ModelNode*)&iedModel_Generic_PROT,	    (ModelNode*) &iedModel_PROT_LPHD1,    (ModelNode*) &iedModel_PROT_LLN0_Mod};

DataObject iedModel_PROT_LLN0_Mod 				= {    DataObjectModelType,    "Mod",	    (ModelNode*) &iedModel_PROT_LLN0,	    (ModelNode*) &iedModel_PROT_LLN0_Beh,    (ModelNode*) &iedModel_PROT_LLN0_Mod_q,    0};
DataAttribute iedModel_PROT_LLN0_Mod_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_LLN0_Mod,    (ModelNode*) &iedModel_PROT_LLN0_Mod_t,    NULL,    0,    IEC61850_FC_CF,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_PROT_LLN0_Mod_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_LLN0_Mod,    (ModelNode*) &iedModel_PROT_LLN0_Mod_stVal,   NULL,    0,    IEC61850_FC_CF,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_PROT_LLN0_Mod_stVal 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_LLN0_Mod,    (ModelNode*) &iedModel_PROT_LLN0_Mod_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_PROT_LLN0_Mod_ctlModel 	= {    DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_PROT_LLN0_Mod,    NULL,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_PROT_LLN0_Beh 				= {    DataObjectModelType,    "Beh",	    (ModelNode*) &iedModel_PROT_LLN0,    (ModelNode*) &iedModel_PROT_LLN0_Health,    (ModelNode*) &iedModel_PROT_LLN0_Beh_stVal,    0};
DataAttribute iedModel_PROT_LLN0_Beh_stVal 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_LLN0_Beh,    (ModelNode*) &iedModel_PROT_LLN0_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_PROT_LLN0_Beh_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_LLN0_Beh,    (ModelNode*) &iedModel_PROT_LLN0_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_PROT_LLN0_Beh_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_LLN0_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_PROT_LLN0_Health = {    DataObjectModelType,    "Health",			    (ModelNode*) &iedModel_PROT_LLN0,    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,    (ModelNode*) &iedModel_PROT_LLN0_Health_stVal,    0};
DataAttribute iedModel_PROT_LLN0_Health_stVal 	= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_LLN0_Health,    (ModelNode*) &iedModel_PROT_LLN0_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_PROT_LLN0_Health_q 		= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_LLN0_Health,    (ModelNode*) &iedModel_PROT_LLN0_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_PROT_LLN0_Health_t		= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_LLN0_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_PROT_LLN0_NamPlt 			= {    DataObjectModelType,    "NamPlt",								    (ModelNode*) &iedModel_PROT_LLN0,    NULL,    (ModelNode*) &iedModel_PROT_LLN0_NamPlt_vendor,    0};
DataAttribute iedModel_PROT_LLN0_NamPlt_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,    (ModelNode*) &iedModel_PROT_LLN0_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_PROT_LLN0_NamPlt_swRev 	= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,    (ModelNode*) &iedModel_PROT_LLN0_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_PROT_LLN0_NamPlt_d 		= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,    (ModelNode*) &iedModel_PROT_LLN0_NamPlt_configRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_PROT_LLN0_NamPlt_configRev = {    DataAttributeModelType,    "configRev",    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,    (ModelNode*) &iedModel_PROT_LLN0_NamPlt_ldNs,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_PROT_LLN0_NamPlt_ldNs 	= {    DataAttributeModelType,    "ldNs",    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_EX,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};

//----------------------------------------------------------------------------
// PROT_LPHD1
//----------------------------------------------------------------------------
LogicalNode iedModel_PROT_LPHD1 = 					{    LogicalNodeModelType,    "LPHD1",    (ModelNode*)&iedModel_Generic_PROT,    (ModelNode*) &iedModel_PROT_IPTOC1,    (ModelNode*) &iedModel_PROT_LPHD1_PhyNam};

DataObject iedModel_PROT_LPHD1_PhyNam = 			{    DataObjectModelType,    "PhyNam",	    (ModelNode*) &iedModel_PROT_LPHD1,    (ModelNode*) &iedModel_PROT_LPHD1_PhyHealth,    (ModelNode*) &iedModel_PROT_LPHD1_PhyNam_vendor,    0};
DataAttribute iedModel_PROT_LPHD1_PhyNam_vendor = 	{    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_LPHD1_PhyNam,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_PROT_LPHD1_PhyHealth = 			{    DataObjectModelType,    "PhyHealth",	    (ModelNode*) &iedModel_PROT_LPHD1,    (ModelNode*) &iedModel_PROT_LPHD1_Proxy,    (ModelNode*) &iedModel_PROT_LPHD1_PhyHealth_stVal,    0};
DataAttribute iedModel_PROT_LPHD1_PhyHealth_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_LPHD1_PhyHealth,    (ModelNode*) &iedModel_PROT_LPHD1_PhyHealth_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_PROT_LPHD1_PhyHealth_q = 	{    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_LPHD1_PhyHealth,    (ModelNode*) &iedModel_PROT_LPHD1_PhyHealth_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_PROT_LPHD1_PhyHealth_t = 	{    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_LPHD1_PhyHealth,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_PROT_LPHD1_Proxy = 				{    DataObjectModelType,    "Proxy",    (ModelNode*) &iedModel_PROT_LPHD1,    NULL,    (ModelNode*) &iedModel_PROT_LPHD1_Proxy_stVal,    0};
DataAttribute iedModel_PROT_LPHD1_Proxy_stVal = 	{ 	DataAttributeModelType, "stVal", (ModelNode*) &iedModel_PROT_LPHD1_Proxy, (ModelNode*) &iedModel_PROT_LPHD1_Proxy_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_NO, NULL };
DataAttribute iedModel_PROT_LPHD1_Proxy_q = 		{    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_LPHD1_Proxy,    (ModelNode*) &iedModel_PROT_LPHD1_Proxy_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_PROT_LPHD1_Proxy_t = 		{    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_LPHD1_Proxy,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};


/************************************************************************
 * CTRL_LLN0
 *************************************************************************/
LogicalNode iedModel_CTRL_LLN0 = {    LogicalNodeModelType,    "LLN0",	    (ModelNode*)&iedModel_Generic_CTRL,	   (ModelNode*) &iedModel_CTRL_LPHD1,    (ModelNode*) &iedModel_CTRL_LLN0_Mod,};

DataObject iedModel_CTRL_LLN0_Mod = {    DataObjectModelType,    "Mod",	    (ModelNode*) &iedModel_CTRL_LLN0,	    (ModelNode*) &iedModel_CTRL_LLN0_Beh,    (ModelNode*) &iedModel_CTRL_LLN0_Mod_q,    0};
DataAttribute iedModel_CTRL_LLN0_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_CTRL_LLN0_Mod,    (ModelNode*) &iedModel_CTRL_LLN0_Mod_t,    NULL,    0,    IEC61850_FC_CF,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_CTRL_LLN0_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_CTRL_LLN0_Mod,    (ModelNode*) &iedModel_CTRL_LLN0_Mod_stVal,   NULL,    0,    IEC61850_FC_CF,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_CTRL_LLN0_Mod_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_CTRL_LLN0_Mod,    (ModelNode*) &iedModel_CTRL_LLN0_Mod_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_CTRL_LLN0_Mod_ctlModel = {    DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_CTRL_LLN0_Mod,    NULL,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_CTRL_LLN0_Beh = {    DataObjectModelType,    "Beh",	    (ModelNode*) &iedModel_CTRL_LLN0,    (ModelNode*) &iedModel_CTRL_LLN0_Health,    (ModelNode*) &iedModel_CTRL_LLN0_Beh_stVal,    0};
DataAttribute iedModel_CTRL_LLN0_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_CTRL_LLN0_Beh,    (ModelNode*) &iedModel_CTRL_LLN0_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_CTRL_LLN0_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_CTRL_LLN0_Beh,    (ModelNode*) &iedModel_CTRL_LLN0_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_CTRL_LLN0_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_CTRL_LLN0_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_CTRL_LLN0_Health = {    DataObjectModelType,    "Health",			    (ModelNode*) &iedModel_CTRL_LLN0,    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt,    (ModelNode*) &iedModel_CTRL_LLN0_Health_stVal,    0};
DataAttribute iedModel_CTRL_LLN0_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_CTRL_LLN0_Health,    (ModelNode*) &iedModel_CTRL_LLN0_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_CTRL_LLN0_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_CTRL_LLN0_Health,    (ModelNode*) &iedModel_CTRL_LLN0_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_CTRL_LLN0_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_CTRL_LLN0_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_CTRL_LLN0_NamPlt = {    DataObjectModelType,    "NamPlt",								    (ModelNode*) &iedModel_CTRL_LLN0,    NULL,    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt_vendor,    0};
DataAttribute iedModel_CTRL_LLN0_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt,    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_CTRL_LLN0_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt,    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_CTRL_LLN0_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt,    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt_configRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_CTRL_LLN0_NamPlt_configRev = {    DataAttributeModelType,    "configRev",    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt,    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt_ldNs,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_CTRL_LLN0_NamPlt_ldNs = {    DataAttributeModelType,    "ldNs",    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_EX,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};

//----------------------------------------------------------------------------
// CTRL_LPHD1
//----------------------------------------------------------------------------
LogicalNode iedModel_CTRL_LPHD1 = 					{    LogicalNodeModelType,    "LPHD1",    (ModelNode*)&iedModel_Generic_CTRL,    (ModelNode*) &iedModel_CTRL_CSWI1,    (ModelNode*) &iedModel_CTRL_LPHD1_PhyNam,};

DataObject iedModel_CTRL_LPHD1_PhyNam = 			{    DataObjectModelType,    "PhyNam",	    (ModelNode*) &iedModel_CTRL_LPHD1,    (ModelNode*) &iedModel_CTRL_LPHD1_PhyHealth,    (ModelNode*) &iedModel_CTRL_LPHD1_PhyNam_vendor,    0};
DataAttribute iedModel_CTRL_LPHD1_PhyNam_vendor = 	{    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_CTRL_LPHD1_PhyNam,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_CTRL_LPHD1_PhyHealth = 			{    DataObjectModelType,    "PhyHealth",	    (ModelNode*) &iedModel_CTRL_LPHD1,    (ModelNode*) &iedModel_CTRL_LPHD1_Proxy,    (ModelNode*) &iedModel_CTRL_LPHD1_PhyHealth_stVal,    0};
DataAttribute iedModel_CTRL_LPHD1_PhyHealth_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_CTRL_LPHD1_PhyHealth,    (ModelNode*) &iedModel_CTRL_LPHD1_PhyHealth_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_CTRL_LPHD1_PhyHealth_q = 	{    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_CTRL_LPHD1_PhyHealth,    (ModelNode*) &iedModel_CTRL_LPHD1_PhyHealth_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_CTRL_LPHD1_PhyHealth_t = 	{    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_CTRL_LPHD1_PhyHealth,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_CTRL_LPHD1_Proxy = 				{    DataObjectModelType,    "Proxy",    (ModelNode*) &iedModel_CTRL_LPHD1,    NULL,    (ModelNode*) &iedModel_CTRL_LPHD1_Proxy_stVal,    0};
DataAttribute iedModel_CTRL_LPHD1_Proxy_stVal = 	{ 	DataAttributeModelType, "stVal", (ModelNode*) &iedModel_CTRL_LPHD1_Proxy, (ModelNode*) &iedModel_CTRL_LPHD1_Proxy_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_NO, NULL };
DataAttribute iedModel_CTRL_LPHD1_Proxy_q = 		{    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_CTRL_LPHD1_Proxy,    (ModelNode*) &iedModel_CTRL_LPHD1_Proxy_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_CTRL_LPHD1_Proxy_t = 		{    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_CTRL_LPHD1_Proxy,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};

/************************************************************************
 * MES_LLN0
 *************************************************************************/
LogicalNode iedModel_MES_LLN0 = {    LogicalNodeModelType,    "LLN0",	    (ModelNode*)&iedModel_Generic_MES,	   (ModelNode*) &iedModel_MES_LPHD1,    (ModelNode*) &iedModel_MES_LLN0_Mod,};

DataObject iedModel_MES_LLN0_Mod = {    DataObjectModelType,    "Mod",	    (ModelNode*) &iedModel_MES_LLN0,	    (ModelNode*) &iedModel_MES_LLN0_Beh,    (ModelNode*) &iedModel_MES_LLN0_Mod_q,    0};
DataAttribute iedModel_MES_LLN0_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_MES_LLN0_Mod,    (ModelNode*) &iedModel_MES_LLN0_Mod_t,    NULL,    0,    IEC61850_FC_CF,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_MES_LLN0_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_MES_LLN0_Mod,    (ModelNode*) &iedModel_MES_LLN0_Mod_stVal,   NULL,    0,    IEC61850_FC_CF,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_MES_LLN0_Mod_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_MES_LLN0_Mod,    (ModelNode*) &iedModel_MES_LLN0_Mod_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_MES_LLN0_Mod_ctlModel = {    DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_MES_LLN0_Mod,    NULL,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_MES_LLN0_Beh = {    DataObjectModelType,    "Beh",	    (ModelNode*) &iedModel_MES_LLN0,    (ModelNode*) &iedModel_MES_LLN0_Health,    (ModelNode*) &iedModel_MES_LLN0_Beh_stVal,    0};
DataAttribute iedModel_MES_LLN0_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_MES_LLN0_Beh,    (ModelNode*) &iedModel_MES_LLN0_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_MES_LLN0_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_MES_LLN0_Beh,    (ModelNode*) &iedModel_MES_LLN0_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_MES_LLN0_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_MES_LLN0_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_MES_LLN0_Health = {    DataObjectModelType,    "Health",			    (ModelNode*) &iedModel_MES_LLN0,    (ModelNode*) &iedModel_MES_LLN0_NamPlt,    (ModelNode*) &iedModel_MES_LLN0_Health_stVal,    0};
DataAttribute iedModel_MES_LLN0_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_MES_LLN0_Health,    (ModelNode*) &iedModel_MES_LLN0_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_MES_LLN0_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_MES_LLN0_Health,    (ModelNode*) &iedModel_MES_LLN0_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_MES_LLN0_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_MES_LLN0_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_MES_LLN0_NamPlt = {    DataObjectModelType,    "NamPlt",								    (ModelNode*) &iedModel_MES_LLN0,    NULL,    (ModelNode*) &iedModel_MES_LLN0_NamPlt_vendor,    0};
DataAttribute iedModel_MES_LLN0_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_MES_LLN0_NamPlt,    (ModelNode*) &iedModel_MES_LLN0_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_MES_LLN0_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_MES_LLN0_NamPlt,    (ModelNode*) &iedModel_MES_LLN0_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_MES_LLN0_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_MES_LLN0_NamPlt,    (ModelNode*) &iedModel_MES_LLN0_NamPlt_configRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_MES_LLN0_NamPlt_configRev = {    DataAttributeModelType,    "configRev",    (ModelNode*) &iedModel_MES_LLN0_NamPlt,    (ModelNode*) &iedModel_MES_LLN0_NamPlt_ldNs,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_MES_LLN0_NamPlt_ldNs = {    DataAttributeModelType,    "ldNs",    (ModelNode*) &iedModel_MES_LLN0_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_EX,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};

//----------------------------------------------------------------------------
// MES_LPHD1
//----------------------------------------------------------------------------
LogicalNode iedModel_MES_LPHD1 = 					{    LogicalNodeModelType,    "LPHD1",    (ModelNode*)&iedModel_Generic_MES,    (ModelNode*) &iedModel_MES_MMXU1,    (ModelNode*) &iedModel_MES_LPHD1_PhyNam,};

DataObject iedModel_MES_LPHD1_PhyNam = 				{    DataObjectModelType,    "PhyNam",	    (ModelNode*) &iedModel_MES_LPHD1,    (ModelNode*) &iedModel_MES_LPHD1_PhyHealth,    (ModelNode*) &iedModel_MES_LPHD1_PhyNam_vendor,    0};
DataAttribute iedModel_MES_LPHD1_PhyNam_vendor = 	{    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_MES_LPHD1_PhyNam,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_MES_LPHD1_PhyHealth = 			{    DataObjectModelType,    "PhyHealth",	    (ModelNode*) &iedModel_MES_LPHD1,    (ModelNode*) &iedModel_MES_LPHD1_Proxy,    (ModelNode*) &iedModel_MES_LPHD1_PhyHealth_stVal,    0};
DataAttribute iedModel_MES_LPHD1_PhyHealth_stVal = 	{    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_MES_LPHD1_PhyHealth,    (ModelNode*) &iedModel_MES_LPHD1_PhyHealth_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_MES_LPHD1_PhyHealth_q = 	{    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_MES_LPHD1_PhyHealth,    (ModelNode*) &iedModel_MES_LPHD1_PhyHealth_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_MES_LPHD1_PhyHealth_t = 	{    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_MES_LPHD1_PhyHealth,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_MES_LPHD1_Proxy = 				{    DataObjectModelType,    "Proxy",    (ModelNode*) &iedModel_MES_LPHD1,    NULL,    (ModelNode*) &iedModel_MES_LPHD1_Proxy_stVal,    0};
DataAttribute iedModel_MES_LPHD1_Proxy_stVal = 	{ 	DataAttributeModelType, "stVal", (ModelNode*) &iedModel_MES_LPHD1_Proxy, (ModelNode*) &iedModel_MES_LPHD1_Proxy_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_NO, NULL };
DataAttribute iedModel_MES_LPHD1_Proxy_q = 		{    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_MES_LPHD1_Proxy,    (ModelNode*) &iedModel_MES_LPHD1_Proxy_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_MES_LPHD1_Proxy_t = 		{    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_MES_LPHD1_Proxy,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};

/************************************************************************
 * GGIO_LLN0
 *************************************************************************/
LogicalNode iedModel_GGIO_LLN0 = {    LogicalNodeModelType,    "LLN0",	    (ModelNode*)&iedModel_Generic_GGIO,	 (ModelNode*) &iedModel_GGIO_LPHD1,    (ModelNode*) &iedModel_GGIO_LLN0_Mod,};

DataObject iedModel_GGIO_LLN0_Mod = {    DataObjectModelType,    "Mod",	    (ModelNode*) &iedModel_GGIO_LLN0,	    (ModelNode*) &iedModel_GGIO_LLN0_Beh,    (ModelNode*) &iedModel_GGIO_LLN0_Mod_q,    0};
DataAttribute iedModel_GGIO_LLN0_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_LLN0_Mod,    (ModelNode*) &iedModel_GGIO_LLN0_Mod_t,    NULL,    0,    IEC61850_FC_CF,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_GGIO_LLN0_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_LLN0_Mod,    (ModelNode*) &iedModel_GGIO_LLN0_Mod_stVal,   NULL,    0,    IEC61850_FC_CF,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_GGIO_LLN0_Mod_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_LLN0_Mod,    (ModelNode*) &iedModel_GGIO_LLN0_Mod_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_GGIO_LLN0_Mod_ctlModel = {    DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_GGIO_LLN0_Mod,    NULL,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_GGIO_LLN0_Beh = {    DataObjectModelType,    "Beh",	    (ModelNode*) &iedModel_GGIO_LLN0,    (ModelNode*) &iedModel_GGIO_LLN0_Health,    (ModelNode*) &iedModel_GGIO_LLN0_Beh_stVal,    0};
DataAttribute iedModel_GGIO_LLN0_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_LLN0_Beh,    (ModelNode*) &iedModel_GGIO_LLN0_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_GGIO_LLN0_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_LLN0_Beh,    (ModelNode*) &iedModel_GGIO_LLN0_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_GGIO_LLN0_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_LLN0_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_GGIO_LLN0_Health = {    DataObjectModelType,    "Health",			    (ModelNode*) &iedModel_GGIO_LLN0,    (ModelNode*) &iedModel_GGIO_LLN0_NamPlt,    (ModelNode*) &iedModel_GGIO_LLN0_Health_stVal,    0};
DataAttribute iedModel_GGIO_LLN0_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_LLN0_Health,    (ModelNode*) &iedModel_GGIO_LLN0_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_GGIO_LLN0_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_LLN0_Health,    (ModelNode*) &iedModel_GGIO_LLN0_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_GGIO_LLN0_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_LLN0_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_GGIO_LLN0_NamPlt = {    DataObjectModelType,    "NamPlt",								    (ModelNode*) &iedModel_GGIO_LLN0,    NULL,    (ModelNode*) &iedModel_GGIO_LLN0_NamPlt_vendor,    0};
DataAttribute iedModel_GGIO_LLN0_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_GGIO_LLN0_NamPlt,    (ModelNode*) &iedModel_GGIO_LLN0_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_GGIO_LLN0_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_GGIO_LLN0_NamPlt,    (ModelNode*) &iedModel_GGIO_LLN0_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_GGIO_LLN0_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_GGIO_LLN0_NamPlt,    (ModelNode*) &iedModel_GGIO_LLN0_NamPlt_configRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_GGIO_LLN0_NamPlt_configRev = {    DataAttributeModelType,    "configRev",    (ModelNode*) &iedModel_GGIO_LLN0_NamPlt,    (ModelNode*) &iedModel_GGIO_LLN0_NamPlt_ldNs,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_GGIO_LLN0_NamPlt_ldNs = {    DataAttributeModelType,    "ldNs",    (ModelNode*) &iedModel_GGIO_LLN0_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_EX,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};

//----------------------------------------------------------------------------
// GGIO_LPHD1
//----------------------------------------------------------------------------
LogicalNode iedModel_GGIO_LPHD1 = 					{    LogicalNodeModelType,    "LPHD1",    (ModelNode*)&iedModel_Generic_GGIO,    (ModelNode*) &iedModel_GGIO_INGGIO1,    (ModelNode*) &iedModel_GGIO_LPHD1_PhyNam,};

DataObject iedModel_GGIO_LPHD1_PhyNam = 			{    DataObjectModelType,    "PhyNam",	    (ModelNode*) &iedModel_GGIO_LPHD1,    (ModelNode*) &iedModel_GGIO_LPHD1_PhyHealth,    (ModelNode*) &iedModel_GGIO_LPHD1_PhyNam_vendor,    0};
DataAttribute iedModel_GGIO_LPHD1_PhyNam_vendor = 	{    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_GGIO_LPHD1_PhyNam,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_GGIO_LPHD1_PhyHealth = 			{    DataObjectModelType,    "PhyHealth",	    (ModelNode*) &iedModel_GGIO_LPHD1,    (ModelNode*) &iedModel_GGIO_LPHD1_Proxy,    (ModelNode*) &iedModel_GGIO_LPHD1_PhyHealth_stVal,    0};
DataAttribute iedModel_GGIO_LPHD1_PhyHealth_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_LPHD1_PhyHealth,    (ModelNode*) &iedModel_GGIO_LPHD1_PhyHealth_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_GGIO_LPHD1_PhyHealth_q = 	{    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_LPHD1_PhyHealth,    (ModelNode*) &iedModel_GGIO_LPHD1_PhyHealth_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_GGIO_LPHD1_PhyHealth_t = 	{    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_LPHD1_PhyHealth,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};

DataObject iedModel_GGIO_LPHD1_Proxy = 				{    DataObjectModelType,    "Proxy",    (ModelNode*) &iedModel_GGIO_LPHD1,    NULL,    (ModelNode*) &iedModel_GGIO_LPHD1_Proxy_stVal,    0};
DataAttribute iedModel_GGIO_LPHD1_Proxy_stVal = 	{ 	DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_LPHD1_Proxy, (ModelNode*) &iedModel_GGIO_LPHD1_Proxy_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_NO, NULL };
DataAttribute iedModel_GGIO_LPHD1_Proxy_q = 		{    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_LPHD1_Proxy,    (ModelNode*) &iedModel_GGIO_LPHD1_Proxy_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY,    TRG_OPT_NO,    NULL,    0};
DataAttribute iedModel_GGIO_LPHD1_Proxy_t = 		{    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_LPHD1_Proxy,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP,    TRG_OPT_NO,    NULL,    0};


/*************************************************************************
 * ���������� ���� LN
 *
 * 5.7.2 LN: ����/����� ��� ����� ���������. ���: GGIO
 *
 * �������� ������� ����������� ���� (LN) ��������� � ��� 61850-5.
 * ������ ���������� ���� ������������ ��� ������������� ����� ��������
 * ���������� ������������ ���������, ������� �� ���������� � ������� S, �, X, Y ��� Z.
 * ��� ������, ������������� � ������� 6 ���������� ���������,
 * ����� ���� ������������ ��� ��������������� ���������� ����������� ���� GGIO.
 *
 *************************************************************************/
LogicalNode iedModel_GGIO_INGGIO1 			= { LogicalNodeModelType,   "IN42GGIO1",    (ModelNode*)&iedModel_Generic_GGIO,    (ModelNode*) &iedModel_GGIO_OUTGGIO1,    (ModelNode*) &iedModel_GGIO_INGGIO1_Mod};

DataObject iedModel_GGIO_INGGIO1_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_GGIO_INGGIO1,    (ModelNode*) &iedModel_GGIO_INGGIO1_Beh,    (ModelNode*) &iedModel_GGIO_INGGIO1_Mod_q,0};
DataAttribute iedModel_GGIO_INGGIO1_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_INGGIO1_Mod,(ModelNode*) &iedModel_GGIO_INGGIO1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_INGGIO1_Mod,(ModelNode*) &iedModel_GGIO_INGGIO1_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_GGIO_INGGIO1_Mod,(ModelNode*) &iedModel_GGIO_INGGIO1_Mod_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Mod_ctlModel = {   DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_GGIO_INGGIO1_Mod,    NULL,    NULL,    0,   IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_INGGIO1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_GGIO_INGGIO1,    (ModelNode*) &iedModel_GGIO_INGGIO1_Health,    (ModelNode*) &iedModel_GGIO_INGGIO1_Beh_stVal,0};
DataAttribute iedModel_GGIO_INGGIO1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_INGGIO1_Beh,    (ModelNode*) &iedModel_GGIO_INGGIO1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_INGGIO1_Beh,    (ModelNode*) &iedModel_GGIO_INGGIO1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_INGGIO1_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_INGGIO1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_GGIO_INGGIO1,    (ModelNode*) &iedModel_GGIO_INGGIO1_NamPlt,    (ModelNode*) &iedModel_GGIO_INGGIO1_Health_stVal,0};
DataAttribute iedModel_GGIO_INGGIO1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_INGGIO1_Health,    (ModelNode*) &iedModel_GGIO_INGGIO1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_INGGIO1_Health,    (ModelNode*) &iedModel_GGIO_INGGIO1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_INGGIO1_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_INGGIO1_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_GGIO_INGGIO1,    (ModelNode*)&iedModel_GGIO_INGGIO1_Ind1 /* &iedModel_GGIO_INGGIO1_SPCSO1*/,															// ��������� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    (ModelNode*) &iedModel_GGIO_INGGIO1_NamPlt_vendor,0};

DataAttribute iedModel_GGIO_INGGIO1_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_GGIO_INGGIO1_NamPlt,    (ModelNode*) &iedModel_GGIO_INGGIO1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_GGIO_INGGIO1_NamPlt,    (ModelNode*) &iedModel_GGIO_INGGIO1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_GGIO_INGGIO1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

/***************************************************************************************************************************************************************
 * ����� �������� ��������(��������) ����� ���������
 ****************************************************************************************************************************************************************/
DataObject iedModel_GGIO_INGGIO1_Ind1 = {DataObjectModelType,"Ind1",(ModelNode*) &iedModel_GGIO_INGGIO1,(ModelNode*) &iedModel_GGIO_INGGIO1_Ind2,(ModelNode*) &iedModel_GGIO_INGGIO1_Ind1_stVal,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind1_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_INGGIO1_Ind1,(ModelNode*) &iedModel_GGIO_INGGIO1_Ind1_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind1_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_INGGIO1_Ind1,(ModelNode*) &iedModel_GGIO_INGGIO1_Ind1_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind1_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_INGGIO1_Ind1,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};

DataObject iedModel_GGIO_INGGIO1_Ind2 = {DataObjectModelType,"Ind2",(ModelNode*) &iedModel_GGIO_INGGIO1,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind3,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind2_stVal,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind2_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind2,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind2_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind2_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind2,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind2_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind2_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind2,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind3 = {    DataObjectModelType,    "Ind3",    (ModelNode*) &iedModel_GGIO_INGGIO1,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind4,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind3_stVal,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind3_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind3,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind3_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind3_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind3,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind3_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind3_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind3,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind4 = {    DataObjectModelType,    "Ind4",    (ModelNode*) &iedModel_GGIO_INGGIO1,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind5,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind4_stVal,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind4_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind4,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind4_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind4_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind4,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind4_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind4_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind4,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind5 = {    DataObjectModelType,    "Ind5",    (ModelNode*) &iedModel_GGIO_INGGIO1,    (ModelNode*)&iedModel_GGIO_INGGIO1_Ind6,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind5_stVal,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind5_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind5,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind5_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind5_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind5,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind5_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind5_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind5,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind6 = {    DataObjectModelType,    "Ind6",    (ModelNode*) &iedModel_GGIO_INGGIO1,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind7,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind6_stVal,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind6_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind6,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind6_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind6_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind6,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind6_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind6_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind6,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind7 = {    DataObjectModelType,    "Ind7",    (ModelNode*) &iedModel_GGIO_INGGIO1,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind8,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind7_stVal,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind7_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind7,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind7_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind7_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind7,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind7_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind7_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind7,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind8 = {    DataObjectModelType,    "Ind8",    (ModelNode*) &iedModel_GGIO_INGGIO1,    (ModelNode*)&iedModel_GGIO_INGGIO1_Ind9,   (ModelNode*) &iedModel_GGIO_INGGIO1_Ind8_stVal,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind8_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind8,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind8_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind8_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind8,    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind8_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind8_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_INGGIO1_Ind8,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind9 = { DataObjectModelType, "Ind9", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind10, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind9_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind9_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind9, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind9_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind9_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind9, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind9_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind9_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind9, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind10 = { DataObjectModelType, "Ind10", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind11, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind10_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind10_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind10, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind10_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind10_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind10, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind10_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind10_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind10, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind11 = { DataObjectModelType, "Ind11", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind12, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind11_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind11_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind11, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind11_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind11_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind11, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind11_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind11_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind11, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind12 = { DataObjectModelType, "Ind12", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind13, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind12_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind12_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind12, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind12_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind12_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind12, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind12_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind12_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind12, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind13 = { DataObjectModelType, "Ind13", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind14, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind13_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind13_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind13, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind13_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind13_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind13, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind13_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind13_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind13, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind14 = { DataObjectModelType, "Ind14", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind15, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind14_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind14_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind14, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind14_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind14_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind14, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind14_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind14_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind14, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind15 = { DataObjectModelType, "Ind15", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind16, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind15_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind15_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind15, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind15_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind15_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind15, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind15_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind15_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind15, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind16 = { DataObjectModelType, "Ind16", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind17 , (ModelNode*) &iedModel_GGIO_INGGIO1_Ind16_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind16_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind16, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind16_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind16_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind16, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind16_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind16_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind16, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP,TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind17 = { DataObjectModelType, "Ind17", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind18, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind17_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind17_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind17, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind17_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind17_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind17, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind17_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind17_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind17, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind18 = { DataObjectModelType, "Ind18", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind19, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind18_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind18_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind18, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind18_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind18_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind18, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind18_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind18_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind18, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind19 = { DataObjectModelType, "Ind19", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind20, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind19_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind19_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind19, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind19_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind19_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind19, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind19_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind19_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind19, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind20 = { DataObjectModelType, "Ind20", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind21, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind20_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind20_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind20, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind20_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind20_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind20, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind20_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind20_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind20, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind21 = { DataObjectModelType, "Ind21", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind22, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind21_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind21_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind21, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind21_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind21_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind21, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind21_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind21_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind21, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind22 = { DataObjectModelType, "Ind22", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind23, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind22_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind22_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind22, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind22_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind22_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind22, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind22_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind22_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind22, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind23 = { DataObjectModelType, "Ind23", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind24, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind23_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind23_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind23, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind23_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind23_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind23, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind23_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind23_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind23, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind24 = { DataObjectModelType, "Ind24", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind25, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind24_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind24_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind24, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind24_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind24_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind24, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind24_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind24_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind24, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind25 = { DataObjectModelType, "Ind25", (ModelNode*) &iedModel_GGIO_INGGIO1,(ModelNode*)&iedModel_GGIO_INGGIO1_Ind26, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind25_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind25_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind25, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind25_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind25_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind25, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind25_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind25_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind25, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind26 = { DataObjectModelType, "Ind26", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind27, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind26_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind26_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind26, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind26_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind26_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind26, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind26_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind26_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind26, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind27 = { DataObjectModelType, "Ind27", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind28, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind27_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind27_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind27, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind27_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind27_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind27, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind27_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind27_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind27, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind28 = { DataObjectModelType, "Ind28", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind29, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind28_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind28_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind28, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind28_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind28_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind28, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind28_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind28_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind28, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind29 = { DataObjectModelType, "Ind29", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind30, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind29_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind29_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind29, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind29_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind29_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind29, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind29_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind29_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind29, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind30 = { DataObjectModelType, "Ind30", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind31, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind30_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind30_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind30, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind30_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind30_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind30, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind30_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind30_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind30, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind31 = { DataObjectModelType, "Ind31", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind32, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind31_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind31_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind31, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind31_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind31_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind31, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind31_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind31_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind31, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind32 = { DataObjectModelType, "Ind32", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind33, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind32_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind32_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind32, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind32_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind32_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind32, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind32_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind32_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind32, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind33 = { DataObjectModelType, "Ind33", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind34, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind33_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind33_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind33, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind33_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind33_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind33, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind33_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind33_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind33, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind34 = { DataObjectModelType, "Ind34", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind35, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind34_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind34_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind34, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind34_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind34_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind34, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind34_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind34_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind34, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind35 = { DataObjectModelType, "Ind35", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind36, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind35_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind35_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind35, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind35_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind35_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind35, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind35_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind35_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind35, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind36 = { DataObjectModelType, "Ind36", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind37, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind36_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind36_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind36, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind36_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind36_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind36, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind36_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind36_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind36, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind37 = { DataObjectModelType, "Ind37", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind38, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind37_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind37_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind37, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind37_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind37_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind37, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind37_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind37_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind37, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind38 = { DataObjectModelType, "Ind38", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind39, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind38_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind38_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind38, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind38_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind38_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind38, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind38_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind38_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind38, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind39 = { DataObjectModelType, "Ind39", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*)&iedModel_GGIO_INGGIO1_Ind40, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind39_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind39_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind39, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind39_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind39_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind39, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind39_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind39_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind39, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind40 = { DataObjectModelType, "Ind40", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind41, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind40_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind40_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind40, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind40_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind40_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind40, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind40_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind40_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind40, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind41 = { DataObjectModelType, "Ind41", (ModelNode*) &iedModel_GGIO_INGGIO1, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind42, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind41_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind41_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind41, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind41_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind41_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind41, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind41_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind41_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind41, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_INGGIO1_Ind42 = { DataObjectModelType, "Ind42", (ModelNode*) &iedModel_GGIO_INGGIO1, NULL, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind42_stVal, 0};
DataAttribute iedModel_GGIO_INGGIO1_Ind42_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind42, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind42_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind42_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind42, (ModelNode*) &iedModel_GGIO_INGGIO1_Ind42_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_INGGIO1_Ind42_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_INGGIO1_Ind42, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------

/*************************************************************************
 * OUTGGIO1 ��� ����������.
 ************************************************************************/
LogicalNode iedModel_GGIO_OUTGGIO1 						= { LogicalNodeModelType,   	"OUT34GGIO1",   (ModelNode*) &iedModel_Generic_GGIO,   (ModelNode*) &iedModel_GGIO_LEDGGIO1,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Mod};

DataObject iedModel_GGIO_OUTGGIO1_Mod 					= { DataObjectModelType,     	"Mod",    (ModelNode*) &iedModel_GGIO_OUTGGIO1,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Beh,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Mod_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_Mod_q 				= { DataAttributeModelType,    	"q",    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Mod,(ModelNode*) &iedModel_GGIO_OUTGGIO1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_Mod_t 				= { DataAttributeModelType,    	"t",    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Mod,(ModelNode*) &iedModel_GGIO_OUTGGIO1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_Mod_stVal 			= { DataAttributeModelType,		"stVal",   (ModelNode*) &iedModel_GGIO_OUTGGIO1_Mod,(ModelNode*) &iedModel_GGIO_OUTGGIO1_Mod_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_Mod_ctlModel 		= {   DataAttributeModelType,   "ctlModel",    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Mod, (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
//Beh
DataObject iedModel_GGIO_OUTGGIO1_Beh 					= {    DataObjectModelType,    	"Beh",    (ModelNode*) &iedModel_GGIO_OUTGGIO1,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Health,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Beh_stVal,0};
DataAttribute iedModel_GGIO_OUTGGIO1_Beh_stVal 			= {    DataAttributeModelType,  "stVal",    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Beh,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_Beh_q 				= {    DataAttributeModelType,  "q",    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Beh,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_Beh_t 				= {    DataAttributeModelType,  "t",    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
//Health
DataObject iedModel_GGIO_OUTGGIO1_Health 					= {    DataObjectModelType,    	"Health",    (ModelNode*) &iedModel_GGIO_OUTGGIO1,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_NamPlt,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Health_stVal,0};
DataAttribute iedModel_GGIO_OUTGGIO1_Health_stVal 		= {    DataAttributeModelType,  "stVal",    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Health,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_Health_q 			= {    DataAttributeModelType,  "q",    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Health,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_Health_t 			= {    DataAttributeModelType,  "t",    (ModelNode*) &iedModel_GGIO_OUTGGIO1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
//NamPlt
DataObject iedModel_GGIO_OUTGGIO1_NamPlt 					= {    DataObjectModelType,    	"NamPlt",    (ModelNode*) &iedModel_GGIO_OUTGGIO1,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO1,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_NamPlt_vendor,0};
DataAttribute iedModel_GGIO_OUTGGIO1_NamPlt_vendor 		= {    DataAttributeModelType,  "vendor",    (ModelNode*) &iedModel_GGIO_OUTGGIO1_NamPlt,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_NamPlt_swRev 		= {    DataAttributeModelType,  "swRev",    (ModelNode*) &iedModel_GGIO_OUTGGIO1_NamPlt,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_NamPlt_d 			= {    DataAttributeModelType,  "d",    (ModelNode*) &iedModel_GGIO_OUTGGIO1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};


DataObject iedModel_GGIO_OUTGGIO1_SPCSO1 					= {    DataObjectModelType,     "SPCSO1",     	(ModelNode*) &iedModel_GGIO_OUTGGIO1,     		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO2,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO1_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO1_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO1, 		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO1_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO1_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO1, 		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO1_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO1_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO1, 		(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO2 					= {    DataObjectModelType,     "SPCSO2",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*)  &iedModel_GGIO_OUTGGIO1_SPCSO3,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO2_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO2_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO2, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO2_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO2_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO2, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO2_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO2_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO2, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO3 					= {    DataObjectModelType,     "SPCSO3",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO4,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO3_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO3_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO3, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO3_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO3_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO3, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO3_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO3_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO3, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO4 					= {    DataObjectModelType,     "SPCSO4",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO5,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO4_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO4_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO4, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO4_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO4_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO4, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO4_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO4_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO4, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO5 					= {    DataObjectModelType,     "SPCSO5",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO6,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO5_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO5_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO5, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO5_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO5_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO5, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO5_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO5_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO5, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO6 					= {    DataObjectModelType,     "SPCSO6",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO7,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO6_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO6_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO6, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO6_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO6_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO6, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO6_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO6_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO6, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO7 					= {    DataObjectModelType,     "SPCSO7",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO8,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO7_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO7_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO7, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO7_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO7_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO7, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO7_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO7_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO7, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO8 					= {    DataObjectModelType,     "SPCSO8",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO9,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO8_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO8_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO8, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO8_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO8_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO8, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO8_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO8_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO8, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO9 					= {    DataObjectModelType,     "SPCSO9",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO10,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO9_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO9_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO9, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO9_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO9_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO9, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO9_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO9_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO9, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO10 					= {    DataObjectModelType,     "SPCSO10",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO11,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO10_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO10_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO10, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO10_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO10_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO10, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO10_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO10_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO10, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO11 					= {    DataObjectModelType,     "SPCSO11",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO12,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO11_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO11_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO11, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO11_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO11_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO11, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO11_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO11_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO11, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO12 					= {    DataObjectModelType,     "SPCSO12",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO13,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO12_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO12_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO12, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO12_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO12_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO12, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO12_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO12_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO12, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO13 					= {    DataObjectModelType,     "SPCSO13",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO14,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO13_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO13_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO13, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO13_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO13_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO13, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO13_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO13_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO13, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO14 					= {    DataObjectModelType,     "SPCSO14",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO15,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO14_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO14_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO14, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO14_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO14_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO14, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO14_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO14_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO14, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO15 					= {    DataObjectModelType,     "SPCSO15",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO16,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO15_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO15_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO15, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO15_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO15_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO15, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO15_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO15_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO15, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO16 					= {    DataObjectModelType,     "SPCSO16",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO17,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO16_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO16_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO16, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO16_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO16_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO16, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO16_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO16_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO16, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO17 					= {    DataObjectModelType,     "SPCSO17",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO18,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO17_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO17_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO17, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO17_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO17_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO17, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO17_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO17_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO17, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO18 					= {    DataObjectModelType,     "SPCSO18",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO19,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO18_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO18_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO18, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO18_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO18_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO18, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO18_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO18_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO18, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO19 					= {    DataObjectModelType,     "SPCSO19",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO20,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO19_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO19_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO19, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO19_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO19_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO19, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO19_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO19_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO19, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO20 					= {    DataObjectModelType,     "SPCSO20",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO21,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO20_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO20_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO20, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO20_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO20_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO20, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO20_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO20_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO20, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO21 					= {    DataObjectModelType,     "SPCSO21",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO22,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO21_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO21_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO21, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO21_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO21_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO21, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO21_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO21_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO21, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO22 					= {    DataObjectModelType,     "SPCSO22",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO23,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO22_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO22_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO22, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO22_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO22_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO22, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO22_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO22_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO22, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO23 					= {    DataObjectModelType,     "SPCSO23",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO24,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO23_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO23_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO23, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO23_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO23_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO23, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO23_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO23_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO23, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO24 					= {    DataObjectModelType,     "SPCSO24",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO25,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO24_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO24_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO24, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO24_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO24_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO24, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO24_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO24_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO24, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO25 					= {    DataObjectModelType,     "SPCSO25",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO26,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO25_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO25_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO25, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO25_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO25_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO25, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO25_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO25_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO25, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO26 					= {    DataObjectModelType,     "SPCSO26",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO27,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO26_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO26_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO26, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO26_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO26_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO26, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO26_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO26_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO26, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO27 					= {    DataObjectModelType,     "SPCSO27",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO28,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO27_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO27_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO27, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO27_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO27_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO27, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO27_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO27_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO27, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO28 					= {    DataObjectModelType,     "SPCSO28",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO29,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO28_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO28_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO28, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO28_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO28_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO28, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO28_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO28_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO28, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO29 					= {    DataObjectModelType,     "SPCSO29",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO30,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO29_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO29_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO29, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO29_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO29_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO29, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO29_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO29_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO29, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO30 					= {    DataObjectModelType,     "SPCSO30",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO31,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO30_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO30_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO30, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO30_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO30_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO30, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO30_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO30_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO30, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO31 					= {    DataObjectModelType,     "SPCSO31",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO32,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO31_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO31_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO31, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO31_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO31_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO31, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO31_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO31_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO31, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO32 					= {    DataObjectModelType,     "SPCSO32",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO33,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO32_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO32_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO32, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO32_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO32_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO32, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO32_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO32_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO32, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO33 					= {    DataObjectModelType,     "SPCSO33",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO34,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO33_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO33_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO33, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO33_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO33_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO33, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO33_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO33_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO33, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_OUTGGIO1_SPCSO34 					= {    DataObjectModelType,     "SPCSO34",     		(ModelNode*) &iedModel_GGIO_OUTGGIO1,     			(ModelNode*) NULL,    (ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO34_q,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO34_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO34, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO34_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO34_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO34, 			(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO34_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_OUTGGIO1_SPCSO34_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_OUTGGIO1_SPCSO34, 			(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};

/*************************************************************************
 * LED16GGIO1
 ************************************************************************/
LogicalNode iedModel_GGIO_LEDGGIO1 					= { LogicalNodeModelType,   "LED16GGIO1",    (ModelNode*)&iedModel_Generic_GGIO,   (ModelNode*)&iedModel_GGIO_SSLGGIO1,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Mod};

DataObject iedModel_GGIO_LEDGGIO1_Mod 				= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_GGIO_LEDGGIO1,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Beh,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Mod_q,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Mod_q 			= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Mod,(ModelNode*) &iedModel_GGIO_LEDGGIO1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Mod_t 			= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Mod,(ModelNode*) &iedModel_GGIO_LEDGGIO1_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Mod_stVal 		= { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_GGIO_LEDGGIO1_Mod,(ModelNode*) &iedModel_GGIO_LEDGGIO1_Mod_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Mod_ctlModel 	= {   DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Mod,    NULL,    NULL,    0,   IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_LEDGGIO1_Beh 				= {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_GGIO_LEDGGIO1,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Health,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Beh_stVal,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Beh_stVal 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Beh,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Beh_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Beh,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Beh_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_LEDGGIO1_Health 			= {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_GGIO_LEDGGIO1,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_NamPlt,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Health_stVal,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Health_stVal 	= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Health,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Health_q 		= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Health,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Health_t 		= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_LEDGGIO1_NamPlt 			= {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_GGIO_LEDGGIO1,    (ModelNode*)&iedModel_GGIO_LEDGGIO1_Ind1,  (ModelNode*) &iedModel_GGIO_LEDGGIO1_NamPlt_vendor,0};
DataAttribute iedModel_GGIO_LEDGGIO1_NamPlt_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_NamPlt,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_NamPlt_swRev 	= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_NamPlt,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_NamPlt_d 		= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};


DataObject iedModel_GGIO_LEDGGIO1_Ind1 = {DataObjectModelType,"Ind1",(ModelNode*) &iedModel_GGIO_LEDGGIO1,(ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind2,(ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind1_stVal,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind1_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind1,(ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind1_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind1_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind1,(ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind1_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind1_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind1,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};

DataObject iedModel_GGIO_LEDGGIO1_Ind2 = {DataObjectModelType,"Ind2",(ModelNode*) &iedModel_GGIO_LEDGGIO1,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind3,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind2_stVal,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind2_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind2,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind2_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind2_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind2,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind2_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind2_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind2,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// --------------------------------------------------------
DataObject iedModel_GGIO_LEDGGIO1_Ind3 = {    DataObjectModelType,    "Ind3",    (ModelNode*) &iedModel_GGIO_LEDGGIO1,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind4,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind3_stVal,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind3_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind3,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind3_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind3_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind3,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind3_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind3_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind3,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_LEDGGIO1_Ind4 = {    DataObjectModelType,    "Ind4",    (ModelNode*) &iedModel_GGIO_LEDGGIO1,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind5,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind4_stVal,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind4_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind4,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind4_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind4_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind4,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind4_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind4_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind4,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_LEDGGIO1_Ind5 = {    DataObjectModelType,    "Ind5",    (ModelNode*) &iedModel_GGIO_LEDGGIO1,    (ModelNode*)&iedModel_GGIO_LEDGGIO1_Ind6,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind5_stVal,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind5_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind5,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind5_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind5_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind5,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind5_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind5_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind5,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_LEDGGIO1_Ind6 = {    DataObjectModelType,    "Ind6",    (ModelNode*) &iedModel_GGIO_LEDGGIO1,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind7,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind6_stVal,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind6_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind6,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind6_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind6_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind6,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind6_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind6_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind6,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_LEDGGIO1_Ind7 = {    DataObjectModelType,    "Ind7",    (ModelNode*) &iedModel_GGIO_LEDGGIO1,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind8,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind7_stVal,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind7_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind7,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind7_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind7_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind7,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind7_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind7_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind7,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_LEDGGIO1_Ind8 = {    DataObjectModelType,    "Ind8",    (ModelNode*) &iedModel_GGIO_LEDGGIO1,    (ModelNode*)&iedModel_GGIO_LEDGGIO1_Ind9,   (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind8_stVal,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind8_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind8,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind8_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind8_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind8,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind8_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind8_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind8,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// --------------------------------------------------------
DataObject iedModel_GGIO_LEDGGIO1_Ind9 = { DataObjectModelType, "Ind9", (ModelNode*) &iedModel_GGIO_LEDGGIO1, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind10, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind9_stVal, 0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind9_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind9, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind9_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind9_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind9, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind9_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind9_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind9, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_LEDGGIO1_Ind10 = { DataObjectModelType, "Ind10", (ModelNode*) &iedModel_GGIO_LEDGGIO1, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind11, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind10_stVal, 0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind10_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind10, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind10_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind10_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind10, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind10_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind10_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind10, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_LEDGGIO1_Ind11 = { DataObjectModelType, "Ind11", (ModelNode*) &iedModel_GGIO_LEDGGIO1, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind12, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind11_stVal, 0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind11_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind11, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind11_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind11_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind11, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind11_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind11_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind11, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_LEDGGIO1_Ind12 = { DataObjectModelType, "Ind12", (ModelNode*) &iedModel_GGIO_LEDGGIO1, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind13, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind12_stVal, 0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind12_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind12, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind12_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind12_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind12, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind12_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind12_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind12, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// --------------------------------------------------------
DataObject iedModel_GGIO_LEDGGIO1_Ind13 = { DataObjectModelType, "Ind13", (ModelNode*) &iedModel_GGIO_LEDGGIO1, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind14, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind13_stVal, 0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind13_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind13, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind13_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind13_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind13, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind13_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind13_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind13, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_LEDGGIO1_Ind14 = { DataObjectModelType, "Ind14", (ModelNode*) &iedModel_GGIO_LEDGGIO1, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind15, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind14_stVal, 0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind14_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind14, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind14_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind14_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind14, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind14_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind14_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind14, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_LEDGGIO1_Ind15 = { DataObjectModelType, "Ind15", (ModelNode*) &iedModel_GGIO_LEDGGIO1, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind16, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind15_stVal, 0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind15_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind15, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind15_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind15_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind15, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind15_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind15_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind15, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
// --------------------------------------------------------
DataObject iedModel_GGIO_LEDGGIO1_Ind16 = { DataObjectModelType, "Ind16", (ModelNode*) &iedModel_GGIO_LEDGGIO1, (ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind16_stVal, 0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind16_stVal = { DataAttributeModelType, "stVal", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind16, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind16_q, NULL, 0, IEC61850_FC_ST, IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind16_q = { DataAttributeModelType, "q", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind16, (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind16_t, NULL, 0, IEC61850_FC_ST, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_Ind16_t = { DataAttributeModelType, "t", (ModelNode*) &iedModel_GGIO_LEDGGIO1_Ind16, NULL, NULL, 0, IEC61850_FC_ST, IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// --------------------------------------------------------
DataObject iedModel_GGIO_LEDGGIO1_SPCSO1 						= {    DataObjectModelType,     "SPCSO1",     	(ModelNode*) &iedModel_GGIO_LEDGGIO1,     		NULL,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_q,0};
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1, 		(ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1, 		(ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_d,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_d 				= {    DataAttributeModelType,  "d",       		(ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1, 		(ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_stVal,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1, 		(ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_ctlModel 			= {   DataAttributeModelType,   "ctlModel",		(ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1, 		(ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_Oper, NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_Oper 				= {    DataAttributeModelType,  "Oper",    		(ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1,   	NULL,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_ctlVal,    0,    IEC61850_FC_CO,    IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_ctlVal 			= {    DataAttributeModelType,  "ctlVal",  	(ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_Oper, (ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_origin,    NULL,    0,    IEC61850_FC_CO,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_origin 			= {    DataAttributeModelType,  "origin",  	(ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_Oper, (ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_ctlNum,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_origin_orCat,    0,    IEC61850_FC_CO,    IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_origin_orCat 	= {    DataAttributeModelType,  "orCat",   	(ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_origin,    (ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_origin_orIdent,    NULL,    0,    IEC61850_FC_CO,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_origin_orIdent 	= {    DataAttributeModelType,  "orIdent", 	(ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_origin,    NULL,    NULL,    0,    IEC61850_FC_CO,    IEC61850_OCTET_STRING_64, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_ctlNum 			= {    DataAttributeModelType,  "ctlNum",  	(ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_Oper, (ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_T,    NULL,    0,    IEC61850_FC_CO,    IEC61850_INT8U, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_T 				= {    DataAttributeModelType,  "T",    	(ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_Oper, (ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_Test,    NULL,    0,    IEC61850_FC_CO,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_Test 			= {    DataAttributeModelType,  "Test",    	(ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_Oper, (ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_Check,    NULL,    0,    IEC61850_FC_CO,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LEDGGIO1_SPCSO1_Oper_Check 			= {    DataAttributeModelType,  "Check",    (ModelNode*) &iedModel_GGIO_LEDGGIO1_SPCSO1_Oper, NULL,    NULL,    0,    IEC61850_FC_CO,    IEC61850_CHECK, TRG_OPT_NO, NULL,0};

/*************************************************************************
 * SSL32GGIO1
 ************************************************************************/
LogicalNode iedModel_GGIO_SSLGGIO1 			= { LogicalNodeModelType,   "SSL32GGIO1",    (ModelNode*)&iedModel_Generic_GGIO,   (ModelNode*)&iedModel_GGIO_VLSGGIO1,    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Mod};

DataObject iedModel_GGIO_SSLGGIO1_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_GGIO_SSLGGIO1,    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Beh,    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Mod_q,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Mod,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Mod,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_GGIO_SSLGGIO1_Mod,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Mod_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Mod_ctlModel = {   DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Mod,    NULL,    NULL,    0,   IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_SSLGGIO1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_GGIO_SSLGGIO1,    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Health,    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Beh_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Beh,    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Beh,    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_SSLGGIO1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_GGIO_SSLGGIO1,    (ModelNode*) &iedModel_GGIO_SSLGGIO1_NamPlt,    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Health_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Health,    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Health,    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_SSLGGIO1_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_SSLGGIO1_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_GGIO_SSLGGIO1,    (ModelNode*)&iedModel_GGIO_SSLGGIO1_Ind1 , (ModelNode*) &iedModel_GGIO_SSLGGIO1_NamPlt_vendor,0};

DataAttribute iedModel_GGIO_SSLGGIO1_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_GGIO_SSLGGIO1_NamPlt,    (ModelNode*) &iedModel_GGIO_SSLGGIO1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_GGIO_SSLGGIO1_NamPlt,    (ModelNode*) &iedModel_GGIO_SSLGGIO1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_GGIO_SSLGGIO1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind1 = {DataObjectModelType,"Ind1",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind2 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind1_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind1_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind1_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind1_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind1_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind1_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind1,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind2 = {DataObjectModelType,"Ind2",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind3 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind2_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind2_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind2,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind2_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind2_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind2,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind2_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind2_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind2,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind3 = {DataObjectModelType,"Ind3",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind4 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind3_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind3_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind3,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind3_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind3_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind3,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind3_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind3_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind3,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind4 = {DataObjectModelType,"Ind4",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind5 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind4_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind4_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind4,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind4_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind4_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind4,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind4_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind4_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind4,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind5 = {DataObjectModelType,"Ind5",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind6 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind5_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind5_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind5,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind5_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind5_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind5,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind5_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind5_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind5,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind6 = {DataObjectModelType,"Ind6",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind7 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind6_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind6_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind6,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind6_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind6_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind6,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind6_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind6_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind6,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind7 = {DataObjectModelType,"Ind7",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind8 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind7_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind7_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind7,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind7_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind7_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind7,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind7_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind7_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind7,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind8 = {DataObjectModelType,"Ind8",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind9 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind8_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind8_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind8,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind8_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind8_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind8,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind8_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind8_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind8,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind9 = {DataObjectModelType,"Ind9",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind10 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind9_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind9_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind9,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind9_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind9_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind9,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind9_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind9_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind9,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind10 = {DataObjectModelType,"Ind10",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind11 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind10_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind10_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind10,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind10_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind10_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind10,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind10_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind10_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind10,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind11 = {DataObjectModelType,"Ind11",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind12 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind11_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind11_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind11,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind11_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind11_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind11,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind11_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind11_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind11,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind12 = {DataObjectModelType,"Ind12",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind13 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind12_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind12_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind12,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind12_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind12_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind12,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind12_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind12_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind12,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind13 = {DataObjectModelType,"Ind13",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind14 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind13_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind13_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind13,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind13_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind13_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind13,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind13_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind13_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind13,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind14 = {DataObjectModelType,"Ind14",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind15 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind14_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind14_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind14,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind14_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind14_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind14,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind14_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind14_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind14,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind15 = {DataObjectModelType,"Ind15",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind16 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind15_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind15_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind15,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind15_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind15_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind15,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind15_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind15_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind15,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind16 = {DataObjectModelType,"Ind16",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind17 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind16_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind16_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind16,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind16_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind16_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind16,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind16_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind16_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind16,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind17 = {DataObjectModelType,"Ind17",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind18 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind17_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind17_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind17,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind17_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind17_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind17,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind17_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind17_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind17,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind18 = {DataObjectModelType,"Ind18",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind19 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind18_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind18_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind18,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind18_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind18_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind18,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind18_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind18_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind18,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind19 = {DataObjectModelType,"Ind19",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind20 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind19_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind19_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind19,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind19_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind19_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind19,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind19_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind19_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind19,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind20 = {DataObjectModelType,"Ind20",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind21 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind20_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind20_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind20,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind20_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind20_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind20,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind20_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind20_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind20,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind21 = {DataObjectModelType,"Ind21",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind22 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind21_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind21_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind21,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind21_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind21_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind21,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind21_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind21_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind21,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind22 = {DataObjectModelType,"Ind22",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind23 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind22_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind22_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind22,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind22_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind22_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind22,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind22_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind22_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind22,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind23 = {DataObjectModelType,"Ind23",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind24 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind23_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind23_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind23,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind23_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind23_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind23,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind23_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind23_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind23,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind24 = {DataObjectModelType,"Ind24",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind25 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind24_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind24_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind24,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind24_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind24_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind24,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind24_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind24_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind24,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind25 = {DataObjectModelType,"Ind25",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind26 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind25_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind25_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind25,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind25_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind25_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind25,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind25_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind25_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind25,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind26 = {DataObjectModelType,"Ind26",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind27 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind26_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind26_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind26,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind26_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind26_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind26,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind26_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind26_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind26,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind27 = {DataObjectModelType,"Ind27",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind28 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind27_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind27_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind27,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind27_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind27_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind27,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind27_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind27_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind27,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind28 = {DataObjectModelType,"Ind28",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind29 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind28_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind28_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind28,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind28_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind28_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind28,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind28_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind28_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind28,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind29 = {DataObjectModelType,"Ind29",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind30 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind29_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind29_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind29,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind29_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind29_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind29,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind29_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind29_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind29,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind30 = {DataObjectModelType,"Ind30",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind31 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind30_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind30_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind30,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind30_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind30_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind30,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind30_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind30_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind30,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind31 = {DataObjectModelType,"Ind31",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind32 ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind31_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind31_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind31,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind31_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind31_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind31,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind31_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind31_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind31,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_SSLGGIO1_Ind32 = {DataObjectModelType,"Ind32",(ModelNode*) &iedModel_GGIO_SSLGGIO1,(ModelNode*) NULL ,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind32_stVal,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind32_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind32,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind32_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind32_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind32,(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind32_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_SSLGGIO1_Ind32_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_SSLGGIO1_Ind32,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};

/*************************************************************************
 * VLS16GGIO1
 ************************************************************************/
LogicalNode iedModel_GGIO_VLSGGIO1 			= { LogicalNodeModelType,   "VLS16GGIO1",    (ModelNode*)&iedModel_Generic_GGIO,   (ModelNode*)&iedModel_GGIO_LSGGIO1,    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Mod};

DataObject iedModel_GGIO_VLSGGIO1_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_GGIO_VLSGGIO1,    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Beh,    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Mod_q,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Mod,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Mod,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_GGIO_VLSGGIO1_Mod,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Mod_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Mod_ctlModel = {   DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Mod,    NULL,    NULL,    0,   IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_VLSGGIO1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_GGIO_VLSGGIO1,    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Health,    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Beh_stVal,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Beh,    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Beh,    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_VLSGGIO1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_GGIO_VLSGGIO1,    (ModelNode*) &iedModel_GGIO_VLSGGIO1_NamPlt,    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Health_stVal,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Health,    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Health,    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_VLSGGIO1_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_VLSGGIO1_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_GGIO_VLSGGIO1,    (ModelNode*)&iedModel_GGIO_VLSGGIO1_Ind1 , (ModelNode*) &iedModel_GGIO_VLSGGIO1_NamPlt_vendor,0};

DataAttribute iedModel_GGIO_VLSGGIO1_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_GGIO_VLSGGIO1_NamPlt,    (ModelNode*) &iedModel_GGIO_VLSGGIO1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_GGIO_VLSGGIO1_NamPlt,    (ModelNode*) &iedModel_GGIO_VLSGGIO1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_GGIO_VLSGGIO1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

//----------------------------------------------------------------------------
DataObject iedModel_GGIO_VLSGGIO1_Ind1 = {DataObjectModelType,"Ind1",(ModelNode*) &iedModel_GGIO_VLSGGIO1,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind2 ,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind1_stVal,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind1_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind1,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind1_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind1_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind1,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind1_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind1_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind1,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_VLSGGIO1_Ind2 = {DataObjectModelType,"Ind2",(ModelNode*) &iedModel_GGIO_VLSGGIO1,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind3 ,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind2_stVal,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind2_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind2,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind2_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind2_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind2,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind2_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind2_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind2,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_VLSGGIO1_Ind3 = {DataObjectModelType,"Ind3",(ModelNode*) &iedModel_GGIO_VLSGGIO1,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind4 ,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind3_stVal,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind3_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind3,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind3_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind3_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind3,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind3_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind3_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind3,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_VLSGGIO1_Ind4 = {DataObjectModelType,"Ind4",(ModelNode*) &iedModel_GGIO_VLSGGIO1,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind5 ,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind4_stVal,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind4_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind4,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind4_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind4_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind4,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind4_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind4_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind4,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_VLSGGIO1_Ind5 = {DataObjectModelType,"Ind5",(ModelNode*) &iedModel_GGIO_VLSGGIO1,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind6 ,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind5_stVal,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind5_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind5,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind5_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind5_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind5,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind5_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind5_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind5,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_VLSGGIO1_Ind6 = {DataObjectModelType,"Ind6",(ModelNode*) &iedModel_GGIO_VLSGGIO1,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind7 ,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind6_stVal,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind6_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind6,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind6_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind6_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind6,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind6_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind6_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind6,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_VLSGGIO1_Ind7 = {DataObjectModelType,"Ind7",(ModelNode*) &iedModel_GGIO_VLSGGIO1,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind8 ,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind7_stVal,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind7_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind7,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind7_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind7_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind7,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind7_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind7_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind7,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_VLSGGIO1_Ind8 = {DataObjectModelType,"Ind8",(ModelNode*) &iedModel_GGIO_VLSGGIO1,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind9 ,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind8_stVal,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind8_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind8,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind8_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind8_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind8,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind8_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind8_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind8,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_VLSGGIO1_Ind9 = {DataObjectModelType,"Ind9",(ModelNode*) &iedModel_GGIO_VLSGGIO1,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind10 ,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind9_stVal,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind9_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind9,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind9_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind9_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind9,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind9_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind9_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind9,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_VLSGGIO1_Ind10 = {DataObjectModelType,"Ind10",(ModelNode*) &iedModel_GGIO_VLSGGIO1,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind11 ,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind10_stVal,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind10_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind10,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind10_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind10_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind10,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind10_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind10_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind10,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_VLSGGIO1_Ind11 = {DataObjectModelType,"Ind11",(ModelNode*) &iedModel_GGIO_VLSGGIO1,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind12 ,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind11_stVal,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind11_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind11,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind11_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind11_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind11,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind11_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind11_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind11,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_VLSGGIO1_Ind12 = {DataObjectModelType,"Ind12",(ModelNode*) &iedModel_GGIO_VLSGGIO1,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind13 ,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind12_stVal,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind12_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind12,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind12_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind12_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind12,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind12_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind12_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind12,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_VLSGGIO1_Ind13 = {DataObjectModelType,"Ind13",(ModelNode*) &iedModel_GGIO_VLSGGIO1,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind14 ,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind13_stVal,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind13_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind13,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind13_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind13_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind13,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind13_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind13_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind13,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_VLSGGIO1_Ind14 = {DataObjectModelType,"Ind14",(ModelNode*) &iedModel_GGIO_VLSGGIO1,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind15 ,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind14_stVal,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind14_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind14,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind14_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind14_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind14,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind14_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind14_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind14,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_VLSGGIO1_Ind15 = {DataObjectModelType,"Ind15",(ModelNode*) &iedModel_GGIO_VLSGGIO1,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind16 ,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind15_stVal,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind15_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind15,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind15_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind15_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind15,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind15_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind15_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind15,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_VLSGGIO1_Ind16 = {DataObjectModelType,"Ind16",(ModelNode*) &iedModel_GGIO_VLSGGIO1,(ModelNode*) NULL ,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind16_stVal,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind16_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind16,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind16_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind16_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind16,(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind16_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_VLSGGIO1_Ind16_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_VLSGGIO1_Ind16,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};

/*************************************************************************
 * LS16GGIO1
 ************************************************************************/
LogicalNode iedModel_GGIO_LSGGIO1 			= { LogicalNodeModelType,   "LS16GGIO1",    (ModelNode*)&iedModel_Generic_GGIO,   NULL,    (ModelNode*) &iedModel_GGIO_LSGGIO1_Mod};

DataObject iedModel_GGIO_LSGGIO1_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_GGIO_LSGGIO1,    (ModelNode*) &iedModel_GGIO_LSGGIO1_Beh,    (ModelNode*) &iedModel_GGIO_LSGGIO1_Mod_q,0};
DataAttribute iedModel_GGIO_LSGGIO1_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_LSGGIO1_Mod,(ModelNode*) &iedModel_GGIO_LSGGIO1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_LSGGIO1_Mod,(ModelNode*) &iedModel_GGIO_LSGGIO1_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_GGIO_LSGGIO1_Mod,(ModelNode*) &iedModel_GGIO_LSGGIO1_Mod_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Mod_ctlModel = {   DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_GGIO_LSGGIO1_Mod,    NULL,    NULL,    0,   IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_LSGGIO1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_GGIO_LSGGIO1,    (ModelNode*) &iedModel_GGIO_LSGGIO1_Health,    (ModelNode*) &iedModel_GGIO_LSGGIO1_Beh_stVal,0};
DataAttribute iedModel_GGIO_LSGGIO1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_LSGGIO1_Beh,    (ModelNode*) &iedModel_GGIO_LSGGIO1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_LSGGIO1_Beh,    (ModelNode*) &iedModel_GGIO_LSGGIO1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_LSGGIO1_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_LSGGIO1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_GGIO_LSGGIO1,    (ModelNode*) &iedModel_GGIO_LSGGIO1_NamPlt,    (ModelNode*) &iedModel_GGIO_LSGGIO1_Health_stVal,0};
DataAttribute iedModel_GGIO_LSGGIO1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_GGIO_LSGGIO1_Health,    (ModelNode*) &iedModel_GGIO_LSGGIO1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_GGIO_LSGGIO1_Health,    (ModelNode*) &iedModel_GGIO_LSGGIO1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_GGIO_LSGGIO1_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_GGIO_LSGGIO1_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_GGIO_LSGGIO1,    (ModelNode*)&iedModel_GGIO_LSGGIO1_Ind1 , (ModelNode*) &iedModel_GGIO_LSGGIO1_NamPlt_vendor,0};

DataAttribute iedModel_GGIO_LSGGIO1_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_GGIO_LSGGIO1_NamPlt,    (ModelNode*) &iedModel_GGIO_LSGGIO1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_GGIO_LSGGIO1_NamPlt,    (ModelNode*) &iedModel_GGIO_LSGGIO1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_GGIO_LSGGIO1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

//----------------------------------------------------------------------------
DataObject iedModel_GGIO_LSGGIO1_Ind1 = {DataObjectModelType,"Ind1",(ModelNode*) &iedModel_GGIO_LSGGIO1,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind2 ,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind1_stVal,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind1_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind1,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind1_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind1_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind1,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind1_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind1_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind1,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_LSGGIO1_Ind2 = {DataObjectModelType,"Ind2",(ModelNode*) &iedModel_GGIO_LSGGIO1,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind3 ,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind2_stVal,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind2_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind2,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind2_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind2_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind2,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind2_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind2_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind2,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_LSGGIO1_Ind3 = {DataObjectModelType,"Ind3",(ModelNode*) &iedModel_GGIO_LSGGIO1,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind4 ,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind3_stVal,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind3_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind3,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind3_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind3_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind3,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind3_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind3_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind3,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_LSGGIO1_Ind4 = {DataObjectModelType,"Ind4",(ModelNode*) &iedModel_GGIO_LSGGIO1,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind5 ,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind4_stVal,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind4_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind4,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind4_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind4_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind4,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind4_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind4_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind4,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_LSGGIO1_Ind5 = {DataObjectModelType,"Ind5",(ModelNode*) &iedModel_GGIO_LSGGIO1,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind6 ,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind5_stVal,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind5_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind5,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind5_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind5_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind5,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind5_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind5_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind5,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_LSGGIO1_Ind6 = {DataObjectModelType,"Ind6",(ModelNode*) &iedModel_GGIO_LSGGIO1,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind7 ,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind6_stVal,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind6_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind6,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind6_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind6_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind6,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind6_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind6_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind6,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_LSGGIO1_Ind7 = {DataObjectModelType,"Ind7",(ModelNode*) &iedModel_GGIO_LSGGIO1,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind8 ,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind7_stVal,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind7_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind7,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind7_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind7_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind7,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind7_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind7_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind7,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_LSGGIO1_Ind8 = {DataObjectModelType,"Ind8",(ModelNode*) &iedModel_GGIO_LSGGIO1,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind9 ,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind8_stVal,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind8_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind8,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind8_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind8_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind8,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind8_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind8_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind8,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_LSGGIO1_Ind9 = {DataObjectModelType,"Ind9",(ModelNode*) &iedModel_GGIO_LSGGIO1,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind10 ,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind9_stVal,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind9_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind9,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind9_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind9_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind9,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind9_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind9_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind9,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_LSGGIO1_Ind10 = {DataObjectModelType,"Ind10",(ModelNode*) &iedModel_GGIO_LSGGIO1,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind11 ,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind10_stVal,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind10_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind10,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind10_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind10_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind10,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind10_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind10_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind10,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_LSGGIO1_Ind11 = {DataObjectModelType,"Ind11",(ModelNode*) &iedModel_GGIO_LSGGIO1,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind12 ,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind11_stVal,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind11_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind11,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind11_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind11_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind11,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind11_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind11_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind11,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_LSGGIO1_Ind12 = {DataObjectModelType,"Ind12",(ModelNode*) &iedModel_GGIO_LSGGIO1,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind13 ,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind12_stVal,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind12_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind12,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind12_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind12_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind12,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind12_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind12_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind12,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_LSGGIO1_Ind13 = {DataObjectModelType,"Ind13",(ModelNode*) &iedModel_GGIO_LSGGIO1,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind14 ,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind13_stVal,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind13_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind13,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind13_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind13_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind13,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind13_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind13_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind13,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_LSGGIO1_Ind14 = {DataObjectModelType,"Ind14",(ModelNode*) &iedModel_GGIO_LSGGIO1,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind15 ,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind14_stVal,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind14_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind14,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind14_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind14_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind14,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind14_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind14_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind14,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_LSGGIO1_Ind15 = {DataObjectModelType,"Ind15",(ModelNode*) &iedModel_GGIO_LSGGIO1,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind16 ,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind15_stVal,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind15_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind15,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind15_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind15_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind15,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind15_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind15_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind15,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};
//----------------------------------------------------------------------------
DataObject iedModel_GGIO_LSGGIO1_Ind16 = {DataObjectModelType,"Ind16",(ModelNode*) &iedModel_GGIO_LSGGIO1,(ModelNode*) NULL ,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind16_stVal,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind16_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind16,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind16_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind16_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind16,(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind16_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_GGIO_LSGGIO1_Ind16_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_GGIO_LSGGIO1_Ind16,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};




/*************************************************************************
 * 5.10.7 LN: ��������� ���: MMXU1
 *************************************************************************/
LogicalNode iedModel_MES_MMXU1 							= {    LogicalNodeModelType,    "MMXU1",    (ModelNode*)&iedModel_Generic_MES,   (ModelNode*)&iedModel_MES_MSQI1,    (ModelNode*) &iedModel_MES_MMXU1_Mod};

DataObject iedModel_MES_MMXU1_Mod 						= {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_MES_MMXU1,    (ModelNode*) &iedModel_MES_MMXU1_Beh,    (ModelNode*) &iedModel_MES_MMXU1_Mod_q,0};
DataAttribute iedModel_MES_MMXU1_Mod_q 					= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_MES_MMXU1_Mod,    (ModelNode*) &iedModel_MES_MMXU1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_MES_MMXU1_Mod_t 					= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_MES_MMXU1_Mod,    (ModelNode*) &iedModel_MES_MMXU1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_MES_MMXU1_Mod_stVal 				= { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_MES_MMXU1_Mod,    (ModelNode*) &iedModel_MES_MMXU1_Mod_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_Mod_ctlModel 			= {   DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_MES_MMXU1_Mod,    NULL,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};

DataObject iedModel_MES_MMXU1_Beh 						= {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_MES_MMXU1,    (ModelNode*) &iedModel_MES_MMXU1_Health,    (ModelNode*) &iedModel_MES_MMXU1_Beh_stVal,0};
DataAttribute iedModel_MES_MMXU1_Beh_stVal		 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_MES_MMXU1_Beh,    (ModelNode*) &iedModel_MES_MMXU1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_Beh_q 					= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_MES_MMXU1_Beh,    (ModelNode*) &iedModel_MES_MMXU1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_Beh_t 					= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_MES_MMXU1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_MES_MMXU1_Health 					= {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_MES_MMXU1,    (ModelNode*) &iedModel_MES_MMXU1_NamPlt,    (ModelNode*) &iedModel_MES_MMXU1_Health_stVal,0};
DataAttribute iedModel_MES_MMXU1_Health_stVal 			= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_MES_MMXU1_Health,    (ModelNode*) &iedModel_MES_MMXU1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_MES_MMXU1_Health_q 				= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_MES_MMXU1_Health,    (ModelNode*) &iedModel_MES_MMXU1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_MES_MMXU1_Health_t 				= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_MES_MMXU1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_MES_MMXU1_NamPlt 					= {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_MES_MMXU1,    (ModelNode*) &iedModel_MES_MMXU1_A, (ModelNode*) &iedModel_MES_MMXU1_NamPlt_vendor,0};
DataAttribute iedModel_MES_MMXU1_NamPlt_vendor 			= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_MES_MMXU1_NamPlt,    (ModelNode*) &iedModel_MES_MMXU1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_MES_MMXU1_NamPlt_swRev 			= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_MES_MMXU1_NamPlt,    (ModelNode*) &iedModel_MES_MMXU1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_MES_MMXU1_NamPlt_d 				= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_MES_MMXU1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// MMXU1 A
DataObject iedModel_MES_MMXU1_A 						= { DataObjectModelType, "A", (ModelNode*) &iedModel_MES_MMXU1, (ModelNode*)&iedModel_MES_MMXU1_phV, (ModelNode*) &iedModel_MES_MMXU1_A_phsA, 0 };
DataObject iedModel_MES_MMXU1_A_phsA 					= { DataObjectModelType, "phsA", (ModelNode*) &iedModel_MES_MMXU1_A, (ModelNode*)&iedModel_MES_MMXU1_A_phsB, (ModelNode*) &iedModel_MES_MMXU1_A_phsA_cVal, 0 };
DataAttribute iedModel_MES_MMXU1_A_phsA_cVal 			= { DataAttributeModelType, "cVal", (ModelNode*) &iedModel_MES_MMXU1_A_phsA, (ModelNode*) &iedModel_MES_MMXU1_A_phsA_q, (ModelNode*) &iedModel_MES_MMXU1_A_phsA_cVal_mag, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED,TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_phsA_cVal_mag 		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MMXU1_A_phsA_cVal, NULL, (ModelNode*) &iedModel_MES_MMXU1_A_phsA_cVal_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_phsA_cVal_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MMXU1_A_phsA_cVal_mag, (ModelNode*) NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_phsA_q 			= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MMXU1_A_phsA, (ModelNode*) &iedModel_MES_MMXU1_A_phsA_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_phsA_t 			= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MMXU1_A_phsA, (ModelNode*) &iedModel_MES_MMXU1_A_phsA_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_phsA_db 			= { DataAttributeModelType, "db", (ModelNode*) &iedModel_MES_MMXU1_A_phsA, (ModelNode*) &iedModel_MES_MMXU1_A_phsA_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_MES_MMXU1_A_phsA_zeroDb 		= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_MES_MMXU1_A_phsA, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataObject iedModel_MES_MMXU1_A_phsB 					= { DataObjectModelType, "phsB", (ModelNode*) &iedModel_MES_MMXU1_A, (ModelNode*)&iedModel_MES_MMXU1_A_phsC, (ModelNode*) &iedModel_MES_MMXU1_A_phsB_cVal, 0 };
DataAttribute iedModel_MES_MMXU1_A_phsB_cVal 			= { DataAttributeModelType, "cVal", (ModelNode*) &iedModel_MES_MMXU1_A_phsB, (ModelNode*) &iedModel_MES_MMXU1_A_phsB_q, (ModelNode*) &iedModel_MES_MMXU1_A_phsB_cVal_mag, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED,TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_phsB_cVal_mag 		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MMXU1_A_phsB_cVal, NULL, (ModelNode*) &iedModel_MES_MMXU1_A_phsB_cVal_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_phsB_cVal_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MMXU1_A_phsB_cVal_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_phsB_q 			= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MMXU1_A_phsB, (ModelNode*) &iedModel_MES_MMXU1_A_phsB_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_phsB_t 			= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MMXU1_A_phsB, (ModelNode*)&iedModel_MES_MMXU1_A_phsB_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_phsB_db 			= { DataAttributeModelType, "db", (ModelNode*) &iedModel_MES_MMXU1_A_phsB, (ModelNode*) &iedModel_MES_MMXU1_A_phsB_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_MES_MMXU1_A_phsB_zeroDb 		= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_MES_MMXU1_A_phsB, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataObject iedModel_MES_MMXU1_A_phsC 					= { DataObjectModelType, "phsC", (ModelNode*) &iedModel_MES_MMXU1_A, (ModelNode*)&iedModel_MES_MMXU1_A_neut, (ModelNode*) &iedModel_MES_MMXU1_A_phsC_cVal, 0 };
DataAttribute iedModel_MES_MMXU1_A_phsC_cVal 			= { DataAttributeModelType, "cVal", (ModelNode*) &iedModel_MES_MMXU1_A_phsC, (ModelNode*) &iedModel_MES_MMXU1_A_phsC_q, (ModelNode*) &iedModel_MES_MMXU1_A_phsC_cVal_mag, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED,TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_phsC_cVal_mag 		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MMXU1_A_phsC_cVal, NULL, (ModelNode*) &iedModel_MES_MMXU1_A_phsC_cVal_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_phsC_cVal_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MMXU1_A_phsC_cVal_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_phsC_q 			= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MMXU1_A_phsC, (ModelNode*) &iedModel_MES_MMXU1_A_phsC_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_phsC_t 			= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MMXU1_A_phsC,  (ModelNode*) &iedModel_MES_MMXU1_A_phsC_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_phsC_db 			= { DataAttributeModelType, "db", (ModelNode*) &iedModel_MES_MMXU1_A_phsC, (ModelNode*) &iedModel_MES_MMXU1_A_phsC_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_MES_MMXU1_A_phsC_zeroDb 		= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_MES_MMXU1_A_phsC, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataObject iedModel_MES_MMXU1_A_neut 					= { DataObjectModelType, "neut", (ModelNode*) &iedModel_MES_MMXU1_A, (ModelNode*)NULL, (ModelNode*) &iedModel_MES_MMXU1_A_neut_cVal, 0 };
DataAttribute iedModel_MES_MMXU1_A_neut_cVal 			= { DataAttributeModelType, "cVal", (ModelNode*) &iedModel_MES_MMXU1_A_neut, (ModelNode*) &iedModel_MES_MMXU1_A_neut_q, (ModelNode*) &iedModel_MES_MMXU1_A_neut_cVal_mag, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED,TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_neut_cVal_mag 		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MMXU1_A_neut_cVal, NULL, (ModelNode*) &iedModel_MES_MMXU1_A_neut_cVal_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_neut_cVal_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MMXU1_A_neut_cVal_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_neut_q 			= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MMXU1_A_neut, (ModelNode*) &iedModel_MES_MMXU1_A_neut_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_neut_t 			= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MMXU1_A_neut,  (ModelNode*) &iedModel_MES_MMXU1_A_neut_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_MES_MMXU1_A_neut_db 			= { DataAttributeModelType, "db", (ModelNode*) &iedModel_MES_MMXU1_A_neut, (ModelNode*) &iedModel_MES_MMXU1_A_neut_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_MES_MMXU1_A_neut_zeroDb 		= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_MES_MMXU1_A_neut, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };

DataObject iedModel_MES_MMXU1_phV 						= { DataObjectModelType, "PhV", (ModelNode*) &iedModel_MES_MMXU1, (ModelNode*) &iedModel_MES_MMXU1_PPV, (ModelNode*) &iedModel_MES_MMXU1_phV_phsA, 0 };
DataObject iedModel_MES_MMXU1_phV_phsA 					= { DataObjectModelType, "phsA", (ModelNode*) &iedModel_MES_MMXU1_phV, (ModelNode*)&iedModel_MES_MMXU1_phV_phsB, (ModelNode*) &iedModel_MES_MMXU1_phV_phsA_cVal, 0 };
DataAttribute iedModel_MES_MMXU1_phV_phsA_cVal 			= { DataAttributeModelType, "cVal", (ModelNode*) &iedModel_MES_MMXU1_phV_phsA, (ModelNode*) &iedModel_MES_MMXU1_phV_phsA_q, (ModelNode*) &iedModel_MES_MMXU1_phV_phsA_cVal_mag, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED,TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_phsA_cVal_mag 		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MMXU1_phV_phsA_cVal, NULL, (ModelNode*) &iedModel_MES_MMXU1_phV_phsA_cVal_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_phsA_cVal_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MMXU1_phV_phsA_cVal_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_phsA_q 			= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MMXU1_phV_phsA, (ModelNode*) &iedModel_MES_MMXU1_phV_phsA_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_phsA_t 			= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MMXU1_phV_phsA,  (ModelNode*) &iedModel_MES_MMXU1_phV_phsA_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_phsA_db 			= { DataAttributeModelType, "db", (ModelNode*) &iedModel_MES_MMXU1_phV_phsA, (ModelNode*) &iedModel_MES_MMXU1_phV_phsA_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_MES_MMXU1_phV_phsA_zeroDb 		= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_MES_MMXU1_phV_phsA, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };

DataObject iedModel_MES_MMXU1_phV_phsB 					= { DataObjectModelType, "phsB", (ModelNode*) &iedModel_MES_MMXU1_phV, (ModelNode*)&iedModel_MES_MMXU1_phV_phsC, (ModelNode*) &iedModel_MES_MMXU1_phV_phsB_cVal, 0 };
DataAttribute iedModel_MES_MMXU1_phV_phsB_cVal 			= { DataAttributeModelType, "cVal", (ModelNode*) &iedModel_MES_MMXU1_phV_phsB, (ModelNode*) &iedModel_MES_MMXU1_phV_phsB_q, (ModelNode*) &iedModel_MES_MMXU1_phV_phsB_cVal_mag, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED,TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_phsB_cVal_mag 		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MMXU1_phV_phsB_cVal, NULL, (ModelNode*) &iedModel_MES_MMXU1_phV_phsB_cVal_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_phsB_cVal_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MMXU1_phV_phsB_cVal_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_phsB_q 			= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MMXU1_phV_phsB, (ModelNode*) &iedModel_MES_MMXU1_phV_phsB_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_phsB_t 			= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MMXU1_phV_phsB,  (ModelNode*) &iedModel_MES_MMXU1_phV_phsB_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_phsB_db 			= { DataAttributeModelType, "db", (ModelNode*) &iedModel_MES_MMXU1_phV_phsB, (ModelNode*) &iedModel_MES_MMXU1_phV_phsB_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_MES_MMXU1_phV_phsB_zeroDb 		= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_MES_MMXU1_phV_phsB, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };

DataObject iedModel_MES_MMXU1_phV_phsC 					= { DataObjectModelType, "phsC", (ModelNode*) &iedModel_MES_MMXU1_phV, (ModelNode*)&iedModel_MES_MMXU1_phV_neut, (ModelNode*) &iedModel_MES_MMXU1_phV_phsC_cVal, 0 };
DataAttribute iedModel_MES_MMXU1_phV_phsC_cVal 			= { DataAttributeModelType, "cVal", (ModelNode*) &iedModel_MES_MMXU1_phV_phsC, (ModelNode*) &iedModel_MES_MMXU1_phV_phsC_q, (ModelNode*) &iedModel_MES_MMXU1_phV_phsC_cVal_mag, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED,TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_phsC_cVal_mag		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MMXU1_phV_phsC_cVal, NULL, (ModelNode*) &iedModel_MES_MMXU1_phV_phsC_cVal_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_phsC_cVal_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MMXU1_phV_phsC_cVal_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_phsC_q 			= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MMXU1_phV_phsC, (ModelNode*) &iedModel_MES_MMXU1_phV_phsC_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_phsC_t 			= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MMXU1_phV_phsC,  (ModelNode*) &iedModel_MES_MMXU1_phV_phsC_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_phsC_db 			= { DataAttributeModelType, "db", (ModelNode*) &iedModel_MES_MMXU1_phV_phsC, (ModelNode*) &iedModel_MES_MMXU1_phV_phsC_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_MES_MMXU1_phV_phsC_zeroDb 		= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_MES_MMXU1_phV_phsC, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };

DataObject iedModel_MES_MMXU1_phV_neut 					= { DataObjectModelType, "neut", (ModelNode*) &iedModel_MES_MMXU1_phV, (ModelNode*)&iedModel_MES_MMXU1_phV_neut1, (ModelNode*) &iedModel_MES_MMXU1_phV_neut_cVal, 0 };
DataAttribute iedModel_MES_MMXU1_phV_neut_cVal 			= { DataAttributeModelType, "cVal", (ModelNode*) &iedModel_MES_MMXU1_phV_neut, (ModelNode*) &iedModel_MES_MMXU1_phV_neut_q, (ModelNode*) &iedModel_MES_MMXU1_phV_neut_cVal_mag, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED,TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_neut_cVal_mag		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MMXU1_phV_neut_cVal, NULL, (ModelNode*) &iedModel_MES_MMXU1_phV_neut_cVal_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_neut_cVal_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MMXU1_phV_neut_cVal_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_neut_q 			= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MMXU1_phV_neut, (ModelNode*) &iedModel_MES_MMXU1_phV_neut_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_neut_t 			= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MMXU1_phV_neut,  (ModelNode*) &iedModel_MES_MMXU1_phV_neut_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_neut_db 			= { DataAttributeModelType, "db", (ModelNode*) &iedModel_MES_MMXU1_phV_neut, (ModelNode*) &iedModel_MES_MMXU1_phV_neut_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_MES_MMXU1_phV_neut_zeroDb 		= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_MES_MMXU1_phV_neut, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };

DataObject iedModel_MES_MMXU1_phV_neut1 					= { DataObjectModelType, "neut1", (ModelNode*) &iedModel_MES_MMXU1_phV, (ModelNode*)NULL /*&iedModel_MES_MMXU1_phV_neut1*/, (ModelNode*) &iedModel_MES_MMXU1_phV_neut1_cVal, 0 };
DataAttribute iedModel_MES_MMXU1_phV_neut1_cVal 			= { DataAttributeModelType, "cVal", (ModelNode*) &iedModel_MES_MMXU1_phV_neut1, (ModelNode*) &iedModel_MES_MMXU1_phV_neut1_q, (ModelNode*) &iedModel_MES_MMXU1_phV_neut1_cVal_mag, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED,TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_neut1_cVal_mag		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MMXU1_phV_neut1_cVal, NULL, (ModelNode*) &iedModel_MES_MMXU1_phV_neut1_cVal_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_neut1_cVal_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MMXU1_phV_neut1_cVal_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_neut1_q 			= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MMXU1_phV_neut1, (ModelNode*) &iedModel_MES_MMXU1_phV_neut1_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_neut1_t 			= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MMXU1_phV_neut1,  (ModelNode*) &iedModel_MES_MMXU1_phV_neut1_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_MES_MMXU1_phV_neut1_db 			= { DataAttributeModelType, "db", (ModelNode*) &iedModel_MES_MMXU1_phV_neut1, (ModelNode*) &iedModel_MES_MMXU1_phV_neut1_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_MES_MMXU1_phV_neut1_zeroDb 		= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_MES_MMXU1_phV_neut1, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };

// PPV
DataObject iedModel_MES_MMXU1_PPV 						= { DataObjectModelType, "PPV", (ModelNode*) &iedModel_MES_MMXU1, (ModelNode*) &iedModel_MES_MMXU1_totW, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsA, 0 };
DataObject iedModel_MES_MMXU1_PPV_phsA 					= { DataObjectModelType, "phsAB", (ModelNode*) &iedModel_MES_MMXU1_PPV, (ModelNode*)&iedModel_MES_MMXU1_PPV_phsB, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsA_cVal, 0 };
DataAttribute iedModel_MES_MMXU1_PPV_phsA_cVal 			= { DataAttributeModelType, "cVal", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsA, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsA_q, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsA_cVal_mag, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED,TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_PPV_phsA_cVal_mag 		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsA_cVal, NULL, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsA_cVal_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_PPV_phsA_cVal_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsA_cVal_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MMXU1_PPV_phsA_q 			= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsA, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsA_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MMXU1_PPV_phsA_t 			= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsA,  (ModelNode*) &iedModel_MES_MMXU1_PPV_phsA_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_MES_MMXU1_PPV_phsA_db 			= { DataAttributeModelType, "db", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsA, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsA_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_MES_MMXU1_PPV_phsA_zeroDb 		= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsA, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };

DataObject iedModel_MES_MMXU1_PPV_phsB 					= { DataObjectModelType, "phsBC", (ModelNode*) &iedModel_MES_MMXU1_PPV, (ModelNode*)&iedModel_MES_MMXU1_PPV_phsC, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsB_cVal, 0 };
DataAttribute iedModel_MES_MMXU1_PPV_phsB_cVal 			= { DataAttributeModelType, "cVal", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsB, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsB_q, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsB_cVal_mag, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED,TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_PPV_phsB_cVal_mag 		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsB_cVal, NULL, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsB_cVal_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_PPV_phsB_cVal_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsB_cVal_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MMXU1_PPV_phsB_q 			= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsB, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsB_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MMXU1_PPV_phsB_t 			= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsB,  (ModelNode*) &iedModel_MES_MMXU1_PPV_phsB_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_MES_MMXU1_PPV_phsB_db 			= { DataAttributeModelType, "db", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsB, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsB_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_MES_MMXU1_PPV_phsB_zeroDb 		= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsB, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };

DataObject iedModel_MES_MMXU1_PPV_phsC 					= { DataObjectModelType, "phsCA", (ModelNode*) &iedModel_MES_MMXU1_PPV, (ModelNode*)NULL /*&iedModel_MES_MMXU1_PPV_phsC*/, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsC_cVal, 0 };
DataAttribute iedModel_MES_MMXU1_PPV_phsC_cVal 			= { DataAttributeModelType, "cVal", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsC, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsC_q, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsC_cVal_mag, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED,TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_PPV_phsC_cVal_mag		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsC_cVal, NULL, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsC_cVal_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_PPV_phsC_cVal_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsC_cVal_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MMXU1_PPV_phsC_q 			= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsC, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsC_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MMXU1_PPV_phsC_t 			= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsC,  (ModelNode*) &iedModel_MES_MMXU1_PPV_phsC_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_MES_MMXU1_PPV_phsC_db 			= { DataAttributeModelType, "db", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsC, (ModelNode*) &iedModel_MES_MMXU1_PPV_phsC_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_MES_MMXU1_PPV_phsC_zeroDb 		= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_MES_MMXU1_PPV_phsC, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };

// totW
DataObject    iedModel_MES_MMXU1_totW 					= { DataObjectModelType, "TotW", (ModelNode*) &iedModel_MES_MMXU1, (ModelNode*)&iedModel_MES_MMXU1_totVAr, (ModelNode*) &iedModel_MES_MMXU1_totW_mag, 0 };
DataAttribute iedModel_MES_MMXU1_totW_mag 				= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MMXU1_totW,(ModelNode*)&iedModel_MES_MMXU1_totW_q, (ModelNode*) &iedModel_MES_MMXU1_totW_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_totW_mag_f 			= { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MMXU1_totW_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MMXU1_totW_q 				= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MMXU1_totW, (ModelNode*) &iedModel_MES_MMXU1_totW_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MMXU1_totW_t 				= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MMXU1_totW, (ModelNode*) &iedModel_MES_MMXU1_totW_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_MES_MMXU1_totW_db 				= { DataAttributeModelType, "db", (ModelNode*) &iedModel_MES_MMXU1_totW, (ModelNode*) &iedModel_MES_MMXU1_totW_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0};
DataAttribute iedModel_MES_MMXU1_totW_zeroDb 			= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_MES_MMXU1_totW, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0};

// totVAr
DataObject    iedModel_MES_MMXU1_totVAr 				= { DataObjectModelType, "TotVAr", (ModelNode*) &iedModel_MES_MMXU1, (ModelNode*)&iedModel_MES_MMXU1_totPF, (ModelNode*) &iedModel_MES_MMXU1_totVAr_mag, 0 };
DataAttribute iedModel_MES_MMXU1_totVAr_mag 			= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MMXU1_totVAr,(ModelNode*)&iedModel_MES_MMXU1_totVAr_q, (ModelNode*) &iedModel_MES_MMXU1_totVAr_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_totVAr_mag_f 			= { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MMXU1_totVAr_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MMXU1_totVAr_q 				= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MMXU1_totVAr, (ModelNode*) &iedModel_MES_MMXU1_totVAr_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MMXU1_totVAr_t 				= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MMXU1_totVAr, (ModelNode*) &iedModel_MES_MMXU1_totVAr_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_MES_MMXU1_totVAr_db 				= { DataAttributeModelType, "db", (ModelNode*) &iedModel_MES_MMXU1_totVAr, (ModelNode*) &iedModel_MES_MMXU1_totVAr_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0};
DataAttribute iedModel_MES_MMXU1_totVAr_zeroDb 			= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_MES_MMXU1_totVAr, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0};

// totPF
DataObject    iedModel_MES_MMXU1_totPF 					= { DataObjectModelType, "TotPF", (ModelNode*) &iedModel_MES_MMXU1, (ModelNode*)&iedModel_MES_MMXU1_Hz, (ModelNode*) &iedModel_MES_MMXU1_totPF_mag, 0 };
DataAttribute iedModel_MES_MMXU1_totPF_mag 				= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MMXU1_totPF,(ModelNode*)&iedModel_MES_MMXU1_totPF_q, (ModelNode*) &iedModel_MES_MMXU1_totPF_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MMXU1_totPF_mag_f 			= { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MMXU1_totPF_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MMXU1_totPF_q 				= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MMXU1_totPF, (ModelNode*) &iedModel_MES_MMXU1_totPF_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MMXU1_totPF_t 				= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MMXU1_totPF, (ModelNode*) &iedModel_MES_MMXU1_totPF_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_MES_MMXU1_totPF_db 				= { DataAttributeModelType, "db", (ModelNode*) &iedModel_MES_MMXU1_totPF, (ModelNode*) &iedModel_MES_MMXU1_totPF_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0};
DataAttribute iedModel_MES_MMXU1_totPF_zeroDb 			= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_MES_MMXU1_totPF, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0};

// HZ
DataObject    iedModel_MES_MMXU1_Hz 				= { DataObjectModelType, "Hz", (ModelNode*) &iedModel_MES_MMXU1, (ModelNode*)NULL, (ModelNode*) &iedModel_MES_MMXU1_Hz_mag, 0 };
DataAttribute iedModel_MES_MMXU1_Hz_mag 			= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MMXU1_Hz,(ModelNode*)&iedModel_MES_MMXU1_Hz_q, (ModelNode*) &iedModel_MES_MMXU1_Hz_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0 };
DataAttribute iedModel_MES_MMXU1_Hz_mag_f 			= { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MMXU1_Hz_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0 };
DataAttribute iedModel_MES_MMXU1_Hz_q 				= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MMXU1_Hz, (ModelNode*) &iedModel_MES_MMXU1_Hz_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MMXU1_Hz_t 				= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MMXU1_Hz, (ModelNode*) &iedModel_MES_MMXU1_Hz_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0 };
DataAttribute iedModel_MES_MMXU1_Hz_db 				= { DataAttributeModelType, "db", (ModelNode*) &iedModel_MES_MMXU1_Hz, (ModelNode*) &iedModel_MES_MMXU1_Hz_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_MES_MMXU1_Hz_zeroDb 			= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_MES_MMXU1_Hz, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };

/*******************************************************
 * MSQI1
 *******************************************************/
LogicalNode iedModel_MES_MSQI1 						= { LogicalNodeModelType,    "MSQI1",    (ModelNode*)&iedModel_Generic_MES,   (ModelNode*)&iedModel_MES_RFLO1,    (ModelNode*) &iedModel_MES_MSQI1_Mod};

DataObject iedModel_MES_MSQI1_Mod 					= { DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_MES_MSQI1,    (ModelNode*) &iedModel_MES_MSQI1_Beh,    (ModelNode*) &iedModel_MES_MSQI1_Mod_q,0};
DataAttribute iedModel_MES_MSQI1_Mod_q 				= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_MES_MSQI1_Mod,    (ModelNode*) &iedModel_MES_MSQI1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_MES_MSQI1_Mod_t 				= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_MES_MSQI1_Mod,    (ModelNode*) &iedModel_MES_MSQI1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_MES_MSQI1_Mod_stVal 			= { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_MES_MSQI1_Mod,    (ModelNode*) &iedModel_MES_MSQI1_Mod_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MSQI1_Mod_ctlModel 		= { DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_MES_MSQI1_Mod,    NULL,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};

DataObject iedModel_MES_MSQI1_Beh 					= { DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_MES_MSQI1,    (ModelNode*) &iedModel_MES_MSQI1_Health,    (ModelNode*) &iedModel_MES_MSQI1_Beh_stVal,0};
DataAttribute iedModel_MES_MSQI1_Beh_stVal 			= { DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_MES_MSQI1_Beh,    (ModelNode*) &iedModel_MES_MSQI1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MSQI1_Beh_q 				= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_MES_MSQI1_Beh,    (ModelNode*) &iedModel_MES_MSQI1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MSQI1_Beh_t 				= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_MES_MSQI1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_MES_MSQI1_Health 				= { DataObjectModelType,    "Health",    (ModelNode*) &iedModel_MES_MSQI1,    (ModelNode*) &iedModel_MES_MSQI1_NamPlt,    (ModelNode*) &iedModel_MES_MSQI1_Health_stVal,0};
DataAttribute iedModel_MES_MSQI1_Health_stVal 		= { DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_MES_MSQI1_Health,    (ModelNode*) &iedModel_MES_MSQI1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_MES_MSQI1_Health_q		 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_MES_MSQI1_Health,    (ModelNode*) &iedModel_MES_MSQI1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_MES_MSQI1_Health_t 			= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_MES_MSQI1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_MES_MSQI1_NamPlt 				= { DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_MES_MSQI1,    (ModelNode*) &iedModel_MES_MSQI1_SeqA, (ModelNode*) &iedModel_MES_MSQI1_NamPlt_vendor,0};
DataAttribute iedModel_MES_MSQI1_NamPlt_vendor 		= { DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_MES_MSQI1_NamPlt,    (ModelNode*) &iedModel_MES_MSQI1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_MES_MSQI1_NamPlt_swRev	 	= { DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_MES_MSQI1_NamPlt,    (ModelNode*) &iedModel_MES_MSQI1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_MES_MSQI1_NamPlt_d 			= { DataAttributeModelType,    "d",    (ModelNode*) &iedModel_MES_MSQI1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// SeqA
DataObject iedModel_MES_MSQI1_SeqA 					= { DataObjectModelType, "SeqA", (ModelNode*) &iedModel_MES_MMXU1, (ModelNode*) &iedModel_MES_MSQI1_SeqU, (ModelNode*) &iedModel_MES_MSQI1_SeqA_I0, 0 };

DataObject iedModel_MES_MSQI1_SeqA_I0 				= { DataObjectModelType, "I0", (ModelNode*) &iedModel_MES_MSQI1_SeqA, (ModelNode*)&iedModel_MES_MSQI1_SeqA_I2, (ModelNode*) &iedModel_MES_MSQI1_SeqA_I0_cVal, 0 };
DataAttribute iedModel_MES_MSQI1_SeqA_I0_cVal 		= { DataAttributeModelType, "cVal", (ModelNode*) &iedModel_MES_MSQI1_SeqA_I0, (ModelNode*) &iedModel_MES_MSQI1_SeqA_I0_q, (ModelNode*) &iedModel_MES_MSQI1_SeqA_I0_cVal_mag, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED,TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqA_I0_cVal_mag 	= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MSQI1_SeqA_I0_cVal, NULL, (ModelNode*) &iedModel_MES_MSQI1_SeqA_I0_cVal_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqA_I0_cVal_mag_f = { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MSQI1_SeqA_I0_cVal_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqA_I0_q 			= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MSQI1_SeqA_I0, (ModelNode*) &iedModel_MES_MSQI1_SeqA_I0_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqA_I0_t 			= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MSQI1_SeqA_I0, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};

DataObject iedModel_MES_MSQI1_SeqA_I2 				= { DataObjectModelType, "I2", (ModelNode*) &iedModel_MES_MSQI1_SeqA, (ModelNode*)&iedModel_MES_MSQI1_SeqA_3I0, (ModelNode*) &iedModel_MES_MSQI1_SeqA_I2_cVal, 0 };
DataAttribute iedModel_MES_MSQI1_SeqA_I2_cVal 		= { DataAttributeModelType, "cVal", (ModelNode*) &iedModel_MES_MSQI1_SeqA_I2, (ModelNode*) &iedModel_MES_MSQI1_SeqA_I2_q, (ModelNode*) &iedModel_MES_MSQI1_SeqA_I2_cVal_mag, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED,TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqA_I2_cVal_mag 	= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MSQI1_SeqA_I2_cVal, NULL, (ModelNode*) &iedModel_MES_MSQI1_SeqA_I2_cVal_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqA_I2_cVal_mag_f = { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MSQI1_SeqA_I2_cVal_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqA_I2_q 			= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MSQI1_SeqA_I2, (ModelNode*) &iedModel_MES_MSQI1_SeqA_I2_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqA_I2_t 			= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MSQI1_SeqA_I2, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};

DataObject iedModel_MES_MSQI1_SeqA_3I0 				= { DataObjectModelType, "3I0", (ModelNode*) &iedModel_MES_MSQI1_SeqA, (ModelNode*)&iedModel_MES_MSQI1_SeqA_SeqT, (ModelNode*) &iedModel_MES_MSQI1_SeqA_3I0_cVal, 0 };
DataAttribute iedModel_MES_MSQI1_SeqA_3I0_cVal 		= { DataAttributeModelType, "cVal", (ModelNode*) &iedModel_MES_MSQI1_SeqA_3I0, (ModelNode*) &iedModel_MES_MSQI1_SeqA_3I0_q, (ModelNode*) &iedModel_MES_MSQI1_SeqA_3I0_cVal_mag, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED,TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqA_3I0_cVal_mag 	= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MSQI1_SeqA_3I0_cVal, NULL, (ModelNode*) &iedModel_MES_MSQI1_SeqA_3I0_cVal_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqA_3I0_cVal_mag_f = { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MSQI1_SeqA_3I0_cVal_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqA_3I0_q 		= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MSQI1_SeqA_3I0, (ModelNode*) &iedModel_MES_MSQI1_SeqA_3I0_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqA_3I0_t 		= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MSQI1_SeqA_3I0, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};

DataAttribute iedModel_MES_MSQI1_SeqA_SeqT 			= { DataAttributeModelType, "SeqT", (ModelNode*) &iedModel_MES_MSQI1_SeqA, NULL , NULL, 0,  IEC61850_FC_MX, IEC61850_ENUMERATED,TRG_OPT_NO, NULL,0};

// SeqU
DataObject iedModel_MES_MSQI1_SeqU 					= { DataObjectModelType, "SeqU", (ModelNode*) &iedModel_MES_MMXU1, NULL, (ModelNode*) &iedModel_MES_MSQI1_SeqU_U0, 0 };

DataObject iedModel_MES_MSQI1_SeqU_U0 				= { DataObjectModelType, "U0", (ModelNode*) &iedModel_MES_MSQI1_SeqU, (ModelNode*)&iedModel_MES_MSQI1_SeqU_U2, (ModelNode*) &iedModel_MES_MSQI1_SeqU_U0_cVal, 0 };
DataAttribute iedModel_MES_MSQI1_SeqU_U0_cVal 		= { DataAttributeModelType, "cVal", (ModelNode*) &iedModel_MES_MSQI1_SeqU_U0, (ModelNode*) &iedModel_MES_MSQI1_SeqU_U0_q, (ModelNode*) &iedModel_MES_MSQI1_SeqU_U0_cVal_mag, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED,TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqU_U0_cVal_mag 	= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MSQI1_SeqU_U0_cVal, NULL, (ModelNode*) &iedModel_MES_MSQI1_SeqU_U0_cVal_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqU_U0_cVal_mag_f = { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MSQI1_SeqU_U0_cVal_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqU_U0_q 			= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MSQI1_SeqU_U0, (ModelNode*) &iedModel_MES_MSQI1_SeqU_U0_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqU_U0_t 			= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MSQI1_SeqU_U0, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};

DataObject iedModel_MES_MSQI1_SeqU_U2 				= { DataObjectModelType, "U2", (ModelNode*) &iedModel_MES_MSQI1_SeqU, (ModelNode*)&iedModel_MES_MSQI1_SeqU_3U0, (ModelNode*) &iedModel_MES_MSQI1_SeqU_U2_cVal, 0 };
DataAttribute iedModel_MES_MSQI1_SeqU_U2_cVal 		= { DataAttributeModelType, "cVal", (ModelNode*) &iedModel_MES_MSQI1_SeqU_U2, (ModelNode*) &iedModel_MES_MSQI1_SeqU_U2_q, (ModelNode*) &iedModel_MES_MSQI1_SeqU_U2_cVal_mag, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED,TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqU_U2_cVal_mag 	= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MSQI1_SeqU_U2_cVal, NULL, (ModelNode*) &iedModel_MES_MSQI1_SeqU_U2_cVal_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqU_U2_cVal_mag_f = { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MSQI1_SeqU_U2_cVal_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqU_U2_q 			= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MSQI1_SeqU_U2, (ModelNode*) &iedModel_MES_MSQI1_SeqU_U2_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqU_U2_t 			= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MSQI1_SeqU_U2, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};

DataObject iedModel_MES_MSQI1_SeqU_3U0 				= { DataObjectModelType, "3U0", (ModelNode*) &iedModel_MES_MSQI1_SeqU, (ModelNode*)&iedModel_MES_MSQI1_SeqU_SeqT, (ModelNode*) &iedModel_MES_MSQI1_SeqU_3U0_cVal, 0 };
DataAttribute iedModel_MES_MSQI1_SeqU_3U0_cVal 		= { DataAttributeModelType, "cVal", (ModelNode*) &iedModel_MES_MSQI1_SeqU_3U0, (ModelNode*) &iedModel_MES_MSQI1_SeqU_3U0_q, (ModelNode*) &iedModel_MES_MSQI1_SeqU_3U0_cVal_mag, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED,TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqU_3U0_cVal_mag 	= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_MSQI1_SeqU_3U0_cVal, NULL, (ModelNode*) &iedModel_MES_MSQI1_SeqU_3U0_cVal_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqU_3U0_cVal_mag_f = { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_MSQI1_SeqU_3U0_cVal_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqU_3U0_q 			= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_MSQI1_SeqU_3U0, (ModelNode*) &iedModel_MES_MSQI1_SeqU_3U0_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_MSQI1_SeqU_3U0_t 			= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_MSQI1_SeqU_3U0, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};

DataAttribute iedModel_MES_MSQI1_SeqU_SeqT 			= { DataAttributeModelType, "SeqT", (ModelNode*) &iedModel_MES_MSQI1_SeqU, NULL , NULL, 0,  IEC61850_FC_MX, IEC61850_ENUMERATED,TRG_OPT_NO, NULL,0};

/****************************************************************
* MES_RFLO1
*****************************************************************/
LogicalNode iedModel_MES_RFLO1 					= {    LogicalNodeModelType,    "RFLO1",    (ModelNode*)&iedModel_Generic_MES,   NULL,    (ModelNode*) &iedModel_MES_RFLO1_Mod};

DataObject iedModel_MES_RFLO1_Mod 				= {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_MES_RFLO1,    (ModelNode*) &iedModel_MES_RFLO1_Beh,    (ModelNode*) &iedModel_MES_RFLO1_Mod_q,0};
DataAttribute iedModel_MES_RFLO1_Mod_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_MES_RFLO1_Mod,    (ModelNode*) &iedModel_MES_RFLO1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_MES_RFLO1_Mod_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_MES_RFLO1_Mod,    (ModelNode*) &iedModel_MES_RFLO1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_MES_RFLO1_Mod_stVal 		= { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_MES_RFLO1_Mod,    (ModelNode*) &iedModel_MES_RFLO1_Mod_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_RFLO1_Mod_ctlModel 	= {   DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_MES_RFLO1_Mod,    NULL,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};

DataObject iedModel_MES_RFLO1_Beh 				= {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_MES_RFLO1,    (ModelNode*) &iedModel_MES_RFLO1_Health,    (ModelNode*) &iedModel_MES_RFLO1_Beh_stVal,0};
DataAttribute iedModel_MES_RFLO1_Beh_stVal 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_MES_RFLO1_Beh,    (ModelNode*) &iedModel_MES_RFLO1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_RFLO1_Beh_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_MES_RFLO1_Beh,    (ModelNode*) &iedModel_MES_RFLO1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_RFLO1_Beh_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_MES_RFLO1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_MES_RFLO1_Health 			= {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_MES_RFLO1,    (ModelNode*) &iedModel_MES_RFLO1_NamPlt,    (ModelNode*) &iedModel_MES_RFLO1_Health_stVal,0};
DataAttribute iedModel_MES_RFLO1_Health_stVal	= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_MES_RFLO1_Health,    (ModelNode*) &iedModel_MES_RFLO1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_MES_RFLO1_Health_q 		= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_MES_RFLO1_Health,    (ModelNode*) &iedModel_MES_RFLO1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_MES_RFLO1_Health_t 		= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_MES_RFLO1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_MES_RFLO1_NamPlt 			= {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_MES_RFLO1,    (ModelNode*) &iedModel_MES_RFLO1_Fltz, (ModelNode*) &iedModel_MES_RFLO1_NamPlt_vendor,0};
DataAttribute iedModel_MES_RFLO1_NamPlt_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_MES_RFLO1_NamPlt,    (ModelNode*) &iedModel_MES_RFLO1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_MES_RFLO1_NamPlt_swRev 	= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_MES_RFLO1_NamPlt,    (ModelNode*) &iedModel_MES_RFLO1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_MES_RFLO1_NamPlt_d 		= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_MES_RFLO1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject    iedModel_MES_RFLO1_Fltz 			= { DataObjectModelType, "Fltz", (ModelNode*) &iedModel_MES_RFLO1, (ModelNode*)&iedModel_MES_RFLO1_FltDiskm, (ModelNode*) &iedModel_MES_RFLO1_Fltz_mag, 0 };
DataAttribute iedModel_MES_RFLO1_Fltz_mag 		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_RFLO1_Fltz,(ModelNode*)&iedModel_MES_RFLO1_Fltz_q, (ModelNode*) &iedModel_MES_RFLO1_Fltz_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_RFLO1_Fltz_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_RFLO1_Fltz_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_MES_RFLO1_Fltz_q 		= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_RFLO1_Fltz, (ModelNode*) &iedModel_MES_RFLO1_Fltz_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_RFLO1_Fltz_t 		= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_RFLO1_Fltz, (ModelNode*) &iedModel_MES_RFLO1_Fltz_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_MES_RFLO1_Fltz_db 		= { DataAttributeModelType, "db", (ModelNode*) &iedModel_MES_RFLO1_Fltz, (ModelNode*) &iedModel_MES_RFLO1_Fltz_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0};
DataAttribute iedModel_MES_RFLO1_Fltz_zeroDb 	= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_MES_RFLO1_Fltz, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0};

DataObject    iedModel_MES_RFLO1_FltDiskm 			= { DataObjectModelType, "FltDiskm", (ModelNode*) &iedModel_MES_RFLO1, NULL, (ModelNode*) &iedModel_MES_RFLO1_FltDiskm_mag, 0 };
DataAttribute iedModel_MES_RFLO1_FltDiskm_mag 		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_MES_RFLO1_FltDiskm,(ModelNode*)&iedModel_MES_RFLO1_FltDiskm_q, (ModelNode*) &iedModel_MES_RFLO1_FltDiskm_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_MES_RFLO1_FltDiskm_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_MES_RFLO1_FltDiskm_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,TRG_OPT_DATA_CHANGED, NULL,0};
DataAttribute iedModel_MES_RFLO1_FltDiskm_q 		= { DataAttributeModelType, "q", (ModelNode*) &iedModel_MES_RFLO1_FltDiskm, (ModelNode*) &iedModel_MES_RFLO1_FltDiskm_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_MES_RFLO1_FltDiskm_t 		= { DataAttributeModelType, "t", (ModelNode*) &iedModel_MES_RFLO1_FltDiskm, (ModelNode*) &iedModel_MES_RFLO1_FltDiskm_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_MES_RFLO1_FltDiskm_db 		= { DataAttributeModelType, "db", (ModelNode*) &iedModel_MES_RFLO1_FltDiskm, (ModelNode*) &iedModel_MES_RFLO1_FltDiskm_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0};
DataAttribute iedModel_MES_RFLO1_FltDiskm_zeroDb 	= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_MES_RFLO1_FltDiskm, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0};
/*************************************************************************
 * ���������� ���� LN
 *
 * 5.4.18 LN: ��������� ���: PTOC
 *
 * �������� ������� ����������� ���� (LN) ��������� � ��� 61850-5.
 * ������ ���������� ���� ������������ ��� ������������� ������������ ����.
 * ������� ������ � ��������� �������.
 *
 *************************************************************************/

/*******************************************************
 * IPTOC1
 *******************************************************/
LogicalNode iedModel_PROT_IPTOC1 = {    LogicalNodeModelType,    "IPTOC1",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_IPTOC2,    (ModelNode*) &iedModel_PROT_IPTOC1_Mod};

DataObject iedModel_PROT_IPTOC1_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_IPTOC1,    (ModelNode*) &iedModel_PROT_IPTOC1_Beh,    (ModelNode*) &iedModel_PROT_IPTOC1_Mod_q,0};
DataAttribute iedModel_PROT_IPTOC1_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTOC1_Mod,    (ModelNode*) &iedModel_PROT_IPTOC1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC1_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTOC1_Mod,    (ModelNode*) &iedModel_PROT_IPTOC1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC1_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_IPTOC1_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTOC1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_IPTOC1,    (ModelNode*) &iedModel_PROT_IPTOC1_Health,    (ModelNode*) &iedModel_PROT_IPTOC1_Beh_stVal,0};
DataAttribute iedModel_PROT_IPTOC1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_IPTOC1_Beh,    (ModelNode*) &iedModel_PROT_IPTOC1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTOC1_Beh,    (ModelNode*) &iedModel_PROT_IPTOC1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTOC1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTOC1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_IPTOC1,    (ModelNode*) &iedModel_PROT_IPTOC1_NamPlt,    (ModelNode*) &iedModel_PROT_IPTOC1_Health_stVal,0};
DataAttribute iedModel_PROT_IPTOC1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_IPTOC1_Health,    (ModelNode*) &iedModel_PROT_IPTOC1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTOC1_Health,    (ModelNode*) &iedModel_PROT_IPTOC1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTOC1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTOC1_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_IPTOC1,    (ModelNode*) &iedModel_PROT_IPTOC1_Str, (ModelNode*) &iedModel_PROT_IPTOC1_NamPlt_vendor,0};
DataAttribute iedModel_PROT_IPTOC1_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_IPTOC1_NamPlt,    (ModelNode*) &iedModel_PROT_IPTOC1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC1_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_IPTOC1_NamPlt,    (ModelNode*) &iedModel_PROT_IPTOC1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC1_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_IPTOC1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_IPTOC1_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_IPTOC1,  	(ModelNode*)&iedModel_PROT_IPTOC1_Op, (ModelNode*) &iedModel_PROT_IPTOC1_Str_general,0};
DataAttribute iedModel_PROT_IPTOC1_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_IPTOC1_Str,  (ModelNode*) &iedModel_PROT_IPTOC1_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC1_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_IPTOC1_Str,  (ModelNode*) &iedModel_PROT_IPTOC1_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC1_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_IPTOC1_Str,  (ModelNode*) &iedModel_PROT_IPTOC1_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC1_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_IPTOC1_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_IPTOC1_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_IPTOC1,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_IPTOC1_Op_general,0};
DataAttribute iedModel_PROT_IPTOC1_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_IPTOC1_Op,  (ModelNode*) &iedModel_PROT_IPTOC1_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC1_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_IPTOC1_Op,  (ModelNode*) &iedModel_PROT_IPTOC1_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC1_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_IPTOC1_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * IPTOC2
 *******************************************************/
LogicalNode iedModel_PROT_IPTOC2 = {    LogicalNodeModelType,    "IPTOC2",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_IPTOC3,    (ModelNode*) &iedModel_PROT_IPTOC2_Mod};

DataObject iedModel_PROT_IPTOC2_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_IPTOC2,    (ModelNode*) &iedModel_PROT_IPTOC2_Beh,    (ModelNode*) &iedModel_PROT_IPTOC2_Mod_q,0};
DataAttribute iedModel_PROT_IPTOC2_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTOC2_Mod,    (ModelNode*) &iedModel_PROT_IPTOC2_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC2_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTOC2_Mod,    (ModelNode*) &iedModel_PROT_IPTOC2_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC2_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_IPTOC2_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTOC2_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_IPTOC2,    (ModelNode*) &iedModel_PROT_IPTOC2_Health,    (ModelNode*) &iedModel_PROT_IPTOC2_Beh_stVal,0};
DataAttribute iedModel_PROT_IPTOC2_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_IPTOC2_Beh,    (ModelNode*) &iedModel_PROT_IPTOC2_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC2_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTOC2_Beh,    (ModelNode*) &iedModel_PROT_IPTOC2_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC2_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTOC2_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTOC2_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_IPTOC2,    (ModelNode*) &iedModel_PROT_IPTOC2_NamPlt,    (ModelNode*) &iedModel_PROT_IPTOC2_Health_stVal,0};
DataAttribute iedModel_PROT_IPTOC2_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_IPTOC2_Health,    (ModelNode*) &iedModel_PROT_IPTOC2_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC2_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTOC2_Health,    (ModelNode*) &iedModel_PROT_IPTOC2_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC2_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTOC2_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTOC2_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_IPTOC2,    (ModelNode*) &iedModel_PROT_IPTOC2_Str, (ModelNode*) &iedModel_PROT_IPTOC2_NamPlt_vendor,0};
DataAttribute iedModel_PROT_IPTOC2_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_IPTOC2_NamPlt,    (ModelNode*) &iedModel_PROT_IPTOC2_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC2_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_IPTOC2_NamPlt,    (ModelNode*) &iedModel_PROT_IPTOC2_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC2_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_IPTOC2_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_IPTOC2_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_IPTOC2,  	(ModelNode*)&iedModel_PROT_IPTOC2_Op, (ModelNode*) &iedModel_PROT_IPTOC2_Str_general,0};
DataAttribute iedModel_PROT_IPTOC2_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_IPTOC2_Str,  (ModelNode*) &iedModel_PROT_IPTOC2_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC2_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_IPTOC2_Str,  (ModelNode*) &iedModel_PROT_IPTOC2_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC2_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_IPTOC2_Str,  (ModelNode*) &iedModel_PROT_IPTOC2_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC2_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_IPTOC2_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_IPTOC2_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_IPTOC2,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_IPTOC2_Op_general,0};
DataAttribute iedModel_PROT_IPTOC2_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_IPTOC2_Op,  (ModelNode*) &iedModel_PROT_IPTOC2_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC2_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_IPTOC2_Op,  (ModelNode*) &iedModel_PROT_IPTOC2_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC2_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_IPTOC2_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * IPTOC3
 *******************************************************/
LogicalNode iedModel_PROT_IPTOC3 = {    LogicalNodeModelType,    "IPTOC3",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_IPTOC4,    (ModelNode*) &iedModel_PROT_IPTOC3_Mod};

DataObject iedModel_PROT_IPTOC3_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_IPTOC3,    (ModelNode*) &iedModel_PROT_IPTOC3_Beh,    (ModelNode*) &iedModel_PROT_IPTOC3_Mod_q,0};
DataAttribute iedModel_PROT_IPTOC3_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTOC3_Mod,    (ModelNode*) &iedModel_PROT_IPTOC3_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC3_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTOC3_Mod,    (ModelNode*) &iedModel_PROT_IPTOC3_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC3_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_IPTOC3_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTOC3_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_IPTOC3,    (ModelNode*) &iedModel_PROT_IPTOC3_Health,    (ModelNode*) &iedModel_PROT_IPTOC3_Beh_stVal,0};
DataAttribute iedModel_PROT_IPTOC3_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_IPTOC3_Beh,    (ModelNode*) &iedModel_PROT_IPTOC3_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC3_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTOC3_Beh,    (ModelNode*) &iedModel_PROT_IPTOC3_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC3_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTOC3_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTOC3_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_IPTOC3,    (ModelNode*) &iedModel_PROT_IPTOC3_NamPlt,    (ModelNode*) &iedModel_PROT_IPTOC3_Health_stVal,0};
DataAttribute iedModel_PROT_IPTOC3_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_IPTOC3_Health,    (ModelNode*) &iedModel_PROT_IPTOC3_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC3_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTOC3_Health,    (ModelNode*) &iedModel_PROT_IPTOC3_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC3_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTOC3_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTOC3_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_IPTOC3,    (ModelNode*) &iedModel_PROT_IPTOC3_Str, (ModelNode*) &iedModel_PROT_IPTOC3_NamPlt_vendor,0};
DataAttribute iedModel_PROT_IPTOC3_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_IPTOC3_NamPlt,    (ModelNode*) &iedModel_PROT_IPTOC3_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC3_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_IPTOC3_NamPlt,    (ModelNode*) &iedModel_PROT_IPTOC3_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC3_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_IPTOC3_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_IPTOC3_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_IPTOC3,  	(ModelNode*)&iedModel_PROT_IPTOC3_Op, (ModelNode*) &iedModel_PROT_IPTOC3_Str_general,0};
DataAttribute iedModel_PROT_IPTOC3_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_IPTOC3_Str,  (ModelNode*) &iedModel_PROT_IPTOC3_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC3_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_IPTOC3_Str,  (ModelNode*) &iedModel_PROT_IPTOC3_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC3_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_IPTOC3_Str,  (ModelNode*) &iedModel_PROT_IPTOC3_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC3_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_IPTOC3_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_IPTOC3_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_IPTOC3,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_IPTOC3_Op_general,0};
DataAttribute iedModel_PROT_IPTOC3_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_IPTOC3_Op,  (ModelNode*) &iedModel_PROT_IPTOC3_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC3_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_IPTOC3_Op,  (ModelNode*) &iedModel_PROT_IPTOC3_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC3_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_IPTOC3_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * IPTOC4
 *******************************************************/
LogicalNode iedModel_PROT_IPTOC4 = {    LogicalNodeModelType,    "IPTOC4",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_IPTOC5,    (ModelNode*) &iedModel_PROT_IPTOC4_Mod};

DataObject iedModel_PROT_IPTOC4_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_IPTOC4,    (ModelNode*) &iedModel_PROT_IPTOC4_Beh,    (ModelNode*) &iedModel_PROT_IPTOC4_Mod_q,0};
DataAttribute iedModel_PROT_IPTOC4_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTOC4_Mod,    (ModelNode*) &iedModel_PROT_IPTOC4_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC4_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTOC4_Mod,    (ModelNode*) &iedModel_PROT_IPTOC4_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC4_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_IPTOC4_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTOC4_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_IPTOC4,    (ModelNode*) &iedModel_PROT_IPTOC4_Health,    (ModelNode*) &iedModel_PROT_IPTOC4_Beh_stVal,0};
DataAttribute iedModel_PROT_IPTOC4_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_IPTOC4_Beh,    (ModelNode*) &iedModel_PROT_IPTOC4_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC4_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTOC4_Beh,    (ModelNode*) &iedModel_PROT_IPTOC4_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC4_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTOC4_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTOC4_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_IPTOC4,    (ModelNode*) &iedModel_PROT_IPTOC4_NamPlt,    (ModelNode*) &iedModel_PROT_IPTOC4_Health_stVal,0};
DataAttribute iedModel_PROT_IPTOC4_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_IPTOC4_Health,    (ModelNode*) &iedModel_PROT_IPTOC4_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC4_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTOC4_Health,    (ModelNode*) &iedModel_PROT_IPTOC4_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC4_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTOC4_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTOC4_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_IPTOC4,    (ModelNode*) &iedModel_PROT_IPTOC4_Str, (ModelNode*) &iedModel_PROT_IPTOC4_NamPlt_vendor,0};
DataAttribute iedModel_PROT_IPTOC4_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_IPTOC4_NamPlt,    (ModelNode*) &iedModel_PROT_IPTOC4_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC4_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_IPTOC4_NamPlt,    (ModelNode*) &iedModel_PROT_IPTOC4_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC4_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_IPTOC4_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_IPTOC4_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_IPTOC4,  	(ModelNode*)&iedModel_PROT_IPTOC4_Op, (ModelNode*) &iedModel_PROT_IPTOC4_Str_general,0};
DataAttribute iedModel_PROT_IPTOC4_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_IPTOC4_Str,  (ModelNode*) &iedModel_PROT_IPTOC4_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC4_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_IPTOC4_Str,  (ModelNode*) &iedModel_PROT_IPTOC4_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC4_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_IPTOC4_Str,  (ModelNode*) &iedModel_PROT_IPTOC4_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC4_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_IPTOC4_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_IPTOC4_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_IPTOC4,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_IPTOC4_Op_general,0};
DataAttribute iedModel_PROT_IPTOC4_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_IPTOC4_Op,  (ModelNode*) &iedModel_PROT_IPTOC4_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC4_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_IPTOC4_Op,  (ModelNode*) &iedModel_PROT_IPTOC4_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC4_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_IPTOC4_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * IPTOC5
 *******************************************************/
LogicalNode iedModel_PROT_IPTOC5 = {    LogicalNodeModelType,    "IPTOC5",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_IPTOC6,    (ModelNode*) &iedModel_PROT_IPTOC5_Mod};

DataObject iedModel_PROT_IPTOC5_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_IPTOC5,    (ModelNode*) &iedModel_PROT_IPTOC5_Beh,    (ModelNode*) &iedModel_PROT_IPTOC5_Mod_q,0};
DataAttribute iedModel_PROT_IPTOC5_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTOC5_Mod,    (ModelNode*) &iedModel_PROT_IPTOC5_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC5_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTOC5_Mod,    (ModelNode*) &iedModel_PROT_IPTOC5_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC5_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_IPTOC5_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTOC5_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_IPTOC5,    (ModelNode*) &iedModel_PROT_IPTOC5_Health,    (ModelNode*) &iedModel_PROT_IPTOC5_Beh_stVal,0};
DataAttribute iedModel_PROT_IPTOC5_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_IPTOC5_Beh,    (ModelNode*) &iedModel_PROT_IPTOC5_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC5_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTOC5_Beh,    (ModelNode*) &iedModel_PROT_IPTOC5_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC5_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTOC5_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTOC5_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_IPTOC5,    (ModelNode*) &iedModel_PROT_IPTOC5_NamPlt,    (ModelNode*) &iedModel_PROT_IPTOC5_Health_stVal,0};
DataAttribute iedModel_PROT_IPTOC5_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_IPTOC5_Health,    (ModelNode*) &iedModel_PROT_IPTOC5_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC5_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTOC5_Health,    (ModelNode*) &iedModel_PROT_IPTOC5_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC5_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTOC5_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTOC5_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_IPTOC5,    (ModelNode*) &iedModel_PROT_IPTOC5_Str, (ModelNode*) &iedModel_PROT_IPTOC5_NamPlt_vendor,0};
DataAttribute iedModel_PROT_IPTOC5_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_IPTOC5_NamPlt,    (ModelNode*) &iedModel_PROT_IPTOC5_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC5_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_IPTOC5_NamPlt,    (ModelNode*) &iedModel_PROT_IPTOC5_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC5_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_IPTOC5_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_IPTOC5_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_IPTOC5,  	(ModelNode*)&iedModel_PROT_IPTOC5_Op, (ModelNode*) &iedModel_PROT_IPTOC5_Str_general,0};
DataAttribute iedModel_PROT_IPTOC5_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_IPTOC5_Str,  (ModelNode*) &iedModel_PROT_IPTOC5_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC5_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_IPTOC5_Str,  (ModelNode*) &iedModel_PROT_IPTOC5_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC5_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_IPTOC5_Str,  (ModelNode*) &iedModel_PROT_IPTOC5_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC5_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_IPTOC5_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_IPTOC5_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_IPTOC5,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_IPTOC5_Op_general,0};
DataAttribute iedModel_PROT_IPTOC5_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_IPTOC5_Op,  (ModelNode*) &iedModel_PROT_IPTOC5_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC5_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_IPTOC5_Op,  (ModelNode*) &iedModel_PROT_IPTOC5_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC5_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_IPTOC5_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};


/*******************************************************
 * iedModel_PROT_IPTOC6
 *******************************************************/
LogicalNode iedModel_PROT_IPTOC6 = {    LogicalNodeModelType,    "IPTOC6",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_IPTUC1,    (ModelNode*) &iedModel_PROT_IPTOC6_Mod};

DataObject iedModel_PROT_IPTOC6_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_IPTOC6,    (ModelNode*) &iedModel_PROT_IPTOC6_Beh,    (ModelNode*) &iedModel_PROT_IPTOC6_Mod_q,0};
DataAttribute iedModel_PROT_IPTOC6_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTOC6_Mod,    (ModelNode*) &iedModel_PROT_IPTOC6_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC6_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTOC6_Mod,    (ModelNode*) &iedModel_PROT_IPTOC6_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC6_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_IPTOC6_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTOC6_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_IPTOC6,    (ModelNode*) &iedModel_PROT_IPTOC6_Health,    (ModelNode*) &iedModel_PROT_IPTOC6_Beh_stVal,0};
DataAttribute iedModel_PROT_IPTOC6_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_IPTOC6_Beh,    (ModelNode*) &iedModel_PROT_IPTOC6_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC6_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTOC6_Beh,    (ModelNode*) &iedModel_PROT_IPTOC6_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC6_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTOC6_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTOC6_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_IPTOC6,    (ModelNode*) &iedModel_PROT_IPTOC6_NamPlt,    (ModelNode*) &iedModel_PROT_IPTOC6_Health_stVal,0};
DataAttribute iedModel_PROT_IPTOC6_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_IPTOC6_Health,    (ModelNode*) &iedModel_PROT_IPTOC6_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC6_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTOC6_Health,    (ModelNode*) &iedModel_PROT_IPTOC6_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC6_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTOC6_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTOC6_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_IPTOC6,    (ModelNode*) &iedModel_PROT_IPTOC6_Str, (ModelNode*) &iedModel_PROT_IPTOC6_NamPlt_vendor,0};
DataAttribute iedModel_PROT_IPTOC6_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_IPTOC6_NamPlt,    (ModelNode*) &iedModel_PROT_IPTOC6_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC6_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_IPTOC6_NamPlt,    (ModelNode*) &iedModel_PROT_IPTOC6_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC6_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_IPTOC6_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_IPTOC6_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_IPTOC6,  	(ModelNode*)&iedModel_PROT_IPTOC6_Op, (ModelNode*) &iedModel_PROT_IPTOC6_Str_general,0};
DataAttribute iedModel_PROT_IPTOC6_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_IPTOC6_Str,  (ModelNode*) &iedModel_PROT_IPTOC6_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC6_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_IPTOC6_Str,  (ModelNode*) &iedModel_PROT_IPTOC6_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC6_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_IPTOC6_Str,  (ModelNode*) &iedModel_PROT_IPTOC6_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC6_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_IPTOC6_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_IPTOC6_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_IPTOC6,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_IPTOC6_Op_general,0};
DataAttribute iedModel_PROT_IPTOC6_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_IPTOC6_Op,  (ModelNode*) &iedModel_PROT_IPTOC6_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC6_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_IPTOC6_Op,  (ModelNode*) &iedModel_PROT_IPTOC6_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTOC6_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_IPTOC6_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * IPTUC1
 *******************************************************/
LogicalNode iedModel_PROT_IPTUC1 = {    LogicalNodeModelType,    "IPTUC1",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_I20PTOC1,    (ModelNode*) &iedModel_PROT_IPTUC1_Mod};

DataObject iedModel_PROT_IPTUC1_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_IPTUC1,    (ModelNode*) &iedModel_PROT_IPTUC1_Beh,    (ModelNode*) &iedModel_PROT_IPTUC1_Mod_q,0};
DataAttribute iedModel_PROT_IPTUC1_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTUC1_Mod,    (ModelNode*) &iedModel_PROT_IPTUC1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTUC1_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTUC1_Mod,    (ModelNode*) &iedModel_PROT_IPTUC1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTUC1_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_IPTUC1_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTUC1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_IPTUC1,    (ModelNode*) &iedModel_PROT_IPTUC1_Health,    (ModelNode*) &iedModel_PROT_IPTUC1_Beh_stVal,0};
DataAttribute iedModel_PROT_IPTUC1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_IPTUC1_Beh,    (ModelNode*) &iedModel_PROT_IPTUC1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTUC1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTUC1_Beh,    (ModelNode*) &iedModel_PROT_IPTUC1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTUC1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTUC1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTUC1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_IPTUC1,    (ModelNode*) &iedModel_PROT_IPTUC1_NamPlt,    (ModelNode*) &iedModel_PROT_IPTUC1_Health_stVal,0};
DataAttribute iedModel_PROT_IPTUC1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_IPTUC1_Health,    (ModelNode*) &iedModel_PROT_IPTUC1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTUC1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_IPTUC1_Health,    (ModelNode*) &iedModel_PROT_IPTUC1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTUC1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_IPTUC1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_IPTUC1_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_IPTUC1,    (ModelNode*) &iedModel_PROT_IPTUC1_Str, (ModelNode*) &iedModel_PROT_IPTUC1_NamPlt_vendor,0};
DataAttribute iedModel_PROT_IPTUC1_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_IPTUC1_NamPlt,    (ModelNode*) &iedModel_PROT_IPTUC1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTUC1_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_IPTUC1_NamPlt,    (ModelNode*) &iedModel_PROT_IPTUC1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTUC1_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_IPTUC1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_IPTUC1_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_IPTUC1,  	(ModelNode*)&iedModel_PROT_IPTUC1_Op, (ModelNode*) &iedModel_PROT_IPTUC1_Str_general,0};
DataAttribute iedModel_PROT_IPTUC1_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_IPTUC1_Str,  (ModelNode*) &iedModel_PROT_IPTUC1_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTUC1_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_IPTUC1_Str,  (ModelNode*) &iedModel_PROT_IPTUC1_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTUC1_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_IPTUC1_Str,  (ModelNode*) &iedModel_PROT_IPTUC1_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTUC1_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_IPTUC1_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_IPTUC1_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_IPTUC1,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_IPTUC1_Op_general,0};
DataAttribute iedModel_PROT_IPTUC1_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_IPTUC1_Op,  (ModelNode*) &iedModel_PROT_IPTUC1_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTUC1_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_IPTUC1_Op,  (ModelNode*) &iedModel_PROT_IPTUC1_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_IPTUC1_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_IPTUC1_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};


/*******************************************************
 * I20PTOC1
 *******************************************************/
LogicalNode iedModel_PROT_I20PTOC1 = {    LogicalNodeModelType,    "I20PTOC1",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_I20PTOC2,    (ModelNode*) &iedModel_PROT_I20PTOC1_Mod};

DataObject iedModel_PROT_I20PTOC1_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_I20PTOC1,    (ModelNode*) &iedModel_PROT_I20PTOC1_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC1_Mod_q,0};
DataAttribute iedModel_PROT_I20PTOC1_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC1_Mod,    (ModelNode*) &iedModel_PROT_I20PTOC1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC1_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC1_Mod,    (ModelNode*) &iedModel_PROT_I20PTOC1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC1_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_I20PTOC1_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_I20PTOC1,    (ModelNode*) &iedModel_PROT_I20PTOC1_Health,    (ModelNode*) &iedModel_PROT_I20PTOC1_Beh_stVal,0};
DataAttribute iedModel_PROT_I20PTOC1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_I20PTOC1_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC1_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_I20PTOC1,    (ModelNode*) &iedModel_PROT_I20PTOC1_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC1_Health_stVal,0};
DataAttribute iedModel_PROT_I20PTOC1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_I20PTOC1_Health,    (ModelNode*) &iedModel_PROT_I20PTOC1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC1_Health,    (ModelNode*) &iedModel_PROT_I20PTOC1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC1_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_I20PTOC1,    (ModelNode*) &iedModel_PROT_I20PTOC1_Str, (ModelNode*) &iedModel_PROT_I20PTOC1_NamPlt_vendor,0};
DataAttribute iedModel_PROT_I20PTOC1_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_I20PTOC1_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC1_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_I20PTOC1_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC1_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_I20PTOC1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_I20PTOC1_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_I20PTOC1,  	(ModelNode*)&iedModel_PROT_I20PTOC1_Op, (ModelNode*) &iedModel_PROT_I20PTOC1_Str_general,0};
DataAttribute iedModel_PROT_I20PTOC1_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_I20PTOC1_Str,  (ModelNode*) &iedModel_PROT_I20PTOC1_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC1_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_I20PTOC1_Str,  (ModelNode*) &iedModel_PROT_I20PTOC1_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC1_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_I20PTOC1_Str,  (ModelNode*) &iedModel_PROT_I20PTOC1_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC1_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_I20PTOC1_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_I20PTOC1_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_I20PTOC1,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_I20PTOC1_Op_general,0};
DataAttribute iedModel_PROT_I20PTOC1_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_I20PTOC1_Op,  (ModelNode*) &iedModel_PROT_I20PTOC1_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC1_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_I20PTOC1_Op,  (ModelNode*) &iedModel_PROT_I20PTOC1_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC1_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_I20PTOC1_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * I20PTOC2
 *******************************************************/
LogicalNode iedModel_PROT_I20PTOC2 = {    LogicalNodeModelType,    "I20PTOC2",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_I20PTOC3,    (ModelNode*) &iedModel_PROT_I20PTOC2_Mod};

DataObject iedModel_PROT_I20PTOC2_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_I20PTOC2,    (ModelNode*) &iedModel_PROT_I20PTOC2_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC2_Mod_q,0};
DataAttribute iedModel_PROT_I20PTOC2_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC2_Mod,    (ModelNode*) &iedModel_PROT_I20PTOC2_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC2_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC2_Mod,    (ModelNode*) &iedModel_PROT_I20PTOC2_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC2_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_I20PTOC2_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};
//DataAttribute iedModel_PROT_I20PTOC2_Mod_ctlModel = {   DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_PROT_I20PTOC2_Mod,    NULL,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC2_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_I20PTOC2,    (ModelNode*) &iedModel_PROT_I20PTOC2_Health,    (ModelNode*) &iedModel_PROT_I20PTOC2_Beh_stVal,0};
DataAttribute iedModel_PROT_I20PTOC2_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_I20PTOC2_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC2_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC2_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC2_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC2_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC2_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC2_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC2_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_I20PTOC2,    (ModelNode*) &iedModel_PROT_I20PTOC2_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC2_Health_stVal,0};
DataAttribute iedModel_PROT_I20PTOC2_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_I20PTOC2_Health,    (ModelNode*) &iedModel_PROT_I20PTOC2_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC2_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC2_Health,    (ModelNode*) &iedModel_PROT_I20PTOC2_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC2_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC2_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC2_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_I20PTOC2,    (ModelNode*) &iedModel_PROT_I20PTOC2_Str, (ModelNode*) &iedModel_PROT_I20PTOC2_NamPlt_vendor,0};
DataAttribute iedModel_PROT_I20PTOC2_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_I20PTOC2_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC2_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC2_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_I20PTOC2_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC2_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC2_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_I20PTOC2_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_I20PTOC2_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_I20PTOC2,  	(ModelNode*)&iedModel_PROT_I20PTOC2_Op, (ModelNode*) &iedModel_PROT_I20PTOC2_Str_general,0};
DataAttribute iedModel_PROT_I20PTOC2_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_I20PTOC2_Str,  (ModelNode*) &iedModel_PROT_I20PTOC2_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC2_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_I20PTOC2_Str,  (ModelNode*) &iedModel_PROT_I20PTOC2_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC2_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_I20PTOC2_Str,  (ModelNode*) &iedModel_PROT_I20PTOC2_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC2_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_I20PTOC2_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_I20PTOC2_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_I20PTOC2,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_I20PTOC2_Op_general,0};
DataAttribute iedModel_PROT_I20PTOC2_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_I20PTOC2_Op,  (ModelNode*) &iedModel_PROT_I20PTOC2_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC2_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_I20PTOC2_Op,  (ModelNode*) &iedModel_PROT_I20PTOC2_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC2_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_I20PTOC2_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};


/*******************************************************
 * I20PTOC3
 *******************************************************/
LogicalNode iedModel_PROT_I20PTOC3 = {    LogicalNodeModelType,    "I20PTOC3",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_I20PTOC4,    (ModelNode*) &iedModel_PROT_I20PTOC3_Mod};

DataObject iedModel_PROT_I20PTOC3_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_I20PTOC3,    (ModelNode*) &iedModel_PROT_I20PTOC3_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC3_Mod_q,0};
DataAttribute iedModel_PROT_I20PTOC3_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC3_Mod,    (ModelNode*) &iedModel_PROT_I20PTOC3_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC3_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC3_Mod,    (ModelNode*) &iedModel_PROT_I20PTOC3_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC3_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_I20PTOC3_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC3_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_I20PTOC3,    (ModelNode*) &iedModel_PROT_I20PTOC3_Health,    (ModelNode*) &iedModel_PROT_I20PTOC3_Beh_stVal,0};
DataAttribute iedModel_PROT_I20PTOC3_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_I20PTOC3_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC3_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC3_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC3_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC3_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC3_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC3_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC3_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_I20PTOC3,    (ModelNode*) &iedModel_PROT_I20PTOC3_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC3_Health_stVal,0};
DataAttribute iedModel_PROT_I20PTOC3_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_I20PTOC3_Health,    (ModelNode*) &iedModel_PROT_I20PTOC3_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC3_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC3_Health,    (ModelNode*) &iedModel_PROT_I20PTOC3_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC3_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC3_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC3_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_I20PTOC3,    (ModelNode*) &iedModel_PROT_I20PTOC3_Str, (ModelNode*) &iedModel_PROT_I20PTOC3_NamPlt_vendor,0};
DataAttribute iedModel_PROT_I20PTOC3_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_I20PTOC3_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC3_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC3_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_I20PTOC3_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC3_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC3_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_I20PTOC3_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_I20PTOC3_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_I20PTOC3,  	(ModelNode*)&iedModel_PROT_I20PTOC3_Op, (ModelNode*) &iedModel_PROT_I20PTOC3_Str_general,0};
DataAttribute iedModel_PROT_I20PTOC3_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_I20PTOC3_Str,  (ModelNode*) &iedModel_PROT_I20PTOC3_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC3_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_I20PTOC3_Str,  (ModelNode*) &iedModel_PROT_I20PTOC3_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC3_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_I20PTOC3_Str,  (ModelNode*) &iedModel_PROT_I20PTOC3_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC3_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_I20PTOC3_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_I20PTOC3_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_I20PTOC3,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_I20PTOC3_Op_general,0};
DataAttribute iedModel_PROT_I20PTOC3_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_I20PTOC3_Op,  (ModelNode*) &iedModel_PROT_I20PTOC3_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC3_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_I20PTOC3_Op,  (ModelNode*) &iedModel_PROT_I20PTOC3_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC3_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_I20PTOC3_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * I20PTOC4
 *******************************************************/
LogicalNode iedModel_PROT_I20PTOC4 = {    LogicalNodeModelType,    "I20PTOC4",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_I20PTOC5,    (ModelNode*) &iedModel_PROT_I20PTOC4_Mod};

DataObject iedModel_PROT_I20PTOC4_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_I20PTOC4,    (ModelNode*) &iedModel_PROT_I20PTOC4_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC4_Mod_q,0};
DataAttribute iedModel_PROT_I20PTOC4_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC4_Mod,    (ModelNode*) &iedModel_PROT_I20PTOC4_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC4_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC4_Mod,    (ModelNode*) &iedModel_PROT_I20PTOC4_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC4_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_I20PTOC4_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};
//DataAttribute iedModel_PROT_I20PTOC4_Mod_ctlModel = {   DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_PROT_I20PTOC4_Mod,    NULL,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC4_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_I20PTOC4,    (ModelNode*) &iedModel_PROT_I20PTOC4_Health,    (ModelNode*) &iedModel_PROT_I20PTOC4_Beh_stVal,0};
DataAttribute iedModel_PROT_I20PTOC4_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_I20PTOC4_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC4_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC4_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC4_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC4_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC4_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC4_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC4_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_I20PTOC4,    (ModelNode*) &iedModel_PROT_I20PTOC4_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC4_Health_stVal,0};
DataAttribute iedModel_PROT_I20PTOC4_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_I20PTOC4_Health,    (ModelNode*) &iedModel_PROT_I20PTOC4_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC4_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC4_Health,    (ModelNode*) &iedModel_PROT_I20PTOC4_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC4_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC4_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC4_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_I20PTOC4,    (ModelNode*) &iedModel_PROT_I20PTOC4_Str, (ModelNode*) &iedModel_PROT_I20PTOC4_NamPlt_vendor,0};
DataAttribute iedModel_PROT_I20PTOC4_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_I20PTOC4_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC4_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC4_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_I20PTOC4_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC4_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC4_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_I20PTOC4_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_I20PTOC4_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_I20PTOC4,  	(ModelNode*)&iedModel_PROT_I20PTOC4_Op, (ModelNode*) &iedModel_PROT_I20PTOC4_Str_general,0};
DataAttribute iedModel_PROT_I20PTOC4_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_I20PTOC4_Str,  (ModelNode*) &iedModel_PROT_I20PTOC4_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC4_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_I20PTOC4_Str,  (ModelNode*) &iedModel_PROT_I20PTOC4_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC4_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_I20PTOC4_Str,  (ModelNode*) &iedModel_PROT_I20PTOC4_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC4_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_I20PTOC4_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_I20PTOC4_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_I20PTOC4,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_I20PTOC4_Op_general,0};
DataAttribute iedModel_PROT_I20PTOC4_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_I20PTOC4_Op,  (ModelNode*) &iedModel_PROT_I20PTOC4_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC4_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_I20PTOC4_Op,  (ModelNode*) &iedModel_PROT_I20PTOC4_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC4_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_I20PTOC4_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * I20PTOC5
 *******************************************************/
LogicalNode iedModel_PROT_I20PTOC5 = {    LogicalNodeModelType,    "I20PTOC5",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_I20PTOC6,    (ModelNode*) &iedModel_PROT_I20PTOC5_Mod};

DataObject iedModel_PROT_I20PTOC5_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_I20PTOC5,    (ModelNode*) &iedModel_PROT_I20PTOC5_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC5_Mod_q,0};
DataAttribute iedModel_PROT_I20PTOC5_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC5_Mod,    (ModelNode*) &iedModel_PROT_I20PTOC5_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC5_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC5_Mod,    (ModelNode*) &iedModel_PROT_I20PTOC5_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC5_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_I20PTOC5_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC5_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_I20PTOC5,    (ModelNode*) &iedModel_PROT_I20PTOC5_Health,    (ModelNode*) &iedModel_PROT_I20PTOC5_Beh_stVal,0};
DataAttribute iedModel_PROT_I20PTOC5_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_I20PTOC5_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC5_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC5_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC5_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC5_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC5_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC5_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC5_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_I20PTOC5,    (ModelNode*) &iedModel_PROT_I20PTOC5_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC5_Health_stVal,0};
DataAttribute iedModel_PROT_I20PTOC5_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_I20PTOC5_Health,    (ModelNode*) &iedModel_PROT_I20PTOC5_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC5_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC5_Health,    (ModelNode*) &iedModel_PROT_I20PTOC5_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC5_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC5_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC5_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_I20PTOC5,    (ModelNode*) &iedModel_PROT_I20PTOC5_Str, (ModelNode*) &iedModel_PROT_I20PTOC5_NamPlt_vendor,0};
DataAttribute iedModel_PROT_I20PTOC5_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_I20PTOC5_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC5_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC5_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_I20PTOC5_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC5_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC5_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_I20PTOC5_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_I20PTOC5_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_I20PTOC5,  	(ModelNode*)&iedModel_PROT_I20PTOC5_Op, (ModelNode*) &iedModel_PROT_I20PTOC5_Str_general,0};
DataAttribute iedModel_PROT_I20PTOC5_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_I20PTOC5_Str,  (ModelNode*) &iedModel_PROT_I20PTOC5_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC5_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_I20PTOC5_Str,  (ModelNode*) &iedModel_PROT_I20PTOC5_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC5_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_I20PTOC5_Str,  (ModelNode*) &iedModel_PROT_I20PTOC5_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC5_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_I20PTOC5_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_I20PTOC5_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_I20PTOC5,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_I20PTOC5_Op_general,0};
DataAttribute iedModel_PROT_I20PTOC5_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_I20PTOC5_Op,  (ModelNode*) &iedModel_PROT_I20PTOC5_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC5_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_I20PTOC5_Op,  (ModelNode*) &iedModel_PROT_I20PTOC5_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC5_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_I20PTOC5_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * I20PTOC6
 *******************************************************/
LogicalNode iedModel_PROT_I20PTOC6 = {    LogicalNodeModelType,    "I20PTOC6",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_I20PTOC7,    (ModelNode*) &iedModel_PROT_I20PTOC6_Mod};

DataObject iedModel_PROT_I20PTOC6_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_I20PTOC6,    (ModelNode*) &iedModel_PROT_I20PTOC6_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC6_Mod_q,0};
DataAttribute iedModel_PROT_I20PTOC6_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC6_Mod,    (ModelNode*) &iedModel_PROT_I20PTOC6_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC6_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC6_Mod,    (ModelNode*) &iedModel_PROT_I20PTOC6_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC6_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_I20PTOC6_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};
//DataAttribute iedModel_PROT_I20PTOC6_Mod_ctlModel = {   DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_PROT_I20PTOC6_Mod,    NULL,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC6_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_I20PTOC6,    (ModelNode*) &iedModel_PROT_I20PTOC6_Health,    (ModelNode*) &iedModel_PROT_I20PTOC6_Beh_stVal,0};
DataAttribute iedModel_PROT_I20PTOC6_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_I20PTOC6_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC6_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC6_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC6_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC6_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC6_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC6_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC6_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_I20PTOC6,    (ModelNode*) &iedModel_PROT_I20PTOC6_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC6_Health_stVal,0};
DataAttribute iedModel_PROT_I20PTOC6_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_I20PTOC6_Health,    (ModelNode*) &iedModel_PROT_I20PTOC6_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC6_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC6_Health,    (ModelNode*) &iedModel_PROT_I20PTOC6_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC6_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC6_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC6_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_I20PTOC6,    (ModelNode*) &iedModel_PROT_I20PTOC6_Str, (ModelNode*) &iedModel_PROT_I20PTOC6_NamPlt_vendor,0};
DataAttribute iedModel_PROT_I20PTOC6_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_I20PTOC6_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC6_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC6_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_I20PTOC6_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC6_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC6_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_I20PTOC6_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_I20PTOC6_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_I20PTOC6,  	(ModelNode*)&iedModel_PROT_I20PTOC6_Op, (ModelNode*) &iedModel_PROT_I20PTOC6_Str_general,0};
DataAttribute iedModel_PROT_I20PTOC6_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_I20PTOC6_Str,  (ModelNode*) &iedModel_PROT_I20PTOC6_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC6_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_I20PTOC6_Str,  (ModelNode*) &iedModel_PROT_I20PTOC6_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC6_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_I20PTOC6_Str,  (ModelNode*) &iedModel_PROT_I20PTOC6_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC6_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_I20PTOC6_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_I20PTOC6_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_I20PTOC6,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_I20PTOC6_Op_general,0};
DataAttribute iedModel_PROT_I20PTOC6_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_I20PTOC6_Op,  (ModelNode*) &iedModel_PROT_I20PTOC6_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC6_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_I20PTOC6_Op,  (ModelNode*) &iedModel_PROT_I20PTOC6_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC6_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_I20PTOC6_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * I20PTOC7
 *******************************************************/
LogicalNode iedModel_PROT_I20PTOC7 = {    LogicalNodeModelType,    "I20PTOC7",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_I20PTOC8,    (ModelNode*) &iedModel_PROT_I20PTOC7_Mod};

DataObject iedModel_PROT_I20PTOC7_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_I20PTOC7,    (ModelNode*) &iedModel_PROT_I20PTOC7_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC7_Mod_q,0};
DataAttribute iedModel_PROT_I20PTOC7_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC7_Mod,    (ModelNode*) &iedModel_PROT_I20PTOC7_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC7_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC7_Mod,    (ModelNode*) &iedModel_PROT_I20PTOC7_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC7_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_I20PTOC7_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};
//DataAttribute iedModel_PROT_I20PTOC7_Mod_ctlModel = {   DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_PROT_I20PTOC7_Mod,    NULL,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC7_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_I20PTOC7,    (ModelNode*) &iedModel_PROT_I20PTOC7_Health,    (ModelNode*) &iedModel_PROT_I20PTOC7_Beh_stVal,0};
DataAttribute iedModel_PROT_I20PTOC7_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_I20PTOC7_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC7_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC7_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC7_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC7_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC7_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC7_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC7_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_I20PTOC7,    (ModelNode*) &iedModel_PROT_I20PTOC7_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC7_Health_stVal,0};
DataAttribute iedModel_PROT_I20PTOC7_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_I20PTOC7_Health,    (ModelNode*) &iedModel_PROT_I20PTOC7_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC7_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC7_Health,    (ModelNode*) &iedModel_PROT_I20PTOC7_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC7_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC7_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC7_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_I20PTOC7,    (ModelNode*) &iedModel_PROT_I20PTOC7_Str, (ModelNode*) &iedModel_PROT_I20PTOC7_NamPlt_vendor,0};
DataAttribute iedModel_PROT_I20PTOC7_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_I20PTOC7_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC7_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC7_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_I20PTOC7_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC7_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC7_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_I20PTOC7_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_I20PTOC7_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_I20PTOC7,  	(ModelNode*)&iedModel_PROT_I20PTOC7_Op, (ModelNode*) &iedModel_PROT_I20PTOC7_Str_general,0};
DataAttribute iedModel_PROT_I20PTOC7_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_I20PTOC7_Str,  (ModelNode*) &iedModel_PROT_I20PTOC7_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC7_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_I20PTOC7_Str,  (ModelNode*) &iedModel_PROT_I20PTOC7_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC7_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_I20PTOC7_Str,  (ModelNode*) &iedModel_PROT_I20PTOC7_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC7_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_I20PTOC7_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_I20PTOC7_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_I20PTOC7,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_I20PTOC7_Op_general,0};
DataAttribute iedModel_PROT_I20PTOC7_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_I20PTOC7_Op,  (ModelNode*) &iedModel_PROT_I20PTOC7_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC7_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_I20PTOC7_Op,  (ModelNode*) &iedModel_PROT_I20PTOC7_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC7_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_I20PTOC7_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * I20PTOC8
 *******************************************************/
LogicalNode iedModel_PROT_I20PTOC8 = {    LogicalNodeModelType,    "I20PTOC8",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_I2I1PTOC1,    (ModelNode*) &iedModel_PROT_I20PTOC8_Mod};

DataObject iedModel_PROT_I20PTOC8_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_I20PTOC8,    (ModelNode*) &iedModel_PROT_I20PTOC8_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC8_Mod_q,0};
DataAttribute iedModel_PROT_I20PTOC8_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC8_Mod,    (ModelNode*) &iedModel_PROT_I20PTOC8_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC8_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC8_Mod,    (ModelNode*) &iedModel_PROT_I20PTOC8_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC8_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_I20PTOC8_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC8_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_I20PTOC8,    (ModelNode*) &iedModel_PROT_I20PTOC8_Health,    (ModelNode*) &iedModel_PROT_I20PTOC8_Beh_stVal,0};
DataAttribute iedModel_PROT_I20PTOC8_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_I20PTOC8_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC8_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC8_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC8_Beh,    (ModelNode*) &iedModel_PROT_I20PTOC8_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC8_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC8_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC8_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_I20PTOC8,    (ModelNode*) &iedModel_PROT_I20PTOC8_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC8_Health_stVal,0};
DataAttribute iedModel_PROT_I20PTOC8_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_I20PTOC8_Health,    (ModelNode*) &iedModel_PROT_I20PTOC8_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC8_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I20PTOC8_Health,    (ModelNode*) &iedModel_PROT_I20PTOC8_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC8_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I20PTOC8_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I20PTOC8_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_I20PTOC8,    (ModelNode*) &iedModel_PROT_I20PTOC8_Str, (ModelNode*) &iedModel_PROT_I20PTOC8_NamPlt_vendor,0};
DataAttribute iedModel_PROT_I20PTOC8_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_I20PTOC8_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC8_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC8_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_I20PTOC8_NamPlt,    (ModelNode*) &iedModel_PROT_I20PTOC8_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC8_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_I20PTOC8_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_I20PTOC8_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_I20PTOC8,  	(ModelNode*)&iedModel_PROT_I20PTOC8_Op, (ModelNode*) &iedModel_PROT_I20PTOC8_Str_general,0};
DataAttribute iedModel_PROT_I20PTOC8_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_I20PTOC8_Str,  (ModelNode*) &iedModel_PROT_I20PTOC8_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC8_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_I20PTOC8_Str,  (ModelNode*) &iedModel_PROT_I20PTOC8_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC8_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_I20PTOC8_Str,  (ModelNode*) &iedModel_PROT_I20PTOC8_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC8_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_I20PTOC8_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_I20PTOC8_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_I20PTOC8,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_I20PTOC8_Op_general,0};
DataAttribute iedModel_PROT_I20PTOC8_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_I20PTOC8_Op,  (ModelNode*) &iedModel_PROT_I20PTOC8_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC8_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_I20PTOC8_Op,  (ModelNode*) &iedModel_PROT_I20PTOC8_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I20PTOC8_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_I20PTOC8_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * I2I1PTOC1
 *******************************************************/
LogicalNode iedModel_PROT_I2I1PTOC1 = {    LogicalNodeModelType,    "I2I1PTOC1",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_VZGGIO1,    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Mod};

DataObject iedModel_PROT_I2I1PTOC1_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_I2I1PTOC1,    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Beh,    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Mod_q,0};
DataAttribute iedModel_PROT_I2I1PTOC1_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Mod,    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I2I1PTOC1_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Mod,    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I2I1PTOC1_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I2I1PTOC1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_I2I1PTOC1,    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Health,    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Beh_stVal,0};
DataAttribute iedModel_PROT_I2I1PTOC1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Beh,    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I2I1PTOC1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Beh,    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I2I1PTOC1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I2I1PTOC1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_I2I1PTOC1,    (ModelNode*) &iedModel_PROT_I2I1PTOC1_NamPlt,    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Health_stVal,0};
DataAttribute iedModel_PROT_I2I1PTOC1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Health,    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I2I1PTOC1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Health,    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I2I1PTOC1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_I2I1PTOC1_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_I2I1PTOC1,    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Str, (ModelNode*) &iedModel_PROT_I2I1PTOC1_NamPlt_vendor,0};
DataAttribute iedModel_PROT_I2I1PTOC1_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_I2I1PTOC1_NamPlt,    (ModelNode*) &iedModel_PROT_I2I1PTOC1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I2I1PTOC1_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_I2I1PTOC1_NamPlt,    (ModelNode*) &iedModel_PROT_I2I1PTOC1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I2I1PTOC1_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_I2I1PTOC1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_I2I1PTOC1_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_I2I1PTOC1,  	(ModelNode*)&iedModel_PROT_I2I1PTOC1_Op, (ModelNode*) &iedModel_PROT_I2I1PTOC1_Str_general,0};
DataAttribute iedModel_PROT_I2I1PTOC1_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_I2I1PTOC1_Str,  (ModelNode*) &iedModel_PROT_I2I1PTOC1_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I2I1PTOC1_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_I2I1PTOC1_Str,  (ModelNode*) &iedModel_PROT_I2I1PTOC1_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I2I1PTOC1_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Str,  (ModelNode*) &iedModel_PROT_I2I1PTOC1_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I2I1PTOC1_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_I2I1PTOC1_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_I2I1PTOC1,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_I2I1PTOC1_Op_general,0};
DataAttribute iedModel_PROT_I2I1PTOC1_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_I2I1PTOC1_Op,  (ModelNode*) &iedModel_PROT_I2I1PTOC1_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I2I1PTOC1_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Op,  (ModelNode*) &iedModel_PROT_I2I1PTOC1_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_I2I1PTOC1_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_I2I1PTOC1_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * iedModel_PROT_VZGGIO1
 *******************************************************/
LogicalNode iedModel_PROT_VZGGIO1 			= { LogicalNodeModelType,   "VZGGIO1",    (ModelNode*)&iedModel_Generic_PROT,    (ModelNode*)&iedModel_PROT_VZGGIO2,    (ModelNode*) &iedModel_PROT_VZGGIO1_Mod};

DataObject iedModel_PROT_VZGGIO1_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_PROT_VZGGIO1,    (ModelNode*) &iedModel_PROT_VZGGIO1_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO1_Mod_q,0};
DataAttribute iedModel_PROT_VZGGIO1_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO1_Mod,(ModelNode*) &iedModel_PROT_VZGGIO1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO1_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO1_Mod,(ModelNode*) &iedModel_PROT_VZGGIO1_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO1_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_PROT_VZGGIO1_Mod,(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_VZGGIO1,    (ModelNode*) &iedModel_PROT_VZGGIO1_Health,    (ModelNode*) &iedModel_PROT_VZGGIO1_Beh_stVal,0};
DataAttribute iedModel_PROT_VZGGIO1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO1_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO1_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO1_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_VZGGIO1,    (ModelNode*) &iedModel_PROT_VZGGIO1_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO1_Health_stVal,0};
DataAttribute iedModel_PROT_VZGGIO1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO1_Health,    (ModelNode*) &iedModel_PROT_VZGGIO1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO1_Health,    (ModelNode*) &iedModel_PROT_VZGGIO1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO1_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO1_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_VZGGIO1,    (ModelNode*)&iedModel_PROT_VZGGIO1_Alm , (ModelNode*) &iedModel_PROT_VZGGIO1_NamPlt_vendor,0};

DataAttribute iedModel_PROT_VZGGIO1_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_VZGGIO1_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO1_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_VZGGIO1_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO1_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_VZGGIO1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO1_Alm = {DataObjectModelType,"Alm",(ModelNode*) &iedModel_PROT_VZGGIO1,NULL ,(ModelNode*) &iedModel_PROT_VZGGIO1_Alm_stVal,0};
DataAttribute iedModel_PROT_VZGGIO1_Alm_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_PROT_VZGGIO1_Alm,(ModelNode*) &iedModel_PROT_VZGGIO1_Alm_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_PROT_VZGGIO1_Alm_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_PROT_VZGGIO1_Alm,(ModelNode*) &iedModel_PROT_VZGGIO1_Alm_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_PROT_VZGGIO1_Alm_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_PROT_VZGGIO1_Alm,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};

/*******************************************************
 * iedModel_PROT_VZGGIO2
 *******************************************************/
LogicalNode iedModel_PROT_VZGGIO2 			= { LogicalNodeModelType,   "VZGGIO2",    (ModelNode*)&iedModel_Generic_PROT,    (ModelNode*)&iedModel_PROT_VZGGIO3,    (ModelNode*) &iedModel_PROT_VZGGIO2_Mod};

DataObject iedModel_PROT_VZGGIO2_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_PROT_VZGGIO2,    (ModelNode*) &iedModel_PROT_VZGGIO2_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO2_Mod_q,0};
DataAttribute iedModel_PROT_VZGGIO2_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO2_Mod,(ModelNode*) &iedModel_PROT_VZGGIO2_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO2_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO2_Mod,(ModelNode*) &iedModel_PROT_VZGGIO2_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO2_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_PROT_VZGGIO2_Mod,(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO2_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_VZGGIO2,    (ModelNode*) &iedModel_PROT_VZGGIO2_Health,    (ModelNode*) &iedModel_PROT_VZGGIO2_Beh_stVal,0};
DataAttribute iedModel_PROT_VZGGIO2_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO2_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO2_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO2_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO2_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO2_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO2_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO2_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO2_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_VZGGIO2,    (ModelNode*) &iedModel_PROT_VZGGIO2_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO2_Health_stVal,0};
DataAttribute iedModel_PROT_VZGGIO2_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO2_Health,    (ModelNode*) &iedModel_PROT_VZGGIO2_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO2_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO2_Health,    (ModelNode*) &iedModel_PROT_VZGGIO2_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO2_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO2_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO2_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_VZGGIO2,    (ModelNode*)&iedModel_PROT_VZGGIO2_Alm , (ModelNode*) &iedModel_PROT_VZGGIO2_NamPlt_vendor,0};

DataAttribute iedModel_PROT_VZGGIO2_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_VZGGIO2_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO2_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO2_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_VZGGIO2_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO2_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO2_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_VZGGIO2_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO2_Alm = {DataObjectModelType,"Alm",(ModelNode*) &iedModel_PROT_VZGGIO2,NULL ,(ModelNode*) &iedModel_PROT_VZGGIO2_Alm_stVal,0};
DataAttribute iedModel_PROT_VZGGIO2_Alm_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_PROT_VZGGIO2_Alm,(ModelNode*) &iedModel_PROT_VZGGIO2_Alm_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_PROT_VZGGIO2_Alm_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_PROT_VZGGIO2_Alm,(ModelNode*) &iedModel_PROT_VZGGIO2_Alm_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_PROT_VZGGIO2_Alm_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_PROT_VZGGIO2_Alm,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};


/*******************************************************
 * iedModel_PROT_VZGGIO3
 *******************************************************/
LogicalNode iedModel_PROT_VZGGIO3 			= { LogicalNodeModelType,   "VZGGIO3",    (ModelNode*)&iedModel_Generic_PROT,    (ModelNode*)&iedModel_PROT_VZGGIO4,    (ModelNode*) &iedModel_PROT_VZGGIO3_Mod};

DataObject iedModel_PROT_VZGGIO3_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_PROT_VZGGIO3,    (ModelNode*) &iedModel_PROT_VZGGIO3_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO3_Mod_q,0};
DataAttribute iedModel_PROT_VZGGIO3_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO3_Mod,(ModelNode*) &iedModel_PROT_VZGGIO3_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO3_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO3_Mod,(ModelNode*) &iedModel_PROT_VZGGIO3_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO3_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_PROT_VZGGIO3_Mod,(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO3_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_VZGGIO3,    (ModelNode*) &iedModel_PROT_VZGGIO3_Health,    (ModelNode*) &iedModel_PROT_VZGGIO3_Beh_stVal,0};
DataAttribute iedModel_PROT_VZGGIO3_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO3_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO3_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO3_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO3_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO3_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO3_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO3_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO3_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_VZGGIO3,    (ModelNode*) &iedModel_PROT_VZGGIO3_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO3_Health_stVal,0};
DataAttribute iedModel_PROT_VZGGIO3_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO3_Health,    (ModelNode*) &iedModel_PROT_VZGGIO3_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO3_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO3_Health,    (ModelNode*) &iedModel_PROT_VZGGIO3_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO3_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO3_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO3_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_VZGGIO3,    (ModelNode*)&iedModel_PROT_VZGGIO3_Alm , (ModelNode*) &iedModel_PROT_VZGGIO3_NamPlt_vendor,0};

DataAttribute iedModel_PROT_VZGGIO3_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_VZGGIO3_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO3_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO3_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_VZGGIO3_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO3_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO3_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_VZGGIO3_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO3_Alm = {DataObjectModelType,"Alm",(ModelNode*) &iedModel_PROT_VZGGIO3,NULL ,(ModelNode*) &iedModel_PROT_VZGGIO3_Alm_stVal,0};
DataAttribute iedModel_PROT_VZGGIO3_Alm_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_PROT_VZGGIO3_Alm,(ModelNode*) &iedModel_PROT_VZGGIO3_Alm_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_PROT_VZGGIO3_Alm_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_PROT_VZGGIO3_Alm,(ModelNode*) &iedModel_PROT_VZGGIO3_Alm_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_PROT_VZGGIO3_Alm_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_PROT_VZGGIO3_Alm,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};

/*******************************************************
 * iedModel_PROT_VZGGIO4
 *******************************************************/
LogicalNode iedModel_PROT_VZGGIO4 			= { LogicalNodeModelType,   "VZGGIO4",    (ModelNode*)&iedModel_Generic_PROT,    (ModelNode*)&iedModel_PROT_VZGGIO5,    (ModelNode*) &iedModel_PROT_VZGGIO4_Mod};

DataObject iedModel_PROT_VZGGIO4_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_PROT_VZGGIO4,    (ModelNode*) &iedModel_PROT_VZGGIO4_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO4_Mod_q,0};
DataAttribute iedModel_PROT_VZGGIO4_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO4_Mod,(ModelNode*) &iedModel_PROT_VZGGIO4_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO4_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO4_Mod,(ModelNode*) &iedModel_PROT_VZGGIO4_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO4_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_PROT_VZGGIO4_Mod,(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO4_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_VZGGIO4,    (ModelNode*) &iedModel_PROT_VZGGIO4_Health,    (ModelNode*) &iedModel_PROT_VZGGIO4_Beh_stVal,0};
DataAttribute iedModel_PROT_VZGGIO4_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO4_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO4_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO4_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO4_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO4_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO4_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO4_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO4_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_VZGGIO4,    (ModelNode*) &iedModel_PROT_VZGGIO4_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO4_Health_stVal,0};
DataAttribute iedModel_PROT_VZGGIO4_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO4_Health,    (ModelNode*) &iedModel_PROT_VZGGIO4_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO4_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO4_Health,    (ModelNode*) &iedModel_PROT_VZGGIO4_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO4_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO4_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO4_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_VZGGIO4,    (ModelNode*)&iedModel_PROT_VZGGIO4_Alm , (ModelNode*) &iedModel_PROT_VZGGIO4_NamPlt_vendor,0};

DataAttribute iedModel_PROT_VZGGIO4_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_VZGGIO4_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO4_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO4_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_VZGGIO4_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO4_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO4_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_VZGGIO4_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO4_Alm = {DataObjectModelType,"Alm",(ModelNode*) &iedModel_PROT_VZGGIO4,NULL ,(ModelNode*) &iedModel_PROT_VZGGIO4_Alm_stVal,0};
DataAttribute iedModel_PROT_VZGGIO4_Alm_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_PROT_VZGGIO4_Alm,(ModelNode*) &iedModel_PROT_VZGGIO4_Alm_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_PROT_VZGGIO4_Alm_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_PROT_VZGGIO4_Alm,(ModelNode*) &iedModel_PROT_VZGGIO4_Alm_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_PROT_VZGGIO4_Alm_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_PROT_VZGGIO4_Alm,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};

/*******************************************************
 * iedModel_PROT_VZGGIO5
 *******************************************************/
LogicalNode iedModel_PROT_VZGGIO5 			= { LogicalNodeModelType,   "VZGGIO5",    (ModelNode*)&iedModel_Generic_PROT,    (ModelNode*)&iedModel_PROT_VZGGIO6,    (ModelNode*) &iedModel_PROT_VZGGIO5_Mod};

DataObject iedModel_PROT_VZGGIO5_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_PROT_VZGGIO5,    (ModelNode*) &iedModel_PROT_VZGGIO5_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO5_Mod_q,0};
DataAttribute iedModel_PROT_VZGGIO5_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO5_Mod,(ModelNode*) &iedModel_PROT_VZGGIO5_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO5_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO5_Mod,(ModelNode*) &iedModel_PROT_VZGGIO5_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO5_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_PROT_VZGGIO5_Mod,(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};
//DataAttribute iedModel_PROT_VZGGIO5_Mod_ctlModel = {   DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_PROT_VZGGIO5_Mod,    NULL,    NULL,    0,   IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO5_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_VZGGIO5,    (ModelNode*) &iedModel_PROT_VZGGIO5_Health,    (ModelNode*) &iedModel_PROT_VZGGIO5_Beh_stVal,0};
DataAttribute iedModel_PROT_VZGGIO5_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO5_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO5_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO5_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO5_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO5_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO5_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO5_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO5_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_VZGGIO5,    (ModelNode*) &iedModel_PROT_VZGGIO5_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO5_Health_stVal,0};
DataAttribute iedModel_PROT_VZGGIO5_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO5_Health,    (ModelNode*) &iedModel_PROT_VZGGIO5_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO5_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO5_Health,    (ModelNode*) &iedModel_PROT_VZGGIO5_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO5_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO5_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO5_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_VZGGIO5,    (ModelNode*)&iedModel_PROT_VZGGIO5_Alm , (ModelNode*) &iedModel_PROT_VZGGIO5_NamPlt_vendor,0};

DataAttribute iedModel_PROT_VZGGIO5_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_VZGGIO5_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO5_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO5_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_VZGGIO5_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO5_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO5_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_VZGGIO5_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO5_Alm = {DataObjectModelType,"Alm",(ModelNode*) &iedModel_PROT_VZGGIO5,NULL ,(ModelNode*) &iedModel_PROT_VZGGIO5_Alm_stVal,0};
DataAttribute iedModel_PROT_VZGGIO5_Alm_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_PROT_VZGGIO5_Alm,(ModelNode*) &iedModel_PROT_VZGGIO5_Alm_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_PROT_VZGGIO5_Alm_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_PROT_VZGGIO5_Alm,(ModelNode*) &iedModel_PROT_VZGGIO5_Alm_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_PROT_VZGGIO5_Alm_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_PROT_VZGGIO5_Alm,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};


/*******************************************************
 * iedModel_PROT_VZGGIO6
 *******************************************************/
LogicalNode iedModel_PROT_VZGGIO6 			= { LogicalNodeModelType,   "VZGGIO6",    (ModelNode*)&iedModel_Generic_PROT,    (ModelNode*)&iedModel_PROT_VZGGIO7,    (ModelNode*) &iedModel_PROT_VZGGIO6_Mod};

DataObject iedModel_PROT_VZGGIO6_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_PROT_VZGGIO6,    (ModelNode*) &iedModel_PROT_VZGGIO6_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO6_Mod_q,0};
DataAttribute iedModel_PROT_VZGGIO6_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO6_Mod,(ModelNode*) &iedModel_PROT_VZGGIO6_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO6_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO6_Mod,(ModelNode*) &iedModel_PROT_VZGGIO6_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO6_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_PROT_VZGGIO6_Mod,(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO6_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_VZGGIO6,    (ModelNode*) &iedModel_PROT_VZGGIO6_Health,    (ModelNode*) &iedModel_PROT_VZGGIO6_Beh_stVal,0};
DataAttribute iedModel_PROT_VZGGIO6_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO6_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO6_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO6_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO6_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO6_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO6_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO6_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO6_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_VZGGIO6,    (ModelNode*) &iedModel_PROT_VZGGIO6_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO6_Health_stVal,0};
DataAttribute iedModel_PROT_VZGGIO6_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO6_Health,    (ModelNode*) &iedModel_PROT_VZGGIO6_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO6_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO6_Health,    (ModelNode*) &iedModel_PROT_VZGGIO6_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO6_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO6_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO6_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_VZGGIO6,    (ModelNode*)&iedModel_PROT_VZGGIO6_Alm , (ModelNode*) &iedModel_PROT_VZGGIO6_NamPlt_vendor,0};

DataAttribute iedModel_PROT_VZGGIO6_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_VZGGIO6_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO6_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO6_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_VZGGIO6_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO6_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO6_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_VZGGIO6_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO6_Alm = {DataObjectModelType,"Alm",(ModelNode*) &iedModel_PROT_VZGGIO6,NULL ,(ModelNode*) &iedModel_PROT_VZGGIO6_Alm_stVal,0};
DataAttribute iedModel_PROT_VZGGIO6_Alm_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_PROT_VZGGIO6_Alm,(ModelNode*) &iedModel_PROT_VZGGIO6_Alm_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_PROT_VZGGIO6_Alm_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_PROT_VZGGIO6_Alm,(ModelNode*) &iedModel_PROT_VZGGIO6_Alm_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_PROT_VZGGIO6_Alm_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_PROT_VZGGIO6_Alm,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};

/*******************************************************
 * iedModel_PROT_VZGGIO7
 *******************************************************/
LogicalNode iedModel_PROT_VZGGIO7 			= { LogicalNodeModelType,   "VZGGIO7",    (ModelNode*)&iedModel_Generic_PROT,    (ModelNode*)&iedModel_PROT_VZGGIO8,    (ModelNode*) &iedModel_PROT_VZGGIO7_Mod};

DataObject iedModel_PROT_VZGGIO7_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_PROT_VZGGIO7,    (ModelNode*) &iedModel_PROT_VZGGIO7_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO7_Mod_q,0};
DataAttribute iedModel_PROT_VZGGIO7_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO7_Mod,(ModelNode*) &iedModel_PROT_VZGGIO7_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO7_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO7_Mod,(ModelNode*) &iedModel_PROT_VZGGIO7_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO7_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_PROT_VZGGIO7_Mod,(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO7_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_VZGGIO7,    (ModelNode*) &iedModel_PROT_VZGGIO7_Health,    (ModelNode*) &iedModel_PROT_VZGGIO7_Beh_stVal,0};
DataAttribute iedModel_PROT_VZGGIO7_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO7_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO7_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO7_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO7_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO7_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO7_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO7_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO7_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_VZGGIO7,    (ModelNode*) &iedModel_PROT_VZGGIO7_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO7_Health_stVal,0};
DataAttribute iedModel_PROT_VZGGIO7_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO7_Health,    (ModelNode*) &iedModel_PROT_VZGGIO7_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO7_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO7_Health,    (ModelNode*) &iedModel_PROT_VZGGIO7_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO7_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO7_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO7_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_VZGGIO7,    (ModelNode*)&iedModel_PROT_VZGGIO7_Alm , (ModelNode*) &iedModel_PROT_VZGGIO7_NamPlt_vendor,0};

DataAttribute iedModel_PROT_VZGGIO7_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_VZGGIO7_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO7_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO7_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_VZGGIO7_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO7_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO7_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_VZGGIO7_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO7_Alm = {DataObjectModelType,"Alm",(ModelNode*) &iedModel_PROT_VZGGIO7,NULL ,(ModelNode*) &iedModel_PROT_VZGGIO7_Alm_stVal,0};
DataAttribute iedModel_PROT_VZGGIO7_Alm_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_PROT_VZGGIO7_Alm,(ModelNode*) &iedModel_PROT_VZGGIO7_Alm_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_PROT_VZGGIO7_Alm_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_PROT_VZGGIO7_Alm,(ModelNode*) &iedModel_PROT_VZGGIO7_Alm_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_PROT_VZGGIO7_Alm_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_PROT_VZGGIO7_Alm,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};

/*******************************************************
 * iedModel_PROT_VZGGIO8
 *******************************************************/
LogicalNode iedModel_PROT_VZGGIO8 			= { LogicalNodeModelType,   "VZGGIO8",    (ModelNode*)&iedModel_Generic_PROT,   (ModelNode*)&iedModel_PROT_VZGGIO9,    (ModelNode*) &iedModel_PROT_VZGGIO8_Mod};

DataObject iedModel_PROT_VZGGIO8_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_PROT_VZGGIO8,    (ModelNode*) &iedModel_PROT_VZGGIO8_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO8_Mod_q,0};
DataAttribute iedModel_PROT_VZGGIO8_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO8_Mod,(ModelNode*) &iedModel_PROT_VZGGIO8_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO8_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO8_Mod,(ModelNode*) &iedModel_PROT_VZGGIO8_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO8_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_PROT_VZGGIO8_Mod,(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO8_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_VZGGIO8,    (ModelNode*) &iedModel_PROT_VZGGIO8_Health,    (ModelNode*) &iedModel_PROT_VZGGIO8_Beh_stVal,0};
DataAttribute iedModel_PROT_VZGGIO8_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO8_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO8_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO8_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO8_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO8_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO8_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO8_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO8_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_VZGGIO8,    (ModelNode*) &iedModel_PROT_VZGGIO8_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO8_Health_stVal,0};
DataAttribute iedModel_PROT_VZGGIO8_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO8_Health,    (ModelNode*) &iedModel_PROT_VZGGIO8_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO8_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO8_Health,    (ModelNode*) &iedModel_PROT_VZGGIO8_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO8_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO8_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO8_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_VZGGIO8,    (ModelNode*)&iedModel_PROT_VZGGIO8_Alm , (ModelNode*) &iedModel_PROT_VZGGIO8_NamPlt_vendor,0};

DataAttribute iedModel_PROT_VZGGIO8_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_VZGGIO8_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO8_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO8_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_VZGGIO8_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO8_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO8_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_VZGGIO8_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO8_Alm = {DataObjectModelType,"Alm",(ModelNode*) &iedModel_PROT_VZGGIO8,NULL ,(ModelNode*) &iedModel_PROT_VZGGIO8_Alm_stVal,0};
DataAttribute iedModel_PROT_VZGGIO8_Alm_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_PROT_VZGGIO8_Alm,(ModelNode*) &iedModel_PROT_VZGGIO8_Alm_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_PROT_VZGGIO8_Alm_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_PROT_VZGGIO8_Alm,(ModelNode*) &iedModel_PROT_VZGGIO8_Alm_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_PROT_VZGGIO8_Alm_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_PROT_VZGGIO8_Alm,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};

/*******************************************************
 * iedModel_PROT_VZGGIO9
 *******************************************************/
LogicalNode iedModel_PROT_VZGGIO9 			= { LogicalNodeModelType,   "VZGGIO9",    (ModelNode*)&iedModel_Generic_PROT,   (ModelNode*)&iedModel_PROT_VZGGIO10,    (ModelNode*) &iedModel_PROT_VZGGIO9_Mod};

DataObject iedModel_PROT_VZGGIO9_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_PROT_VZGGIO9,    (ModelNode*) &iedModel_PROT_VZGGIO9_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO9_Mod_q,0};
DataAttribute iedModel_PROT_VZGGIO9_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO9_Mod,(ModelNode*) &iedModel_PROT_VZGGIO9_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO9_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO9_Mod,(ModelNode*) &iedModel_PROT_VZGGIO9_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO9_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_PROT_VZGGIO9_Mod,(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO9_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_VZGGIO9,    (ModelNode*) &iedModel_PROT_VZGGIO9_Health,    (ModelNode*) &iedModel_PROT_VZGGIO9_Beh_stVal,0};
DataAttribute iedModel_PROT_VZGGIO9_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO9_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO9_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO9_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO9_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO9_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO9_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO9_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO9_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_VZGGIO9,    (ModelNode*) &iedModel_PROT_VZGGIO9_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO9_Health_stVal,0};
DataAttribute iedModel_PROT_VZGGIO9_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO9_Health,    (ModelNode*) &iedModel_PROT_VZGGIO9_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO9_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO9_Health,    (ModelNode*) &iedModel_PROT_VZGGIO9_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO9_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO9_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO9_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_VZGGIO9,    (ModelNode*)&iedModel_PROT_VZGGIO9_Alm , (ModelNode*) &iedModel_PROT_VZGGIO9_NamPlt_vendor,0};

DataAttribute iedModel_PROT_VZGGIO9_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_VZGGIO9_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO9_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO9_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_VZGGIO9_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO9_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO9_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_VZGGIO9_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO9_Alm = {DataObjectModelType,"Alm",(ModelNode*) &iedModel_PROT_VZGGIO9,NULL ,(ModelNode*) &iedModel_PROT_VZGGIO9_Alm_stVal,0};
DataAttribute iedModel_PROT_VZGGIO9_Alm_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_PROT_VZGGIO9_Alm,(ModelNode*) &iedModel_PROT_VZGGIO9_Alm_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_PROT_VZGGIO9_Alm_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_PROT_VZGGIO9_Alm,(ModelNode*) &iedModel_PROT_VZGGIO9_Alm_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_PROT_VZGGIO9_Alm_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_PROT_VZGGIO9_Alm,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};

/*******************************************************
 * iedModel_PROT_VZGGIO10
 *******************************************************/
LogicalNode iedModel_PROT_VZGGIO10 			= { LogicalNodeModelType,   "VZGGIO10",    (ModelNode*)&iedModel_Generic_PROT,   (ModelNode*)&iedModel_PROT_VZGGIO11,    (ModelNode*) &iedModel_PROT_VZGGIO10_Mod};

DataObject iedModel_PROT_VZGGIO10_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_PROT_VZGGIO10,    (ModelNode*) &iedModel_PROT_VZGGIO10_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO10_Mod_q,0};
DataAttribute iedModel_PROT_VZGGIO10_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO10_Mod,(ModelNode*) &iedModel_PROT_VZGGIO10_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO10_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO10_Mod,(ModelNode*) &iedModel_PROT_VZGGIO10_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO10_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_PROT_VZGGIO10_Mod,(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO10_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_VZGGIO10,    (ModelNode*) &iedModel_PROT_VZGGIO10_Health,    (ModelNode*) &iedModel_PROT_VZGGIO10_Beh_stVal,0};
DataAttribute iedModel_PROT_VZGGIO10_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO10_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO10_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO10_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO10_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO10_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO10_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO10_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO10_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_VZGGIO10,    (ModelNode*) &iedModel_PROT_VZGGIO10_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO10_Health_stVal,0};
DataAttribute iedModel_PROT_VZGGIO10_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO10_Health,    (ModelNode*) &iedModel_PROT_VZGGIO10_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO10_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO10_Health,    (ModelNode*) &iedModel_PROT_VZGGIO10_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO10_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO10_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO10_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_VZGGIO10,    (ModelNode*)&iedModel_PROT_VZGGIO10_Alm , (ModelNode*) &iedModel_PROT_VZGGIO10_NamPlt_vendor,0};

DataAttribute iedModel_PROT_VZGGIO10_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_VZGGIO10_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO10_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO10_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_VZGGIO10_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO10_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO10_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_VZGGIO10_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO10_Alm = {DataObjectModelType,"Alm",(ModelNode*) &iedModel_PROT_VZGGIO10,NULL ,(ModelNode*) &iedModel_PROT_VZGGIO10_Alm_stVal,0};
DataAttribute iedModel_PROT_VZGGIO10_Alm_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_PROT_VZGGIO10_Alm,(ModelNode*) &iedModel_PROT_VZGGIO10_Alm_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_PROT_VZGGIO10_Alm_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_PROT_VZGGIO10_Alm,(ModelNode*) &iedModel_PROT_VZGGIO10_Alm_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_PROT_VZGGIO10_Alm_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_PROT_VZGGIO10_Alm,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};

/*******************************************************
 * iedModel_PROT_VZGGIO11
 *******************************************************/
LogicalNode iedModel_PROT_VZGGIO11 			= { LogicalNodeModelType,   "VZGGIO11",    (ModelNode*)&iedModel_Generic_PROT,   (ModelNode*)&iedModel_PROT_VZGGIO12,    (ModelNode*) &iedModel_PROT_VZGGIO11_Mod};

DataObject iedModel_PROT_VZGGIO11_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_PROT_VZGGIO11,    (ModelNode*) &iedModel_PROT_VZGGIO11_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO11_Mod_q,0};
DataAttribute iedModel_PROT_VZGGIO11_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO11_Mod,(ModelNode*) &iedModel_PROT_VZGGIO11_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO11_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO11_Mod,(ModelNode*) &iedModel_PROT_VZGGIO11_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO11_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_PROT_VZGGIO11_Mod,(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO11_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_VZGGIO11,    (ModelNode*) &iedModel_PROT_VZGGIO11_Health,    (ModelNode*) &iedModel_PROT_VZGGIO11_Beh_stVal,0};
DataAttribute iedModel_PROT_VZGGIO11_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO11_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO11_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO11_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO11_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO11_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO11_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO11_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO11_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_VZGGIO11,    (ModelNode*) &iedModel_PROT_VZGGIO11_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO11_Health_stVal,0};
DataAttribute iedModel_PROT_VZGGIO11_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO11_Health,    (ModelNode*) &iedModel_PROT_VZGGIO11_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO11_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO11_Health,    (ModelNode*) &iedModel_PROT_VZGGIO11_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO11_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO11_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO11_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_VZGGIO11,    (ModelNode*)&iedModel_PROT_VZGGIO11_Alm , (ModelNode*) &iedModel_PROT_VZGGIO11_NamPlt_vendor,0};

DataAttribute iedModel_PROT_VZGGIO11_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_VZGGIO11_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO11_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO11_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_VZGGIO11_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO11_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO11_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_VZGGIO11_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO11_Alm = {DataObjectModelType,"Alm",(ModelNode*) &iedModel_PROT_VZGGIO11,NULL ,(ModelNode*) &iedModel_PROT_VZGGIO11_Alm_stVal,0};
DataAttribute iedModel_PROT_VZGGIO11_Alm_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_PROT_VZGGIO11_Alm,(ModelNode*) &iedModel_PROT_VZGGIO11_Alm_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_PROT_VZGGIO11_Alm_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_PROT_VZGGIO11_Alm,(ModelNode*) &iedModel_PROT_VZGGIO11_Alm_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_PROT_VZGGIO11_Alm_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_PROT_VZGGIO11_Alm,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};

/*******************************************************
 * iedModel_PROT_VZGGIO12
 *******************************************************/
LogicalNode iedModel_PROT_VZGGIO12 			= { LogicalNodeModelType,   "VZGGIO12",    (ModelNode*)&iedModel_Generic_PROT,   (ModelNode*)&iedModel_PROT_VZGGIO13,    (ModelNode*) &iedModel_PROT_VZGGIO12_Mod};

DataObject iedModel_PROT_VZGGIO12_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_PROT_VZGGIO12,    (ModelNode*) &iedModel_PROT_VZGGIO12_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO12_Mod_q,0};
DataAttribute iedModel_PROT_VZGGIO12_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO12_Mod,(ModelNode*) &iedModel_PROT_VZGGIO12_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO12_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO12_Mod,(ModelNode*) &iedModel_PROT_VZGGIO12_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO12_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_PROT_VZGGIO12_Mod,(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO12_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_VZGGIO12,    (ModelNode*) &iedModel_PROT_VZGGIO12_Health,    (ModelNode*) &iedModel_PROT_VZGGIO12_Beh_stVal,0};
DataAttribute iedModel_PROT_VZGGIO12_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO12_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO12_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO12_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO12_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO12_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO12_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO12_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO12_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_VZGGIO12,    (ModelNode*) &iedModel_PROT_VZGGIO12_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO12_Health_stVal,0};
DataAttribute iedModel_PROT_VZGGIO12_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO12_Health,    (ModelNode*) &iedModel_PROT_VZGGIO12_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO12_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO12_Health,    (ModelNode*) &iedModel_PROT_VZGGIO12_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO12_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO12_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO12_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_VZGGIO12,    (ModelNode*)&iedModel_PROT_VZGGIO12_Alm , (ModelNode*) &iedModel_PROT_VZGGIO12_NamPlt_vendor,0};

DataAttribute iedModel_PROT_VZGGIO12_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_VZGGIO12_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO12_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO12_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_VZGGIO12_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO12_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO12_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_VZGGIO12_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO12_Alm = {DataObjectModelType,"Alm",(ModelNode*) &iedModel_PROT_VZGGIO12,NULL ,(ModelNode*) &iedModel_PROT_VZGGIO12_Alm_stVal,0};
DataAttribute iedModel_PROT_VZGGIO12_Alm_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_PROT_VZGGIO12_Alm,(ModelNode*) &iedModel_PROT_VZGGIO12_Alm_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_PROT_VZGGIO12_Alm_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_PROT_VZGGIO12_Alm,(ModelNode*) &iedModel_PROT_VZGGIO12_Alm_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_PROT_VZGGIO12_Alm_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_PROT_VZGGIO12_Alm,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};

/*******************************************************
 * iedModel_PROT_VZGGIO13
 *******************************************************/
LogicalNode iedModel_PROT_VZGGIO13 			= { LogicalNodeModelType,   "VZGGIO13",    (ModelNode*)&iedModel_Generic_PROT,   (ModelNode*)&iedModel_PROT_VZGGIO14,    (ModelNode*) &iedModel_PROT_VZGGIO13_Mod};

DataObject iedModel_PROT_VZGGIO13_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_PROT_VZGGIO13,    (ModelNode*) &iedModel_PROT_VZGGIO13_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO13_Mod_q,0};
DataAttribute iedModel_PROT_VZGGIO13_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO13_Mod,(ModelNode*) &iedModel_PROT_VZGGIO13_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO13_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO13_Mod,(ModelNode*) &iedModel_PROT_VZGGIO13_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO13_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_PROT_VZGGIO13_Mod,(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO13_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_VZGGIO13,    (ModelNode*) &iedModel_PROT_VZGGIO13_Health,    (ModelNode*) &iedModel_PROT_VZGGIO13_Beh_stVal,0};
DataAttribute iedModel_PROT_VZGGIO13_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO13_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO13_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO13_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO13_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO13_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO13_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO13_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO13_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_VZGGIO13,    (ModelNode*) &iedModel_PROT_VZGGIO13_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO13_Health_stVal,0};
DataAttribute iedModel_PROT_VZGGIO13_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO13_Health,    (ModelNode*) &iedModel_PROT_VZGGIO13_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO13_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO13_Health,    (ModelNode*) &iedModel_PROT_VZGGIO13_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO13_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO13_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO13_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_VZGGIO13,    (ModelNode*)&iedModel_PROT_VZGGIO13_Alm , (ModelNode*) &iedModel_PROT_VZGGIO13_NamPlt_vendor,0};

DataAttribute iedModel_PROT_VZGGIO13_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_VZGGIO13_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO13_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO13_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_VZGGIO13_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO13_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO13_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_VZGGIO13_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO13_Alm = {DataObjectModelType,"Alm",(ModelNode*) &iedModel_PROT_VZGGIO13,NULL ,(ModelNode*) &iedModel_PROT_VZGGIO13_Alm_stVal,0};
DataAttribute iedModel_PROT_VZGGIO13_Alm_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_PROT_VZGGIO13_Alm,(ModelNode*) &iedModel_PROT_VZGGIO13_Alm_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_PROT_VZGGIO13_Alm_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_PROT_VZGGIO13_Alm,(ModelNode*) &iedModel_PROT_VZGGIO13_Alm_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_PROT_VZGGIO13_Alm_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_PROT_VZGGIO13_Alm,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};

/*******************************************************
 * iedModel_PROT_VZGGIO14
 *******************************************************/
LogicalNode iedModel_PROT_VZGGIO14 			= { LogicalNodeModelType,   "VZGGIO14",    (ModelNode*)&iedModel_Generic_PROT,   (ModelNode*)&iedModel_PROT_VZGGIO15,    (ModelNode*) &iedModel_PROT_VZGGIO14_Mod};

DataObject iedModel_PROT_VZGGIO14_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_PROT_VZGGIO14,    (ModelNode*) &iedModel_PROT_VZGGIO14_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO14_Mod_q,0};
DataAttribute iedModel_PROT_VZGGIO14_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO14_Mod,(ModelNode*) &iedModel_PROT_VZGGIO14_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO14_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO14_Mod,(ModelNode*) &iedModel_PROT_VZGGIO14_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO14_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_PROT_VZGGIO14_Mod,(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO14_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_VZGGIO14,    (ModelNode*) &iedModel_PROT_VZGGIO14_Health,    (ModelNode*) &iedModel_PROT_VZGGIO14_Beh_stVal,0};
DataAttribute iedModel_PROT_VZGGIO14_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO14_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO14_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO14_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO14_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO14_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO14_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO14_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO14_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_VZGGIO14,    (ModelNode*) &iedModel_PROT_VZGGIO14_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO14_Health_stVal,0};
DataAttribute iedModel_PROT_VZGGIO14_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO14_Health,    (ModelNode*) &iedModel_PROT_VZGGIO14_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO14_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO14_Health,    (ModelNode*) &iedModel_PROT_VZGGIO14_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO14_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO14_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO14_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_VZGGIO14,    (ModelNode*)&iedModel_PROT_VZGGIO14_Alm , (ModelNode*) &iedModel_PROT_VZGGIO14_NamPlt_vendor,0};

DataAttribute iedModel_PROT_VZGGIO14_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_VZGGIO14_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO14_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO14_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_VZGGIO14_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO14_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO14_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_VZGGIO14_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO14_Alm = {DataObjectModelType,"Alm",(ModelNode*) &iedModel_PROT_VZGGIO14,NULL ,(ModelNode*) &iedModel_PROT_VZGGIO14_Alm_stVal,0};
DataAttribute iedModel_PROT_VZGGIO14_Alm_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_PROT_VZGGIO14_Alm,(ModelNode*) &iedModel_PROT_VZGGIO14_Alm_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_PROT_VZGGIO14_Alm_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_PROT_VZGGIO14_Alm,(ModelNode*) &iedModel_PROT_VZGGIO14_Alm_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_PROT_VZGGIO14_Alm_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_PROT_VZGGIO14_Alm,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};

/*******************************************************
 * iedModel_PROT_VZGGIO15
 *******************************************************/
LogicalNode iedModel_PROT_VZGGIO15 			= { LogicalNodeModelType,   "VZGGIO15",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_VZGGIO16,    (ModelNode*) &iedModel_PROT_VZGGIO15_Mod};

DataObject iedModel_PROT_VZGGIO15_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_PROT_VZGGIO15,    (ModelNode*) &iedModel_PROT_VZGGIO15_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO15_Mod_q,0};
DataAttribute iedModel_PROT_VZGGIO15_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO15_Mod,(ModelNode*) &iedModel_PROT_VZGGIO15_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO15_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO15_Mod,(ModelNode*) &iedModel_PROT_VZGGIO15_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO15_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_PROT_VZGGIO15_Mod,(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO15_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_VZGGIO15,    (ModelNode*) &iedModel_PROT_VZGGIO15_Health,    (ModelNode*) &iedModel_PROT_VZGGIO15_Beh_stVal,0};
DataAttribute iedModel_PROT_VZGGIO15_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO15_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO15_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO15_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO15_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO15_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO15_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO15_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO15_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_VZGGIO15,    (ModelNode*) &iedModel_PROT_VZGGIO15_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO15_Health_stVal,0};
DataAttribute iedModel_PROT_VZGGIO15_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO15_Health,    (ModelNode*) &iedModel_PROT_VZGGIO15_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO15_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO15_Health,    (ModelNode*) &iedModel_PROT_VZGGIO15_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO15_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO15_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO15_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_VZGGIO15,    (ModelNode*)&iedModel_PROT_VZGGIO15_Alm , (ModelNode*) &iedModel_PROT_VZGGIO15_NamPlt_vendor,0};

DataAttribute iedModel_PROT_VZGGIO15_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_VZGGIO15_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO15_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO15_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_VZGGIO15_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO15_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO15_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_VZGGIO15_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO15_Alm = {DataObjectModelType,"Alm",(ModelNode*) &iedModel_PROT_VZGGIO15,NULL ,(ModelNode*) &iedModel_PROT_VZGGIO15_Alm_stVal,0};
DataAttribute iedModel_PROT_VZGGIO15_Alm_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_PROT_VZGGIO15_Alm,(ModelNode*) &iedModel_PROT_VZGGIO15_Alm_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_PROT_VZGGIO15_Alm_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_PROT_VZGGIO15_Alm,(ModelNode*) &iedModel_PROT_VZGGIO15_Alm_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_PROT_VZGGIO15_Alm_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_PROT_VZGGIO15_Alm,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};

/*******************************************************
 * iedModel_PROT_VZGGIO16
 *******************************************************/
LogicalNode iedModel_PROT_VZGGIO16 			= { LogicalNodeModelType,   "VZGGIO16",    (ModelNode*)&iedModel_Generic_PROT,   (ModelNode*)&iedModel_PROT_UPTOV1,    (ModelNode*) &iedModel_PROT_VZGGIO16_Mod};

DataObject iedModel_PROT_VZGGIO16_Mod 		= { DataObjectModelType,     "Mod",    (ModelNode*) &iedModel_PROT_VZGGIO16,    (ModelNode*) &iedModel_PROT_VZGGIO16_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO16_Mod_q,0};
DataAttribute iedModel_PROT_VZGGIO16_Mod_q 	= { DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO16_Mod,(ModelNode*) &iedModel_PROT_VZGGIO16_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO16_Mod_t 	= { DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO16_Mod,(ModelNode*) &iedModel_PROT_VZGGIO16_Mod_stVal,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO16_Mod_stVal = { DataAttributeModelType,"stVal",   (ModelNode*) &iedModel_PROT_VZGGIO16_Mod,(ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO16_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_VZGGIO16,    (ModelNode*) &iedModel_PROT_VZGGIO16_Health,    (ModelNode*) &iedModel_PROT_VZGGIO16_Beh_stVal,0};
DataAttribute iedModel_PROT_VZGGIO16_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO16_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO16_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO16_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO16_Beh,    (ModelNode*) &iedModel_PROT_VZGGIO16_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO16_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO16_Beh,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO16_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_VZGGIO16,    (ModelNode*) &iedModel_PROT_VZGGIO16_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO16_Health_stVal,0};
DataAttribute iedModel_PROT_VZGGIO16_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_VZGGIO16_Health,    (ModelNode*) &iedModel_PROT_VZGGIO16_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO16_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_VZGGIO16_Health,    (ModelNode*) &iedModel_PROT_VZGGIO16_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO16_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_VZGGIO16_Health,    NULL,    NULL,    0,   IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO16_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_VZGGIO16,    (ModelNode*)&iedModel_PROT_VZGGIO16_Alm , (ModelNode*) &iedModel_PROT_VZGGIO16_NamPlt_vendor,0};

DataAttribute iedModel_PROT_VZGGIO16_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_VZGGIO16_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO16_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO16_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_VZGGIO16_NamPlt,    (ModelNode*) &iedModel_PROT_VZGGIO16_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_VZGGIO16_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_VZGGIO16_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_VZGGIO16_Alm = {DataObjectModelType,"Alm",(ModelNode*) &iedModel_PROT_VZGGIO16,NULL ,(ModelNode*) &iedModel_PROT_VZGGIO16_Alm_stVal,0};
DataAttribute iedModel_PROT_VZGGIO16_Alm_stVal = {DataAttributeModelType,"stVal",(ModelNode*) &iedModel_PROT_VZGGIO16_Alm,(ModelNode*) &iedModel_PROT_VZGGIO16_Alm_q,NULL,0,IEC61850_FC_ST,IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED | TRG_OPT_GI,NULL,0};
DataAttribute iedModel_PROT_VZGGIO16_Alm_q = {DataAttributeModelType,"q",(ModelNode*) &iedModel_PROT_VZGGIO16_Alm,(ModelNode*) &iedModel_PROT_VZGGIO16_Alm_t,NULL,0,IEC61850_FC_ST,IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED,NULL,0};
DataAttribute iedModel_PROT_VZGGIO16_Alm_t = {DataAttributeModelType,"t",(ModelNode*) &iedModel_PROT_VZGGIO16_Alm,NULL,NULL,0,IEC61850_FC_ST,IEC61850_TIMESTAMP, TRG_OPT_NO,NULL,0};


/*******************************************************
 * UPTOV1
 *******************************************************/
LogicalNode iedModel_PROT_UPTOV1 = {    LogicalNodeModelType,    "UPTOV1",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_UPTOV2,    (ModelNode*) &iedModel_PROT_UPTOV1_Mod};

DataObject iedModel_PROT_UPTOV1_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_UPTOV1,    (ModelNode*) &iedModel_PROT_UPTOV1_Beh,    (ModelNode*) &iedModel_PROT_UPTOV1_Mod_q,0};
DataAttribute iedModel_PROT_UPTOV1_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTOV1_Mod,    (ModelNode*) &iedModel_PROT_UPTOV1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV1_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTOV1_Mod,    (ModelNode*) &iedModel_PROT_UPTOV1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV1_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_UPTOV1_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTOV1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_UPTOV1,    (ModelNode*) &iedModel_PROT_UPTOV1_Health,    (ModelNode*) &iedModel_PROT_UPTOV1_Beh_stVal,0};
DataAttribute iedModel_PROT_UPTOV1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_UPTOV1_Beh,    (ModelNode*) &iedModel_PROT_UPTOV1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTOV1_Beh,    (ModelNode*) &iedModel_PROT_UPTOV1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTOV1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTOV1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_UPTOV1,    (ModelNode*) &iedModel_PROT_UPTOV1_NamPlt,    (ModelNode*) &iedModel_PROT_UPTOV1_Health_stVal,0};
DataAttribute iedModel_PROT_UPTOV1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_UPTOV1_Health,    (ModelNode*) &iedModel_PROT_UPTOV1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTOV1_Health,    (ModelNode*) &iedModel_PROT_UPTOV1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTOV1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTOV1_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_UPTOV1,    (ModelNode*) &iedModel_PROT_UPTOV1_Str, (ModelNode*) &iedModel_PROT_UPTOV1_NamPlt_vendor,0};
DataAttribute iedModel_PROT_UPTOV1_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_UPTOV1_NamPlt,    (ModelNode*) &iedModel_PROT_UPTOV1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV1_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_UPTOV1_NamPlt,    (ModelNode*) &iedModel_PROT_UPTOV1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV1_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_UPTOV1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_UPTOV1_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_UPTOV1,  	(ModelNode*)&iedModel_PROT_UPTOV1_Op, (ModelNode*) &iedModel_PROT_UPTOV1_Str_general,0};
DataAttribute iedModel_PROT_UPTOV1_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_UPTOV1_Str,  (ModelNode*) &iedModel_PROT_UPTOV1_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV1_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_UPTOV1_Str,  (ModelNode*) &iedModel_PROT_UPTOV1_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV1_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_UPTOV1_Str,  (ModelNode*) &iedModel_PROT_UPTOV1_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV1_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_UPTOV1_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_UPTOV1_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_UPTOV1,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_UPTOV1_Op_general,0};
DataAttribute iedModel_PROT_UPTOV1_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_UPTOV1_Op,  (ModelNode*) &iedModel_PROT_UPTOV1_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV1_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_UPTOV1_Op,  (ModelNode*) &iedModel_PROT_UPTOV1_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV1_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_UPTOV1_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * UPTOV2
 *******************************************************/
LogicalNode iedModel_PROT_UPTOV2 = {    LogicalNodeModelType,    "UPTOV2",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_UPTOV3,    (ModelNode*) &iedModel_PROT_UPTOV2_Mod};

DataObject iedModel_PROT_UPTOV2_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_UPTOV2,    (ModelNode*) &iedModel_PROT_UPTOV2_Beh,    (ModelNode*) &iedModel_PROT_UPTOV2_Mod_q,0};
DataAttribute iedModel_PROT_UPTOV2_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTOV2_Mod,    (ModelNode*) &iedModel_PROT_UPTOV2_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV2_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTOV2_Mod,    (ModelNode*) &iedModel_PROT_UPTOV2_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV2_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_UPTOV2_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTOV2_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_UPTOV2,    (ModelNode*) &iedModel_PROT_UPTOV2_Health,    (ModelNode*) &iedModel_PROT_UPTOV2_Beh_stVal,0};
DataAttribute iedModel_PROT_UPTOV2_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_UPTOV2_Beh,    (ModelNode*) &iedModel_PROT_UPTOV2_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV2_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTOV2_Beh,    (ModelNode*) &iedModel_PROT_UPTOV2_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV2_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTOV2_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTOV2_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_UPTOV2,    (ModelNode*) &iedModel_PROT_UPTOV2_NamPlt,    (ModelNode*) &iedModel_PROT_UPTOV2_Health_stVal,0};
DataAttribute iedModel_PROT_UPTOV2_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_UPTOV2_Health,    (ModelNode*) &iedModel_PROT_UPTOV2_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV2_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTOV2_Health,    (ModelNode*) &iedModel_PROT_UPTOV2_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV2_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTOV2_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTOV2_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_UPTOV2,    (ModelNode*) &iedModel_PROT_UPTOV2_Str, (ModelNode*) &iedModel_PROT_UPTOV2_NamPlt_vendor,0};
DataAttribute iedModel_PROT_UPTOV2_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_UPTOV2_NamPlt,    (ModelNode*) &iedModel_PROT_UPTOV2_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV2_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_UPTOV2_NamPlt,    (ModelNode*) &iedModel_PROT_UPTOV2_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV2_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_UPTOV2_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_UPTOV2_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_UPTOV2,  	(ModelNode*)&iedModel_PROT_UPTOV2_Op, (ModelNode*) &iedModel_PROT_UPTOV2_Str_general,0};
DataAttribute iedModel_PROT_UPTOV2_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_UPTOV2_Str,  (ModelNode*) &iedModel_PROT_UPTOV2_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV2_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_UPTOV2_Str,  (ModelNode*) &iedModel_PROT_UPTOV2_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV2_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_UPTOV2_Str,  (ModelNode*) &iedModel_PROT_UPTOV2_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV2_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_UPTOV2_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_UPTOV2_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_UPTOV2,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_UPTOV2_Op_general,0};
DataAttribute iedModel_PROT_UPTOV2_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_UPTOV2_Op,  (ModelNode*) &iedModel_PROT_UPTOV2_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV2_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_UPTOV2_Op,  (ModelNode*) &iedModel_PROT_UPTOV2_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV2_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_UPTOV2_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * UPTOV3
 *******************************************************/
LogicalNode iedModel_PROT_UPTOV3 = {    LogicalNodeModelType,    "UPTOV3",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_UPTOV4,    (ModelNode*) &iedModel_PROT_UPTOV3_Mod};

DataObject iedModel_PROT_UPTOV3_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_UPTOV3,    (ModelNode*) &iedModel_PROT_UPTOV3_Beh,    (ModelNode*) &iedModel_PROT_UPTOV3_Mod_q,0};
DataAttribute iedModel_PROT_UPTOV3_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTOV3_Mod,    (ModelNode*) &iedModel_PROT_UPTOV3_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV3_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTOV3_Mod,    (ModelNode*) &iedModel_PROT_UPTOV3_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV3_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_UPTOV3_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTOV3_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_UPTOV3,    (ModelNode*) &iedModel_PROT_UPTOV3_Health,    (ModelNode*) &iedModel_PROT_UPTOV3_Beh_stVal,0};
DataAttribute iedModel_PROT_UPTOV3_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_UPTOV3_Beh,    (ModelNode*) &iedModel_PROT_UPTOV3_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV3_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTOV3_Beh,    (ModelNode*) &iedModel_PROT_UPTOV3_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV3_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTOV3_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTOV3_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_UPTOV3,    (ModelNode*) &iedModel_PROT_UPTOV3_NamPlt,    (ModelNode*) &iedModel_PROT_UPTOV3_Health_stVal,0};
DataAttribute iedModel_PROT_UPTOV3_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_UPTOV3_Health,    (ModelNode*) &iedModel_PROT_UPTOV3_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV3_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTOV3_Health,    (ModelNode*) &iedModel_PROT_UPTOV3_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV3_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTOV3_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTOV3_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_UPTOV3,    (ModelNode*) &iedModel_PROT_UPTOV3_Str, (ModelNode*) &iedModel_PROT_UPTOV3_NamPlt_vendor,0};
DataAttribute iedModel_PROT_UPTOV3_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_UPTOV3_NamPlt,    (ModelNode*) &iedModel_PROT_UPTOV3_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV3_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_UPTOV3_NamPlt,    (ModelNode*) &iedModel_PROT_UPTOV3_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV3_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_UPTOV3_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_UPTOV3_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_UPTOV3,  	(ModelNode*)&iedModel_PROT_UPTOV3_Op, (ModelNode*) &iedModel_PROT_UPTOV3_Str_general,0};
DataAttribute iedModel_PROT_UPTOV3_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_UPTOV3_Str,  (ModelNode*) &iedModel_PROT_UPTOV3_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV3_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_UPTOV3_Str,  (ModelNode*) &iedModel_PROT_UPTOV3_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV3_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_UPTOV3_Str,  (ModelNode*) &iedModel_PROT_UPTOV3_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV3_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_UPTOV3_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_UPTOV3_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_UPTOV3,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_UPTOV3_Op_general,0};
DataAttribute iedModel_PROT_UPTOV3_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_UPTOV3_Op,  (ModelNode*) &iedModel_PROT_UPTOV3_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV3_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_UPTOV3_Op,  (ModelNode*) &iedModel_PROT_UPTOV3_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV3_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_UPTOV3_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * UPTOV4
 *******************************************************/
LogicalNode iedModel_PROT_UPTOV4 = {    LogicalNodeModelType,    "UPTOV4",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_UPTUV1,    (ModelNode*) &iedModel_PROT_UPTOV4_Mod};

DataObject iedModel_PROT_UPTOV4_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_UPTOV4,    (ModelNode*) &iedModel_PROT_UPTOV4_Beh,    (ModelNode*) &iedModel_PROT_UPTOV4_Mod_q,0};
DataAttribute iedModel_PROT_UPTOV4_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTOV4_Mod,    (ModelNode*) &iedModel_PROT_UPTOV4_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV4_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTOV4_Mod,    (ModelNode*) &iedModel_PROT_UPTOV4_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV4_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_UPTOV4_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};
//DataAttribute iedModel_PROT_UPTOV4_Mod_ctlModel = {   DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_PROT_UPTOV4_Mod,    NULL,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTOV4_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_UPTOV4,    (ModelNode*) &iedModel_PROT_UPTOV4_Health,    (ModelNode*) &iedModel_PROT_UPTOV4_Beh_stVal,0};
DataAttribute iedModel_PROT_UPTOV4_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_UPTOV4_Beh,    (ModelNode*) &iedModel_PROT_UPTOV4_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV4_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTOV4_Beh,    (ModelNode*) &iedModel_PROT_UPTOV4_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV4_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTOV4_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTOV4_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_UPTOV4,    (ModelNode*) &iedModel_PROT_UPTOV4_NamPlt,    (ModelNode*) &iedModel_PROT_UPTOV4_Health_stVal,0};
DataAttribute iedModel_PROT_UPTOV4_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_UPTOV4_Health,    (ModelNode*) &iedModel_PROT_UPTOV4_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV4_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTOV4_Health,    (ModelNode*) &iedModel_PROT_UPTOV4_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV4_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTOV4_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTOV4_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_UPTOV4,    (ModelNode*) &iedModel_PROT_UPTOV4_Str, (ModelNode*) &iedModel_PROT_UPTOV4_NamPlt_vendor,0};
DataAttribute iedModel_PROT_UPTOV4_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_UPTOV4_NamPlt,    (ModelNode*) &iedModel_PROT_UPTOV4_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV4_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_UPTOV4_NamPlt,    (ModelNode*) &iedModel_PROT_UPTOV4_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV4_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_UPTOV4_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_UPTOV4_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_UPTOV4,  	(ModelNode*)&iedModel_PROT_UPTOV4_Op, (ModelNode*) &iedModel_PROT_UPTOV4_Str_general,0};
DataAttribute iedModel_PROT_UPTOV4_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_UPTOV4_Str,  (ModelNode*) &iedModel_PROT_UPTOV4_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV4_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_UPTOV4_Str,  (ModelNode*) &iedModel_PROT_UPTOV4_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV4_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_UPTOV4_Str,  (ModelNode*) &iedModel_PROT_UPTOV4_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV4_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_UPTOV4_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_UPTOV4_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_UPTOV4,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_UPTOV4_Op_general,0};
DataAttribute iedModel_PROT_UPTOV4_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_UPTOV4_Op,  (ModelNode*) &iedModel_PROT_UPTOV4_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV4_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_UPTOV4_Op,  (ModelNode*) &iedModel_PROT_UPTOV4_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTOV4_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_UPTOV4_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * UPTUV1
 *******************************************************/
LogicalNode iedModel_PROT_UPTUV1 = {    LogicalNodeModelType,    "UPTUV1",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_UPTUV2,    (ModelNode*) &iedModel_PROT_UPTUV1_Mod};

DataObject iedModel_PROT_UPTUV1_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_UPTUV1,    (ModelNode*) &iedModel_PROT_UPTUV1_Beh,    (ModelNode*) &iedModel_PROT_UPTUV1_Mod_q,0};
DataAttribute iedModel_PROT_UPTUV1_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTUV1_Mod,    (ModelNode*) &iedModel_PROT_UPTUV1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV1_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTUV1_Mod,    (ModelNode*) &iedModel_PROT_UPTUV1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV1_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_UPTUV1_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTUV1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_UPTUV1,    (ModelNode*) &iedModel_PROT_UPTUV1_Health,    (ModelNode*) &iedModel_PROT_UPTUV1_Beh_stVal,0};
DataAttribute iedModel_PROT_UPTUV1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_UPTUV1_Beh,    (ModelNode*) &iedModel_PROT_UPTUV1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTUV1_Beh,    (ModelNode*) &iedModel_PROT_UPTUV1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTUV1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTUV1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_UPTUV1,    (ModelNode*) &iedModel_PROT_UPTUV1_NamPlt,    (ModelNode*) &iedModel_PROT_UPTUV1_Health_stVal,0};
DataAttribute iedModel_PROT_UPTUV1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_UPTUV1_Health,    (ModelNode*) &iedModel_PROT_UPTUV1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTUV1_Health,    (ModelNode*) &iedModel_PROT_UPTUV1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTUV1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTUV1_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_UPTUV1,    (ModelNode*) &iedModel_PROT_UPTUV1_Str, (ModelNode*) &iedModel_PROT_UPTUV1_NamPlt_vendor,0};
DataAttribute iedModel_PROT_UPTUV1_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_UPTUV1_NamPlt,    (ModelNode*) &iedModel_PROT_UPTUV1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV1_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_UPTUV1_NamPlt,    (ModelNode*) &iedModel_PROT_UPTUV1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV1_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_UPTUV1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_UPTUV1_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_UPTUV1,  	(ModelNode*)&iedModel_PROT_UPTUV1_Op, (ModelNode*) &iedModel_PROT_UPTUV1_Str_general,0};
DataAttribute iedModel_PROT_UPTUV1_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_UPTUV1_Str,  (ModelNode*) &iedModel_PROT_UPTUV1_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV1_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_UPTUV1_Str,  (ModelNode*) &iedModel_PROT_UPTUV1_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV1_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_UPTUV1_Str,  (ModelNode*) &iedModel_PROT_UPTUV1_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV1_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_UPTUV1_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_UPTUV1_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_UPTUV1,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_UPTUV1_Op_general,0};
DataAttribute iedModel_PROT_UPTUV1_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_UPTUV1_Op,  (ModelNode*) &iedModel_PROT_UPTUV1_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV1_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_UPTUV1_Op,  (ModelNode*) &iedModel_PROT_UPTUV1_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV1_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_UPTUV1_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * UPTUV2
 *******************************************************/
LogicalNode iedModel_PROT_UPTUV2 = {    LogicalNodeModelType,    "UPTUV2",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_UPTUV3,    (ModelNode*) &iedModel_PROT_UPTUV2_Mod};

DataObject iedModel_PROT_UPTUV2_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_UPTUV2,    (ModelNode*) &iedModel_PROT_UPTUV2_Beh,    (ModelNode*) &iedModel_PROT_UPTUV2_Mod_q,0};
DataAttribute iedModel_PROT_UPTUV2_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTUV2_Mod,    (ModelNode*) &iedModel_PROT_UPTUV2_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV2_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTUV2_Mod,    (ModelNode*) &iedModel_PROT_UPTUV2_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV2_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_UPTUV2_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTUV2_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_UPTUV2,    (ModelNode*) &iedModel_PROT_UPTUV2_Health,    (ModelNode*) &iedModel_PROT_UPTUV2_Beh_stVal,0};
DataAttribute iedModel_PROT_UPTUV2_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_UPTUV2_Beh,    (ModelNode*) &iedModel_PROT_UPTUV2_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV2_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTUV2_Beh,    (ModelNode*) &iedModel_PROT_UPTUV2_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV2_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTUV2_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTUV2_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_UPTUV2,    (ModelNode*) &iedModel_PROT_UPTUV2_NamPlt,    (ModelNode*) &iedModel_PROT_UPTUV2_Health_stVal,0};
DataAttribute iedModel_PROT_UPTUV2_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_UPTUV2_Health,    (ModelNode*) &iedModel_PROT_UPTUV2_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV2_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTUV2_Health,    (ModelNode*) &iedModel_PROT_UPTUV2_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV2_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTUV2_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTUV2_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_UPTUV2,    (ModelNode*) &iedModel_PROT_UPTUV2_Str, (ModelNode*) &iedModel_PROT_UPTUV2_NamPlt_vendor,0};
DataAttribute iedModel_PROT_UPTUV2_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_UPTUV2_NamPlt,    (ModelNode*) &iedModel_PROT_UPTUV2_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV2_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_UPTUV2_NamPlt,    (ModelNode*) &iedModel_PROT_UPTUV2_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV2_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_UPTUV2_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_UPTUV2_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_UPTUV2,  	(ModelNode*)&iedModel_PROT_UPTUV2_Op, (ModelNode*) &iedModel_PROT_UPTUV2_Str_general,0};
DataAttribute iedModel_PROT_UPTUV2_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_UPTUV2_Str,  (ModelNode*) &iedModel_PROT_UPTUV2_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV2_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_UPTUV2_Str,  (ModelNode*) &iedModel_PROT_UPTUV2_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV2_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_UPTUV2_Str,  (ModelNode*) &iedModel_PROT_UPTUV2_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV2_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_UPTUV2_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_UPTUV2_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_UPTUV2,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_UPTUV2_Op_general,0};
DataAttribute iedModel_PROT_UPTUV2_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_UPTUV2_Op,  (ModelNode*) &iedModel_PROT_UPTUV2_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV2_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_UPTUV2_Op,  (ModelNode*) &iedModel_PROT_UPTUV2_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV2_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_UPTUV2_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * UPTUV3
 *******************************************************/
LogicalNode iedModel_PROT_UPTUV3 = {    LogicalNodeModelType,    "UPTUV3",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_UPTUV4,    (ModelNode*) &iedModel_PROT_UPTUV3_Mod};

DataObject iedModel_PROT_UPTUV3_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_UPTUV3,    (ModelNode*) &iedModel_PROT_UPTUV3_Beh,    (ModelNode*) &iedModel_PROT_UPTUV3_Mod_q,0};
DataAttribute iedModel_PROT_UPTUV3_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTUV3_Mod,    (ModelNode*) &iedModel_PROT_UPTUV3_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV3_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTUV3_Mod,    (ModelNode*) &iedModel_PROT_UPTUV3_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV3_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_UPTUV3_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTUV3_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_UPTUV3,    (ModelNode*) &iedModel_PROT_UPTUV3_Health,    (ModelNode*) &iedModel_PROT_UPTUV3_Beh_stVal,0};
DataAttribute iedModel_PROT_UPTUV3_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_UPTUV3_Beh,    (ModelNode*) &iedModel_PROT_UPTUV3_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV3_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTUV3_Beh,    (ModelNode*) &iedModel_PROT_UPTUV3_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV3_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTUV3_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTUV3_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_UPTUV3,    (ModelNode*) &iedModel_PROT_UPTUV3_NamPlt,    (ModelNode*) &iedModel_PROT_UPTUV3_Health_stVal,0};
DataAttribute iedModel_PROT_UPTUV3_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_UPTUV3_Health,    (ModelNode*) &iedModel_PROT_UPTUV3_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV3_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTUV3_Health,    (ModelNode*) &iedModel_PROT_UPTUV3_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV3_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTUV3_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTUV3_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_UPTUV3,    (ModelNode*) &iedModel_PROT_UPTUV3_Str, (ModelNode*) &iedModel_PROT_UPTUV3_NamPlt_vendor,0};
DataAttribute iedModel_PROT_UPTUV3_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_UPTUV3_NamPlt,    (ModelNode*) &iedModel_PROT_UPTUV3_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV3_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_UPTUV3_NamPlt,    (ModelNode*) &iedModel_PROT_UPTUV3_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV3_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_UPTUV3_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_UPTUV3_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_UPTUV3,  	(ModelNode*)&iedModel_PROT_UPTUV3_Op, (ModelNode*) &iedModel_PROT_UPTUV3_Str_general,0};
DataAttribute iedModel_PROT_UPTUV3_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_UPTUV3_Str,  (ModelNode*) &iedModel_PROT_UPTUV3_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV3_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_UPTUV3_Str,  (ModelNode*) &iedModel_PROT_UPTUV3_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV3_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_UPTUV3_Str,  (ModelNode*) &iedModel_PROT_UPTUV3_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV3_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_UPTUV3_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_UPTUV3_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_UPTUV3,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_UPTUV3_Op_general,0};
DataAttribute iedModel_PROT_UPTUV3_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_UPTUV3_Op,  (ModelNode*) &iedModel_PROT_UPTUV3_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV3_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_UPTUV3_Op,  (ModelNode*) &iedModel_PROT_UPTUV3_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV3_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_UPTUV3_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * UPTUV4
 *******************************************************/
LogicalNode iedModel_PROT_UPTUV4 = {    LogicalNodeModelType,    "UPTUV4",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_PTOF1,    (ModelNode*) &iedModel_PROT_UPTUV4_Mod};

DataObject iedModel_PROT_UPTUV4_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_UPTUV4,    (ModelNode*) &iedModel_PROT_UPTUV4_Beh,    (ModelNode*) &iedModel_PROT_UPTUV4_Mod_q,0};
DataAttribute iedModel_PROT_UPTUV4_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTUV4_Mod,    (ModelNode*) &iedModel_PROT_UPTUV4_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV4_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTUV4_Mod,    (ModelNode*) &iedModel_PROT_UPTUV4_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV4_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_UPTUV4_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTUV4_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_UPTUV4,    (ModelNode*) &iedModel_PROT_UPTUV4_Health,    (ModelNode*) &iedModel_PROT_UPTUV4_Beh_stVal,0};
DataAttribute iedModel_PROT_UPTUV4_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_UPTUV4_Beh,    (ModelNode*) &iedModel_PROT_UPTUV4_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV4_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTUV4_Beh,    (ModelNode*) &iedModel_PROT_UPTUV4_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV4_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTUV4_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTUV4_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_UPTUV4,    (ModelNode*) &iedModel_PROT_UPTUV4_NamPlt,    (ModelNode*) &iedModel_PROT_UPTUV4_Health_stVal,0};
DataAttribute iedModel_PROT_UPTUV4_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_UPTUV4_Health,    (ModelNode*) &iedModel_PROT_UPTUV4_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV4_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_UPTUV4_Health,    (ModelNode*) &iedModel_PROT_UPTUV4_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV4_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_UPTUV4_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_UPTUV4_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_UPTUV4,    (ModelNode*) &iedModel_PROT_UPTUV4_Str, (ModelNode*) &iedModel_PROT_UPTUV4_NamPlt_vendor,0};
DataAttribute iedModel_PROT_UPTUV4_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_UPTUV4_NamPlt,    (ModelNode*) &iedModel_PROT_UPTUV4_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV4_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_UPTUV4_NamPlt,    (ModelNode*) &iedModel_PROT_UPTUV4_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV4_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_UPTUV4_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_UPTUV4_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_UPTUV4,  	(ModelNode*)&iedModel_PROT_UPTUV4_Op, (ModelNode*) &iedModel_PROT_UPTUV4_Str_general,0};
DataAttribute iedModel_PROT_UPTUV4_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_UPTUV4_Str,  (ModelNode*) &iedModel_PROT_UPTUV4_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV4_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_UPTUV4_Str,  (ModelNode*) &iedModel_PROT_UPTUV4_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV4_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_UPTUV4_Str,  (ModelNode*) &iedModel_PROT_UPTUV4_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV4_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_UPTUV4_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_UPTUV4_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_UPTUV4,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_UPTUV4_Op_general,0};
DataAttribute iedModel_PROT_UPTUV4_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_UPTUV4_Op,  (ModelNode*) &iedModel_PROT_UPTUV4_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV4_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_UPTUV4_Op,  (ModelNode*) &iedModel_PROT_UPTUV4_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_UPTUV4_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_UPTUV4_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * PTOF1
 *******************************************************/
LogicalNode iedModel_PROT_PTOF1 = {    LogicalNodeModelType,    "PTOF1",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_PTOF2,    (ModelNode*) &iedModel_PROT_PTOF1_Mod};

DataObject iedModel_PROT_PTOF1_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_PTOF1,    (ModelNode*) &iedModel_PROT_PTOF1_Beh,    (ModelNode*) &iedModel_PROT_PTOF1_Mod_q,0};
DataAttribute iedModel_PROT_PTOF1_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTOF1_Mod,    (ModelNode*) &iedModel_PROT_PTOF1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF1_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTOF1_Mod,    (ModelNode*) &iedModel_PROT_PTOF1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF1_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_PTOF1_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTOF1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_PTOF1,    (ModelNode*) &iedModel_PROT_PTOF1_Health,    (ModelNode*) &iedModel_PROT_PTOF1_Beh_stVal,0};
DataAttribute iedModel_PROT_PTOF1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PTOF1_Beh,    (ModelNode*) &iedModel_PROT_PTOF1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTOF1_Beh,    (ModelNode*) &iedModel_PROT_PTOF1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTOF1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTOF1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_PTOF1,    (ModelNode*) &iedModel_PROT_PTOF1_NamPlt,    (ModelNode*) &iedModel_PROT_PTOF1_Health_stVal,0};
DataAttribute iedModel_PROT_PTOF1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PTOF1_Health,    (ModelNode*) &iedModel_PROT_PTOF1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTOF1_Health,    (ModelNode*) &iedModel_PROT_PTOF1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTOF1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTOF1_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_PTOF1,    (ModelNode*) &iedModel_PROT_PTOF1_Str, (ModelNode*) &iedModel_PROT_PTOF1_NamPlt_vendor,0};
DataAttribute iedModel_PROT_PTOF1_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_PTOF1_NamPlt,    (ModelNode*) &iedModel_PROT_PTOF1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF1_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_PTOF1_NamPlt,    (ModelNode*) &iedModel_PROT_PTOF1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF1_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_PTOF1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_PTOF1_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_PTOF1,  	(ModelNode*)&iedModel_PROT_PTOF1_Op, (ModelNode*) &iedModel_PROT_PTOF1_Str_general,0};
DataAttribute iedModel_PROT_PTOF1_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PTOF1_Str,  (ModelNode*) &iedModel_PROT_PTOF1_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF1_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_PTOF1_Str,  (ModelNode*) &iedModel_PROT_PTOF1_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF1_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PTOF1_Str,  (ModelNode*) &iedModel_PROT_PTOF1_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF1_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PTOF1_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_PTOF1_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_PTOF1,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_PTOF1_Op_general,0};
DataAttribute iedModel_PROT_PTOF1_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PTOF1_Op,  (ModelNode*) &iedModel_PROT_PTOF1_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF1_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PTOF1_Op,  (ModelNode*) &iedModel_PROT_PTOF1_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF1_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PTOF1_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * PTOF2
 *******************************************************/
LogicalNode iedModel_PROT_PTOF2 = {    LogicalNodeModelType,    "PTOF2",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_PTOF3,    (ModelNode*) &iedModel_PROT_PTOF2_Mod};

DataObject iedModel_PROT_PTOF2_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_PTOF2,    (ModelNode*) &iedModel_PROT_PTOF2_Beh,    (ModelNode*) &iedModel_PROT_PTOF2_Mod_q,0};
DataAttribute iedModel_PROT_PTOF2_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTOF2_Mod,    (ModelNode*) &iedModel_PROT_PTOF2_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF2_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTOF2_Mod,    (ModelNode*) &iedModel_PROT_PTOF2_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF2_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_PTOF2_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTOF2_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_PTOF2,    (ModelNode*) &iedModel_PROT_PTOF2_Health,    (ModelNode*) &iedModel_PROT_PTOF2_Beh_stVal,0};
DataAttribute iedModel_PROT_PTOF2_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PTOF2_Beh,    (ModelNode*) &iedModel_PROT_PTOF2_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF2_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTOF2_Beh,    (ModelNode*) &iedModel_PROT_PTOF2_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF2_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTOF2_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTOF2_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_PTOF2,    (ModelNode*) &iedModel_PROT_PTOF2_NamPlt,    (ModelNode*) &iedModel_PROT_PTOF2_Health_stVal,0};
DataAttribute iedModel_PROT_PTOF2_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PTOF2_Health,    (ModelNode*) &iedModel_PROT_PTOF2_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF2_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTOF2_Health,    (ModelNode*) &iedModel_PROT_PTOF2_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF2_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTOF2_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTOF2_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_PTOF2,    (ModelNode*) &iedModel_PROT_PTOF2_Str, (ModelNode*) &iedModel_PROT_PTOF2_NamPlt_vendor,0};
DataAttribute iedModel_PROT_PTOF2_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_PTOF2_NamPlt,    (ModelNode*) &iedModel_PROT_PTOF2_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF2_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_PTOF2_NamPlt,    (ModelNode*) &iedModel_PROT_PTOF2_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF2_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_PTOF2_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_PTOF2_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_PTOF2,  	(ModelNode*)&iedModel_PROT_PTOF2_Op, (ModelNode*) &iedModel_PROT_PTOF2_Str_general,0};
DataAttribute iedModel_PROT_PTOF2_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PTOF2_Str,  (ModelNode*) &iedModel_PROT_PTOF2_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF2_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_PTOF2_Str,  (ModelNode*) &iedModel_PROT_PTOF2_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF2_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PTOF2_Str,  (ModelNode*) &iedModel_PROT_PTOF2_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF2_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PTOF2_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_PTOF2_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_PTOF2,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_PTOF2_Op_general,0};
DataAttribute iedModel_PROT_PTOF2_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PTOF2_Op,  (ModelNode*) &iedModel_PROT_PTOF2_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF2_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PTOF2_Op,  (ModelNode*) &iedModel_PROT_PTOF2_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF2_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PTOF2_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * PTOF3
 *******************************************************/
LogicalNode iedModel_PROT_PTOF3 = {    LogicalNodeModelType,    "PTOF3",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_PTOF4,    (ModelNode*) &iedModel_PROT_PTOF3_Mod};

DataObject iedModel_PROT_PTOF3_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_PTOF3,    (ModelNode*) &iedModel_PROT_PTOF3_Beh,    (ModelNode*) &iedModel_PROT_PTOF3_Mod_q,0};
DataAttribute iedModel_PROT_PTOF3_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTOF3_Mod,    (ModelNode*) &iedModel_PROT_PTOF3_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF3_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTOF3_Mod,    (ModelNode*) &iedModel_PROT_PTOF3_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF3_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_PTOF3_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTOF3_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_PTOF3,    (ModelNode*) &iedModel_PROT_PTOF3_Health,    (ModelNode*) &iedModel_PROT_PTOF3_Beh_stVal,0};
DataAttribute iedModel_PROT_PTOF3_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PTOF3_Beh,    (ModelNode*) &iedModel_PROT_PTOF3_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF3_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTOF3_Beh,    (ModelNode*) &iedModel_PROT_PTOF3_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF3_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTOF3_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTOF3_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_PTOF3,    (ModelNode*) &iedModel_PROT_PTOF3_NamPlt,    (ModelNode*) &iedModel_PROT_PTOF3_Health_stVal,0};
DataAttribute iedModel_PROT_PTOF3_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PTOF3_Health,    (ModelNode*) &iedModel_PROT_PTOF3_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF3_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTOF3_Health,    (ModelNode*) &iedModel_PROT_PTOF3_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF3_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTOF3_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTOF3_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_PTOF3,    (ModelNode*) &iedModel_PROT_PTOF3_Str, (ModelNode*) &iedModel_PROT_PTOF3_NamPlt_vendor,0};
DataAttribute iedModel_PROT_PTOF3_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_PTOF3_NamPlt,    (ModelNode*) &iedModel_PROT_PTOF3_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF3_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_PTOF3_NamPlt,    (ModelNode*) &iedModel_PROT_PTOF3_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF3_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_PTOF3_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_PTOF3_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_PTOF3,  	(ModelNode*)&iedModel_PROT_PTOF3_Op, (ModelNode*) &iedModel_PROT_PTOF3_Str_general,0};
DataAttribute iedModel_PROT_PTOF3_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PTOF3_Str,  (ModelNode*) &iedModel_PROT_PTOF3_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF3_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_PTOF3_Str,  (ModelNode*) &iedModel_PROT_PTOF3_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF3_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PTOF3_Str,  (ModelNode*) &iedModel_PROT_PTOF3_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF3_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PTOF3_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_PTOF3_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_PTOF3,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_PTOF3_Op_general,0};
DataAttribute iedModel_PROT_PTOF3_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PTOF3_Op,  (ModelNode*) &iedModel_PROT_PTOF3_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF3_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PTOF3_Op,  (ModelNode*) &iedModel_PROT_PTOF3_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF3_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PTOF3_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * PTOF4
 *******************************************************/
LogicalNode iedModel_PROT_PTOF4 = {    LogicalNodeModelType,    "PTOF4",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_PTUF1,    (ModelNode*) &iedModel_PROT_PTOF4_Mod};

DataObject iedModel_PROT_PTOF4_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_PTOF4,    (ModelNode*) &iedModel_PROT_PTOF4_Beh,    (ModelNode*) &iedModel_PROT_PTOF4_Mod_q,0};
DataAttribute iedModel_PROT_PTOF4_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTOF4_Mod,    (ModelNode*) &iedModel_PROT_PTOF4_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF4_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTOF4_Mod,    (ModelNode*) &iedModel_PROT_PTOF4_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF4_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_PTOF4_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTOF4_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_PTOF4,    (ModelNode*) &iedModel_PROT_PTOF4_Health,    (ModelNode*) &iedModel_PROT_PTOF4_Beh_stVal,0};
DataAttribute iedModel_PROT_PTOF4_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PTOF4_Beh,    (ModelNode*) &iedModel_PROT_PTOF4_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF4_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTOF4_Beh,    (ModelNode*) &iedModel_PROT_PTOF4_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF4_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTOF4_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTOF4_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_PTOF4,    (ModelNode*) &iedModel_PROT_PTOF4_NamPlt,    (ModelNode*) &iedModel_PROT_PTOF4_Health_stVal,0};
DataAttribute iedModel_PROT_PTOF4_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PTOF4_Health,    (ModelNode*) &iedModel_PROT_PTOF4_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF4_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTOF4_Health,    (ModelNode*) &iedModel_PROT_PTOF4_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF4_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTOF4_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTOF4_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_PTOF4,    (ModelNode*) &iedModel_PROT_PTOF4_Str, (ModelNode*) &iedModel_PROT_PTOF4_NamPlt_vendor,0};
DataAttribute iedModel_PROT_PTOF4_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_PTOF4_NamPlt,    (ModelNode*) &iedModel_PROT_PTOF4_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF4_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_PTOF4_NamPlt,    (ModelNode*) &iedModel_PROT_PTOF4_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF4_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_PTOF4_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_PTOF4_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_PTOF4,  	(ModelNode*)&iedModel_PROT_PTOF4_Op, (ModelNode*) &iedModel_PROT_PTOF4_Str_general,0};
DataAttribute iedModel_PROT_PTOF4_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PTOF4_Str,  (ModelNode*) &iedModel_PROT_PTOF4_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF4_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_PTOF4_Str,  (ModelNode*) &iedModel_PROT_PTOF4_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF4_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PTOF4_Str,  (ModelNode*) &iedModel_PROT_PTOF4_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF4_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PTOF4_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_PTOF4_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_PTOF4,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_PTOF4_Op_general,0};
DataAttribute iedModel_PROT_PTOF4_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PTOF4_Op,  (ModelNode*) &iedModel_PROT_PTOF4_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF4_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PTOF4_Op,  (ModelNode*) &iedModel_PROT_PTOF4_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTOF4_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PTOF4_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * PTUF1
 *******************************************************/
LogicalNode iedModel_PROT_PTUF1 = {    LogicalNodeModelType,    "PTUF1",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_PTUF2,    (ModelNode*) &iedModel_PROT_PTUF1_Mod};

DataObject iedModel_PROT_PTUF1_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_PTUF1,    (ModelNode*) &iedModel_PROT_PTUF1_Beh,    (ModelNode*) &iedModel_PROT_PTUF1_Mod_q,0};
DataAttribute iedModel_PROT_PTUF1_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTUF1_Mod,    (ModelNode*) &iedModel_PROT_PTUF1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF1_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTUF1_Mod,    (ModelNode*) &iedModel_PROT_PTUF1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF1_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_PTUF1_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTUF1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_PTUF1,    (ModelNode*) &iedModel_PROT_PTUF1_Health,    (ModelNode*) &iedModel_PROT_PTUF1_Beh_stVal,0};
DataAttribute iedModel_PROT_PTUF1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PTUF1_Beh,    (ModelNode*) &iedModel_PROT_PTUF1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTUF1_Beh,    (ModelNode*) &iedModel_PROT_PTUF1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTUF1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTUF1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_PTUF1,    (ModelNode*) &iedModel_PROT_PTUF1_NamPlt,    (ModelNode*) &iedModel_PROT_PTUF1_Health_stVal,0};
DataAttribute iedModel_PROT_PTUF1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PTUF1_Health,    (ModelNode*) &iedModel_PROT_PTUF1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTUF1_Health,    (ModelNode*) &iedModel_PROT_PTUF1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTUF1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTUF1_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_PTUF1,    (ModelNode*) &iedModel_PROT_PTUF1_Str, (ModelNode*) &iedModel_PROT_PTUF1_NamPlt_vendor,0};
DataAttribute iedModel_PROT_PTUF1_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_PTUF1_NamPlt,    (ModelNode*) &iedModel_PROT_PTUF1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF1_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_PTUF1_NamPlt,    (ModelNode*) &iedModel_PROT_PTUF1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF1_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_PTUF1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_PTUF1_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_PTUF1,  	(ModelNode*)&iedModel_PROT_PTUF1_Op, (ModelNode*) &iedModel_PROT_PTUF1_Str_general,0};
DataAttribute iedModel_PROT_PTUF1_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PTUF1_Str,  (ModelNode*) &iedModel_PROT_PTUF1_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF1_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_PTUF1_Str,  (ModelNode*) &iedModel_PROT_PTUF1_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF1_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PTUF1_Str,  (ModelNode*) &iedModel_PROT_PTUF1_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF1_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PTUF1_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_PTUF1_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_PTUF1,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_PTUF1_Op_general,0};
DataAttribute iedModel_PROT_PTUF1_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PTUF1_Op,  (ModelNode*) &iedModel_PROT_PTUF1_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF1_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PTUF1_Op,  (ModelNode*) &iedModel_PROT_PTUF1_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF1_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PTUF1_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * PTUF2
 *******************************************************/
LogicalNode iedModel_PROT_PTUF2 = {    LogicalNodeModelType,    "PTUF2",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_PTUF3,    (ModelNode*) &iedModel_PROT_PTUF2_Mod};

DataObject iedModel_PROT_PTUF2_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_PTUF2,    (ModelNode*) &iedModel_PROT_PTUF2_Beh,    (ModelNode*) &iedModel_PROT_PTUF2_Mod_q,0};
DataAttribute iedModel_PROT_PTUF2_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTUF2_Mod,    (ModelNode*) &iedModel_PROT_PTUF2_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF2_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTUF2_Mod,    (ModelNode*) &iedModel_PROT_PTUF2_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF2_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_PTUF2_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTUF2_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_PTUF2,    (ModelNode*) &iedModel_PROT_PTUF2_Health,    (ModelNode*) &iedModel_PROT_PTUF2_Beh_stVal,0};
DataAttribute iedModel_PROT_PTUF2_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PTUF2_Beh,    (ModelNode*) &iedModel_PROT_PTUF2_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF2_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTUF2_Beh,    (ModelNode*) &iedModel_PROT_PTUF2_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF2_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTUF2_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTUF2_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_PTUF2,    (ModelNode*) &iedModel_PROT_PTUF2_NamPlt,    (ModelNode*) &iedModel_PROT_PTUF2_Health_stVal,0};
DataAttribute iedModel_PROT_PTUF2_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PTUF2_Health,    (ModelNode*) &iedModel_PROT_PTUF2_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF2_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTUF2_Health,    (ModelNode*) &iedModel_PROT_PTUF2_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF2_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTUF2_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTUF2_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_PTUF2,    (ModelNode*) &iedModel_PROT_PTUF2_Str, (ModelNode*) &iedModel_PROT_PTUF2_NamPlt_vendor,0};
DataAttribute iedModel_PROT_PTUF2_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_PTUF2_NamPlt,    (ModelNode*) &iedModel_PROT_PTUF2_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF2_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_PTUF2_NamPlt,    (ModelNode*) &iedModel_PROT_PTUF2_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF2_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_PTUF2_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_PTUF2_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_PTUF2,  	(ModelNode*)&iedModel_PROT_PTUF2_Op, (ModelNode*) &iedModel_PROT_PTUF2_Str_general,0};
DataAttribute iedModel_PROT_PTUF2_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PTUF2_Str,  (ModelNode*) &iedModel_PROT_PTUF2_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF2_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_PTUF2_Str,  (ModelNode*) &iedModel_PROT_PTUF2_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF2_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PTUF2_Str,  (ModelNode*) &iedModel_PROT_PTUF2_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF2_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PTUF2_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_PTUF2_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_PTUF2,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_PTUF2_Op_general,0};
DataAttribute iedModel_PROT_PTUF2_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PTUF2_Op,  (ModelNode*) &iedModel_PROT_PTUF2_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF2_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PTUF2_Op,  (ModelNode*) &iedModel_PROT_PTUF2_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF2_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PTUF2_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * PTUF3
 *******************************************************/
LogicalNode iedModel_PROT_PTUF3 = {    LogicalNodeModelType,    "PTUF3",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_PTUF4,    (ModelNode*) &iedModel_PROT_PTUF3_Mod};

DataObject iedModel_PROT_PTUF3_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_PTUF3,    (ModelNode*) &iedModel_PROT_PTUF3_Beh,    (ModelNode*) &iedModel_PROT_PTUF3_Mod_q,0};
DataAttribute iedModel_PROT_PTUF3_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTUF3_Mod,    (ModelNode*) &iedModel_PROT_PTUF3_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF3_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTUF3_Mod,    (ModelNode*) &iedModel_PROT_PTUF3_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF3_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_PTUF3_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTUF3_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_PTUF3,    (ModelNode*) &iedModel_PROT_PTUF3_Health,    (ModelNode*) &iedModel_PROT_PTUF3_Beh_stVal,0};
DataAttribute iedModel_PROT_PTUF3_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PTUF3_Beh,    (ModelNode*) &iedModel_PROT_PTUF3_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF3_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTUF3_Beh,    (ModelNode*) &iedModel_PROT_PTUF3_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF3_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTUF3_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTUF3_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_PTUF3,    (ModelNode*) &iedModel_PROT_PTUF3_NamPlt,    (ModelNode*) &iedModel_PROT_PTUF3_Health_stVal,0};
DataAttribute iedModel_PROT_PTUF3_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PTUF3_Health,    (ModelNode*) &iedModel_PROT_PTUF3_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF3_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTUF3_Health,    (ModelNode*) &iedModel_PROT_PTUF3_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF3_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTUF3_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTUF3_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_PTUF3,    (ModelNode*) &iedModel_PROT_PTUF3_Str, (ModelNode*) &iedModel_PROT_PTUF3_NamPlt_vendor,0};
DataAttribute iedModel_PROT_PTUF3_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_PTUF3_NamPlt,    (ModelNode*) &iedModel_PROT_PTUF3_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF3_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_PTUF3_NamPlt,    (ModelNode*) &iedModel_PROT_PTUF3_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF3_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_PTUF3_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_PTUF3_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_PTUF3,  	(ModelNode*)&iedModel_PROT_PTUF3_Op, (ModelNode*) &iedModel_PROT_PTUF3_Str_general,0};
DataAttribute iedModel_PROT_PTUF3_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PTUF3_Str,  (ModelNode*) &iedModel_PROT_PTUF3_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF3_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_PTUF3_Str,  (ModelNode*) &iedModel_PROT_PTUF3_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF3_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PTUF3_Str,  (ModelNode*) &iedModel_PROT_PTUF3_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF3_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PTUF3_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_PTUF3_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_PTUF3,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_PTUF3_Op_general,0};
DataAttribute iedModel_PROT_PTUF3_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PTUF3_Op,  (ModelNode*) &iedModel_PROT_PTUF3_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF3_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PTUF3_Op,  (ModelNode*) &iedModel_PROT_PTUF3_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF3_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PTUF3_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * PTUF4
 *******************************************************/
LogicalNode iedModel_PROT_PTUF4 = {    LogicalNodeModelType,    "PTUF4",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_BLKPTTR1,    (ModelNode*) &iedModel_PROT_PTUF4_Mod};

DataObject iedModel_PROT_PTUF4_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_PTUF4,    (ModelNode*) &iedModel_PROT_PTUF4_Beh,    (ModelNode*) &iedModel_PROT_PTUF4_Mod_q,0};
DataAttribute iedModel_PROT_PTUF4_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTUF4_Mod,    (ModelNode*) &iedModel_PROT_PTUF4_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF4_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTUF4_Mod,    (ModelNode*) &iedModel_PROT_PTUF4_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF4_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_PTUF4_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTUF4_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_PTUF4,    (ModelNode*) &iedModel_PROT_PTUF4_Health,    (ModelNode*) &iedModel_PROT_PTUF4_Beh_stVal,0};
DataAttribute iedModel_PROT_PTUF4_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PTUF4_Beh,    (ModelNode*) &iedModel_PROT_PTUF4_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF4_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTUF4_Beh,    (ModelNode*) &iedModel_PROT_PTUF4_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF4_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTUF4_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTUF4_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_PTUF4,    (ModelNode*) &iedModel_PROT_PTUF4_NamPlt,    (ModelNode*) &iedModel_PROT_PTUF4_Health_stVal,0};
DataAttribute iedModel_PROT_PTUF4_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PTUF4_Health,    (ModelNode*) &iedModel_PROT_PTUF4_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF4_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PTUF4_Health,    (ModelNode*) &iedModel_PROT_PTUF4_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF4_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PTUF4_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PTUF4_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_PTUF4,    (ModelNode*) &iedModel_PROT_PTUF4_Str, (ModelNode*) &iedModel_PROT_PTUF4_NamPlt_vendor,0};
DataAttribute iedModel_PROT_PTUF4_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_PTUF4_NamPlt,    (ModelNode*) &iedModel_PROT_PTUF4_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF4_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_PTUF4_NamPlt,    (ModelNode*) &iedModel_PROT_PTUF4_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF4_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_PTUF4_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_PTUF4_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_PTUF4,  	(ModelNode*)&iedModel_PROT_PTUF4_Op, (ModelNode*) &iedModel_PROT_PTUF4_Str_general,0};
DataAttribute iedModel_PROT_PTUF4_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PTUF4_Str,  (ModelNode*) &iedModel_PROT_PTUF4_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF4_Str_dirGeneral = {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_PTUF4_Str,  (ModelNode*) &iedModel_PROT_PTUF4_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF4_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PTUF4_Str,  (ModelNode*) &iedModel_PROT_PTUF4_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF4_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PTUF4_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_PTUF4_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_PTUF4,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_PTUF4_Op_general,0};
DataAttribute iedModel_PROT_PTUF4_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PTUF4_Op,  (ModelNode*) &iedModel_PROT_PTUF4_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF4_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PTUF4_Op,  (ModelNode*) &iedModel_PROT_PTUF4_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PTUF4_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PTUF4_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * BLKPTTR1
 *******************************************************/
LogicalNode iedModel_PROT_BLKPTTR1 = {    LogicalNodeModelType,    "BLKPTTR1",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_QPTTR1,    (ModelNode*) &iedModel_PROT_BLKPTTR1_Mod};

DataObject iedModel_PROT_BLKPTTR1_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_BLKPTTR1,    (ModelNode*) &iedModel_PROT_BLKPTTR1_Beh,    (ModelNode*) &iedModel_PROT_BLKPTTR1_Mod_q,0};
DataAttribute iedModel_PROT_BLKPTTR1_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_BLKPTTR1_Mod,    (ModelNode*) &iedModel_PROT_BLKPTTR1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKPTTR1_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_BLKPTTR1_Mod,    (ModelNode*) &iedModel_PROT_BLKPTTR1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKPTTR1_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_BLKPTTR1_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_BLKPTTR1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_BLKPTTR1,    (ModelNode*) &iedModel_PROT_BLKPTTR1_Health,    (ModelNode*) &iedModel_PROT_BLKPTTR1_Beh_stVal,0};
DataAttribute iedModel_PROT_BLKPTTR1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_BLKPTTR1_Beh,    (ModelNode*) &iedModel_PROT_BLKPTTR1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKPTTR1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_BLKPTTR1_Beh,    (ModelNode*) &iedModel_PROT_BLKPTTR1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKPTTR1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_BLKPTTR1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_BLKPTTR1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_BLKPTTR1,    (ModelNode*) &iedModel_PROT_BLKPTTR1_NamPlt,    (ModelNode*) &iedModel_PROT_BLKPTTR1_Health_stVal,0};
DataAttribute iedModel_PROT_BLKPTTR1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_BLKPTTR1_Health,    (ModelNode*) &iedModel_PROT_BLKPTTR1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKPTTR1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_BLKPTTR1_Health,    (ModelNode*) &iedModel_PROT_BLKPTTR1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKPTTR1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_BLKPTTR1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_BLKPTTR1_NamPlt 			= {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_BLKPTTR1,    (ModelNode*) &iedModel_PROT_BLKPTTR1_TmpRI, (ModelNode*) &iedModel_PROT_BLKPTTR1_NamPlt_vendor,0};
DataAttribute iedModel_PROT_BLKPTTR1_NamPlt_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_BLKPTTR1_NamPlt,    (ModelNode*) &iedModel_PROT_BLKPTTR1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKPTTR1_NamPlt_swRev 	= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_BLKPTTR1_NamPlt,    (ModelNode*) &iedModel_PROT_BLKPTTR1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKPTTR1_NamPlt_d 		= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_BLKPTTR1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_BLKPTTR1_TmpRI 				= { DataObjectModelType, "TmpRI", (ModelNode*) &iedModel_MES_MMXU1, (ModelNode*) &iedModel_PROT_BLKPTTR1_Op, (ModelNode*) &iedModel_PROT_BLKPTTR1_TmpRI_mag, 0 };
DataAttribute iedModel_PROT_BLKPTTR1_TmpRI_mag 		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_PROT_BLKPTTR1_TmpRI, (ModelNode*) &iedModel_PROT_BLKPTTR1_TmpRI_q, (ModelNode*) &iedModel_PROT_BLKPTTR1_TmpRI_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKPTTR1_TmpRI_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_PROT_BLKPTTR1_TmpRI_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_PROT_BLKPTTR1_TmpRI_q 		= { DataAttributeModelType, "q", (ModelNode*) &iedModel_PROT_BLKPTTR1_TmpRI, (ModelNode*) &iedModel_PROT_BLKPTTR1_TmpRI_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_PROT_BLKPTTR1_TmpRI_t 		= { DataAttributeModelType, "t", (ModelNode*) &iedModel_PROT_BLKPTTR1_TmpRI,  (ModelNode*) &iedModel_PROT_BLKPTTR1_TmpRI_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_PROT_BLKPTTR1_TmpRI_db 		= { DataAttributeModelType, "db", (ModelNode*) &iedModel_PROT_BLKPTTR1_TmpRI, (ModelNode*) &iedModel_PROT_BLKPTTR1_TmpRI_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_PROT_BLKPTTR1_TmpRI_zeroDb 	= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_PROT_BLKPTTR1_TmpRI, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };

DataObject iedModel_PROT_BLKPTTR1_Op 	 			= {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_BLKPTTR1,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_BLKPTTR1_Op_general,0};
DataAttribute iedModel_PROT_BLKPTTR1_Op_general 		= {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_BLKPTTR1_Op,  (ModelNode*) &iedModel_PROT_BLKPTTR1_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKPTTR1_Op_q 			= {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_BLKPTTR1_Op,  (ModelNode*) &iedModel_PROT_BLKPTTR1_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKPTTR1_Op_t 			= {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_BLKPTTR1_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * QPTTR1
 *******************************************************/
LogicalNode iedModel_PROT_QPTTR1 = {    LogicalNodeModelType,    "QPTTR1",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_QPTTR2,    (ModelNode*) &iedModel_PROT_QPTTR1_Mod};

DataObject iedModel_PROT_QPTTR1_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_QPTTR1,    (ModelNode*) &iedModel_PROT_QPTTR1_Beh,    (ModelNode*) &iedModel_PROT_QPTTR1_Mod_q,0};
DataAttribute iedModel_PROT_QPTTR1_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_QPTTR1_Mod,    (ModelNode*) &iedModel_PROT_QPTTR1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR1_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_QPTTR1_Mod,    (ModelNode*) &iedModel_PROT_QPTTR1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR1_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_QPTTR1_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_QPTTR1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_QPTTR1,    (ModelNode*) &iedModel_PROT_QPTTR1_Health,    (ModelNode*) &iedModel_PROT_QPTTR1_Beh_stVal,0};
DataAttribute iedModel_PROT_QPTTR1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_QPTTR1_Beh,    (ModelNode*) &iedModel_PROT_QPTTR1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_QPTTR1_Beh,    (ModelNode*) &iedModel_PROT_QPTTR1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_QPTTR1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_QPTTR1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_QPTTR1,    (ModelNode*) &iedModel_PROT_QPTTR1_NamPlt,    (ModelNode*) &iedModel_PROT_QPTTR1_Health_stVal,0};
DataAttribute iedModel_PROT_QPTTR1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_QPTTR1_Health,    (ModelNode*) &iedModel_PROT_QPTTR1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_QPTTR1_Health,    (ModelNode*) &iedModel_PROT_QPTTR1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_QPTTR1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_QPTTR1_NamPlt 			= {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_QPTTR1,    (ModelNode*) &iedModel_PROT_QPTTR1_TmpRI, (ModelNode*) &iedModel_PROT_QPTTR1_NamPlt_vendor,0};
DataAttribute iedModel_PROT_QPTTR1_NamPlt_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_QPTTR1_NamPlt,    (ModelNode*) &iedModel_PROT_QPTTR1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR1_NamPlt_swRev 	= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_QPTTR1_NamPlt,    (ModelNode*) &iedModel_PROT_QPTTR1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR1_NamPlt_d 		= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_QPTTR1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_QPTTR1_TmpRI 				= { DataObjectModelType, "TmpRI", (ModelNode*) &iedModel_MES_MMXU1, (ModelNode*) &iedModel_PROT_QPTTR1_Op, (ModelNode*) &iedModel_PROT_QPTTR1_TmpRI_mag, 0 };
DataAttribute iedModel_PROT_QPTTR1_TmpRI_mag 		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_PROT_QPTTR1_TmpRI, (ModelNode*) &iedModel_PROT_QPTTR1_TmpRI_q, (ModelNode*) &iedModel_PROT_QPTTR1_TmpRI_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR1_TmpRI_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_PROT_QPTTR1_TmpRI_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_PROT_QPTTR1_TmpRI_q 		= { DataAttributeModelType, "q", (ModelNode*) &iedModel_PROT_QPTTR1_TmpRI, (ModelNode*) &iedModel_PROT_QPTTR1_TmpRI_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_PROT_QPTTR1_TmpRI_t 		= { DataAttributeModelType, "t", (ModelNode*) &iedModel_PROT_QPTTR1_TmpRI,  (ModelNode*) &iedModel_PROT_QPTTR1_TmpRI_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_PROT_QPTTR1_TmpRI_db 		= { DataAttributeModelType, "db", (ModelNode*) &iedModel_PROT_QPTTR1_TmpRI, (ModelNode*) &iedModel_PROT_QPTTR1_TmpRI_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_PROT_QPTTR1_TmpRI_zeroDb 	= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_PROT_QPTTR1_TmpRI, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };

// ���������� � ������� ������������
DataObject iedModel_PROT_QPTTR1_Op 	 			= {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_QPTTR1,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_QPTTR1_Op_general,0};
DataAttribute iedModel_PROT_QPTTR1_Op_general 		= {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_QPTTR1_Op,  (ModelNode*) &iedModel_PROT_QPTTR1_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR1_Op_q 			= {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_QPTTR1_Op,  (ModelNode*) &iedModel_PROT_QPTTR1_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR1_Op_t 			= {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_QPTTR1_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * QPTTR2
 *******************************************************/
LogicalNode iedModel_PROT_QPTTR2 = {    LogicalNodeModelType,    "QPTTR2",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_RREC1,    (ModelNode*) &iedModel_PROT_QPTTR2_Mod};

DataObject iedModel_PROT_QPTTR2_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_QPTTR2,    (ModelNode*) &iedModel_PROT_QPTTR2_Beh,    (ModelNode*) &iedModel_PROT_QPTTR2_Mod_q,0};
DataAttribute iedModel_PROT_QPTTR2_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_QPTTR2_Mod,    (ModelNode*) &iedModel_PROT_QPTTR2_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR2_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_QPTTR2_Mod,    (ModelNode*) &iedModel_PROT_QPTTR2_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR2_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_QPTTR2_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_QPTTR2_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_QPTTR2,    (ModelNode*) &iedModel_PROT_QPTTR2_Health,    (ModelNode*) &iedModel_PROT_QPTTR2_Beh_stVal,0};
DataAttribute iedModel_PROT_QPTTR2_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_QPTTR2_Beh,    (ModelNode*) &iedModel_PROT_QPTTR2_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR2_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_QPTTR2_Beh,    (ModelNode*) &iedModel_PROT_QPTTR2_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR2_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_QPTTR2_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_QPTTR2_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_QPTTR2,    (ModelNode*) &iedModel_PROT_QPTTR2_NamPlt,    (ModelNode*) &iedModel_PROT_QPTTR2_Health_stVal,0};
DataAttribute iedModel_PROT_QPTTR2_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_QPTTR2_Health,    (ModelNode*) &iedModel_PROT_QPTTR2_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR2_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_QPTTR2_Health,    (ModelNode*) &iedModel_PROT_QPTTR2_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR2_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_QPTTR2_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_QPTTR2_NamPlt 			= {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_QPTTR2,    (ModelNode*) &iedModel_PROT_QPTTR2_TmpRI, (ModelNode*) &iedModel_PROT_QPTTR2_NamPlt_vendor,0};
DataAttribute iedModel_PROT_QPTTR2_NamPlt_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_QPTTR2_NamPlt,    (ModelNode*) &iedModel_PROT_QPTTR2_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR2_NamPlt_swRev 	= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_QPTTR2_NamPlt,    (ModelNode*) &iedModel_PROT_QPTTR2_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR2_NamPlt_d 		= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_QPTTR2_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_QPTTR2_TmpRI 				= { DataObjectModelType, "TmpRI", (ModelNode*) &iedModel_MES_MMXU1, (ModelNode*) &iedModel_PROT_QPTTR2_Op, (ModelNode*) &iedModel_PROT_QPTTR2_TmpRI_mag, 0 };
DataAttribute iedModel_PROT_QPTTR2_TmpRI_mag 		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_PROT_QPTTR2_TmpRI, (ModelNode*) &iedModel_PROT_QPTTR2_TmpRI_q, (ModelNode*) &iedModel_PROT_QPTTR2_TmpRI_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR2_TmpRI_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_PROT_QPTTR2_TmpRI_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_PROT_QPTTR2_TmpRI_q 		= { DataAttributeModelType, "q", (ModelNode*) &iedModel_PROT_QPTTR2_TmpRI, (ModelNode*) &iedModel_PROT_QPTTR2_TmpRI_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_PROT_QPTTR2_TmpRI_t 		= { DataAttributeModelType, "t", (ModelNode*) &iedModel_PROT_QPTTR2_TmpRI,  (ModelNode*) &iedModel_PROT_QPTTR2_TmpRI_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_PROT_QPTTR2_TmpRI_db 		= { DataAttributeModelType, "db", (ModelNode*) &iedModel_PROT_QPTTR2_TmpRI, (ModelNode*) &iedModel_PROT_QPTTR2_TmpRI_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_PROT_QPTTR2_TmpRI_zeroDb 	= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_PROT_QPTTR2_TmpRI, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };

DataObject iedModel_PROT_QPTTR2_Op 	 			= {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_QPTTR2,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_QPTTR2_Op_general,0};
DataAttribute iedModel_PROT_QPTTR2_Op_general 		= {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_QPTTR2_Op,  (ModelNode*) &iedModel_PROT_QPTTR2_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR2_Op_q 			= {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_QPTTR2_Op,  (ModelNode*) &iedModel_PROT_QPTTR2_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_QPTTR2_Op_t 			= {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_QPTTR2_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
/*******************************************************
 * RREC1
 *******************************************************/
LogicalNode iedModel_PROT_RREC1 = {    LogicalNodeModelType,    "RREC1",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_RSYN1,    (ModelNode*) &iedModel_PROT_RREC1_Mod};

DataObject iedModel_PROT_RREC1_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_RREC1,    (ModelNode*) &iedModel_PROT_RREC1_Beh,    (ModelNode*) &iedModel_PROT_RREC1_Mod_q,0};
DataAttribute iedModel_PROT_RREC1_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_RREC1_Mod,    (ModelNode*) &iedModel_PROT_RREC1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RREC1_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_RREC1_Mod,    (ModelNode*) &iedModel_PROT_RREC1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RREC1_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_RREC1_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_RREC1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_RREC1,    (ModelNode*) &iedModel_PROT_RREC1_Health,    (ModelNode*) &iedModel_PROT_RREC1_Beh_stVal,0};
DataAttribute iedModel_PROT_RREC1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_RREC1_Beh,    (ModelNode*) &iedModel_PROT_RREC1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RREC1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_RREC1_Beh,    (ModelNode*) &iedModel_PROT_RREC1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RREC1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_RREC1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_RREC1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_RREC1,    (ModelNode*) &iedModel_PROT_RREC1_NamPlt,    (ModelNode*) &iedModel_PROT_RREC1_Health_stVal,0};
DataAttribute iedModel_PROT_RREC1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_RREC1_Health,    (ModelNode*) &iedModel_PROT_RREC1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RREC1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_RREC1_Health,    (ModelNode*) &iedModel_PROT_RREC1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RREC1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_RREC1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_RREC1_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_RREC1,    (ModelNode*) &iedModel_PROT_RREC1_AutoRecSt, (ModelNode*) &iedModel_PROT_RREC1_NamPlt_vendor,0};
DataAttribute iedModel_PROT_RREC1_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_RREC1_NamPlt,    (ModelNode*) &iedModel_PROT_RREC1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RREC1_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_RREC1_NamPlt,    (ModelNode*) &iedModel_PROT_RREC1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RREC1_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_RREC1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_RREC1_AutoRecSt 	 = {    DataObjectModelType,    "AutoRecSt",  (ModelNode*) &iedModel_PROT_RREC1,  	(ModelNode*)&iedModel_PROT_RREC1_Op, (ModelNode*) &iedModel_PROT_RREC1_AutoRecSt_stVal,0};
DataAttribute iedModel_PROT_RREC1_AutoRecSt_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_RREC1_AutoRecSt,   (ModelNode*) &iedModel_PROT_RREC1_AutoRecSt_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RREC1_AutoRecSt_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_RREC1_AutoRecSt,  (ModelNode*) &iedModel_PROT_RREC1_AutoRecSt_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RREC1_AutoRecSt_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_RREC1_AutoRecSt,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_RREC1_Op 	 = {    DataObjectModelType,    		"Op",  (ModelNode*) &iedModel_PROT_RREC1,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_RREC1_Op_general,0};
DataAttribute iedModel_PROT_RREC1_Op_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_RREC1_Op,  (ModelNode*) &iedModel_PROT_RREC1_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RREC1_Op_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_RREC1_Op,  (ModelNode*) &iedModel_PROT_RREC1_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RREC1_Op_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_RREC1_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * RSYN1
 *******************************************************/
LogicalNode iedModel_PROT_RSYN1 = {    LogicalNodeModelType,    "RSYN1",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_RBRF1,    (ModelNode*) &iedModel_PROT_RSYN1_Mod};

DataObject iedModel_PROT_RSYN1_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_RSYN1,    (ModelNode*) &iedModel_PROT_RSYN1_Beh,    (ModelNode*) &iedModel_PROT_RSYN1_Mod_q,0};
DataAttribute iedModel_PROT_RSYN1_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_RSYN1_Mod,    (ModelNode*) &iedModel_PROT_RSYN1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RSYN1_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_RSYN1_Mod,    (ModelNode*) &iedModel_PROT_RSYN1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RSYN1_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_RSYN1_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_RSYN1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_RSYN1,    (ModelNode*) &iedModel_PROT_RSYN1_Health,    (ModelNode*) &iedModel_PROT_RSYN1_Beh_stVal,0};
DataAttribute iedModel_PROT_RSYN1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_RSYN1_Beh,    (ModelNode*) &iedModel_PROT_RSYN1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RSYN1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_RSYN1_Beh,    (ModelNode*) &iedModel_PROT_RSYN1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RSYN1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_RSYN1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_RSYN1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_RSYN1,    (ModelNode*) &iedModel_PROT_RSYN1_NamPlt,    (ModelNode*) &iedModel_PROT_RSYN1_Health_stVal,0};
DataAttribute iedModel_PROT_RSYN1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_RSYN1_Health,    (ModelNode*) &iedModel_PROT_RSYN1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RSYN1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_RSYN1_Health,    (ModelNode*) &iedModel_PROT_RSYN1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RSYN1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_RSYN1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_RSYN1_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_RSYN1,    (ModelNode*) &iedModel_PROT_RSYN1_Rel, (ModelNode*) &iedModel_PROT_RSYN1_NamPlt_vendor,0};
DataAttribute iedModel_PROT_RSYN1_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_RSYN1_NamPlt,    (ModelNode*) &iedModel_PROT_RSYN1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RSYN1_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_RSYN1_NamPlt,    (ModelNode*) &iedModel_PROT_RSYN1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RSYN1_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_RSYN1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ����
DataObject iedModel_PROT_RSYN1_Rel 	 = {    DataObjectModelType,    "Rel",  (ModelNode*) &iedModel_PROT_RSYN1,  	(ModelNode*)&iedModel_PROT_RSYN1_DifVCIc, (ModelNode*) &iedModel_PROT_RSYN1_Rel_stVal,0};
DataAttribute iedModel_PROT_RSYN1_Rel_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_RSYN1_Rel, (ModelNode*) &iedModel_PROT_RSYN1_Rel_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RSYN1_Rel_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_RSYN1_Rel,  (ModelNode*) &iedModel_PROT_RSYN1_Rel_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RSYN1_Rel_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_RSYN1_Rel,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

// DifVCIc
DataObject iedModel_PROT_RSYN1_DifVCIc 				= { DataObjectModelType, "DifVCIc", (ModelNode*) &iedModel_MES_MMXU1, (ModelNode*) &iedModel_PROT_RSYN1_DifHzCIc, (ModelNode*) &iedModel_PROT_RSYN1_DifVCIc_mag, 0 };
DataAttribute iedModel_PROT_RSYN1_DifVCIc_mag 		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_PROT_RSYN1_DifVCIc, (ModelNode*) &iedModel_PROT_RSYN1_DifVCIc_q, (ModelNode*) &iedModel_PROT_RSYN1_DifVCIc_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RSYN1_DifVCIc_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_PROT_RSYN1_DifVCIc_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_PROT_RSYN1_DifVCIc_q 		= { DataAttributeModelType, "q", (ModelNode*) &iedModel_PROT_RSYN1_DifVCIc, (ModelNode*) &iedModel_PROT_RSYN1_DifVCIc_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_PROT_RSYN1_DifVCIc_t 		= { DataAttributeModelType, "t", (ModelNode*) &iedModel_PROT_RSYN1_DifVCIc,  (ModelNode*) &iedModel_PROT_RSYN1_DifVCIc_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_PROT_RSYN1_DifVCIc_db 		= { DataAttributeModelType, "db", (ModelNode*) &iedModel_PROT_RSYN1_DifVCIc, (ModelNode*) &iedModel_PROT_RSYN1_DifVCIc_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_PROT_RSYN1_DifVCIc_zeroDb 	= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_PROT_RSYN1_DifVCIc, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };

// DifHzCIc
DataObject iedModel_PROT_RSYN1_DifHzCIc 				= { DataObjectModelType, "DifHzCIc", (ModelNode*) &iedModel_MES_MMXU1, (ModelNode*) &iedModel_PROT_RSYN1_DifAngCIc, (ModelNode*) &iedModel_PROT_RSYN1_DifHzCIc_mag, 0 };
DataAttribute iedModel_PROT_RSYN1_DifHzCIc_mag 		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_PROT_RSYN1_DifHzCIc, (ModelNode*) &iedModel_PROT_RSYN1_DifHzCIc_q, (ModelNode*) &iedModel_PROT_RSYN1_DifHzCIc_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RSYN1_DifHzCIc_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_PROT_RSYN1_DifHzCIc_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_PROT_RSYN1_DifHzCIc_q 		= { DataAttributeModelType, "q", (ModelNode*) &iedModel_PROT_RSYN1_DifHzCIc, (ModelNode*) &iedModel_PROT_RSYN1_DifHzCIc_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_PROT_RSYN1_DifHzCIc_t 		= { DataAttributeModelType, "t", (ModelNode*) &iedModel_PROT_RSYN1_DifHzCIc,  (ModelNode*) &iedModel_PROT_RSYN1_DifHzCIc_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_PROT_RSYN1_DifHzCIc_db 		= { DataAttributeModelType, "db", (ModelNode*) &iedModel_PROT_RSYN1_DifHzCIc, (ModelNode*) &iedModel_PROT_RSYN1_DifHzCIc_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_PROT_RSYN1_DifHzCIc_zeroDb 	= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_PROT_RSYN1_DifHzCIc, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };

//DifAngCIc
DataObject iedModel_PROT_RSYN1_DifAngCIc 				= { DataObjectModelType, "DifAngCIc", (ModelNode*) &iedModel_MES_MMXU1, (ModelNode*) NULL, (ModelNode*) &iedModel_PROT_RSYN1_DifAngCIc_mag, 0 };
DataAttribute iedModel_PROT_RSYN1_DifAngCIc_mag 		= { DataAttributeModelType, "mag", (ModelNode*) &iedModel_PROT_RSYN1_DifAngCIc, (ModelNode*) &iedModel_PROT_RSYN1_DifAngCIc_q, (ModelNode*) &iedModel_PROT_RSYN1_DifAngCIc_mag_f, 0,  IEC61850_FC_MX, IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RSYN1_DifAngCIc_mag_f 	= { DataAttributeModelType, "f", (ModelNode*) &iedModel_PROT_RSYN1_DifAngCIc_mag, NULL, NULL, 0,  IEC61850_FC_MX, IEC61850_FLOAT32,0, NULL,0};
DataAttribute iedModel_PROT_RSYN1_DifAngCIc_q 		= { DataAttributeModelType, "q", (ModelNode*) &iedModel_PROT_RSYN1_DifAngCIc, (ModelNode*) &iedModel_PROT_RSYN1_DifAngCIc_t, NULL, 0,  IEC61850_FC_MX, IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_PROT_RSYN1_DifAngCIc_t 		= { DataAttributeModelType, "t", (ModelNode*) &iedModel_PROT_RSYN1_DifAngCIc,  (ModelNode*) &iedModel_PROT_RSYN1_DifAngCIc_db, NULL, 0,  IEC61850_FC_MX, IEC61850_TIMESTAMP, 0, NULL,0};
DataAttribute iedModel_PROT_RSYN1_DifAngCIc_db 		= { DataAttributeModelType, "db", (ModelNode*) &iedModel_PROT_RSYN1_DifAngCIc, (ModelNode*) &iedModel_PROT_RSYN1_DifAngCIc_zeroDb, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };
DataAttribute iedModel_PROT_RSYN1_DifAngCIc_zeroDb 	= { DataAttributeModelType, "zeroDb", (ModelNode*) &iedModel_PROT_RSYN1_DifAngCIc, NULL, NULL, 0, IEC61850_FC_CF, IEC61850_INT32U, 0, NULL,0 };



/*******************************************************
 * RBRF1
 *******************************************************/
LogicalNode iedModel_PROT_RBRF1 = {    LogicalNodeModelType,    "RBRF1",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_RPSB1,    (ModelNode*) &iedModel_PROT_RBRF1_Mod};

DataObject iedModel_PROT_RBRF1_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_RBRF1,    (ModelNode*) &iedModel_PROT_RBRF1_Beh,    (ModelNode*) &iedModel_PROT_RBRF1_Mod_q,0};
DataAttribute iedModel_PROT_RBRF1_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_RBRF1_Mod,    (ModelNode*) &iedModel_PROT_RBRF1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF1_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_RBRF1_Mod,    (ModelNode*) &iedModel_PROT_RBRF1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF1_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_RBRF1_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_RBRF1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_RBRF1,    (ModelNode*) &iedModel_PROT_RBRF1_Health,    (ModelNode*) &iedModel_PROT_RBRF1_Beh_stVal,0};
DataAttribute iedModel_PROT_RBRF1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_RBRF1_Beh,    (ModelNode*) &iedModel_PROT_RBRF1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_RBRF1_Beh,    (ModelNode*) &iedModel_PROT_RBRF1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_RBRF1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_RBRF1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_RBRF1,    (ModelNode*) &iedModel_PROT_RBRF1_NamPlt,    (ModelNode*) &iedModel_PROT_RBRF1_Health_stVal,0};
DataAttribute iedModel_PROT_RBRF1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_RBRF1_Health,    (ModelNode*) &iedModel_PROT_RBRF1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_RBRF1_Health,    (ModelNode*) &iedModel_PROT_RBRF1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_RBRF1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_RBRF1_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_RBRF1,    (ModelNode*) &iedModel_PROT_RBRF1_OpEx, (ModelNode*) &iedModel_PROT_RBRF1_NamPlt_vendor,0};
DataAttribute iedModel_PROT_RBRF1_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_RBRF1_NamPlt,    (ModelNode*) &iedModel_PROT_RBRF1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF1_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_RBRF1_NamPlt,    (ModelNode*) &iedModel_PROT_RBRF1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF1_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_RBRF1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_RBRF1_OpEx 	 = {    DataObjectModelType,    		"OpEx",  (ModelNode*) &iedModel_PROT_RBRF1,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_RBRF1_OpEx_general,0};
DataAttribute iedModel_PROT_RBRF1_OpEx_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_RBRF1_OpEx,  (ModelNode*) &iedModel_PROT_RBRF1_OpEx_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF1_OpEx_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_RBRF1_OpEx,  (ModelNode*) &iedModel_PROT_RBRF1_OpEx_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF1_OpEx_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_RBRF1_OpEx,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * RBRF2
 *******************************************************/
/*
LogicalNode iedModel_PROT_RBRF2 = {    LogicalNodeModelType,    "RBRF2",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_BLKRBRF,    (ModelNode*) &iedModel_PROT_RBRF2_Mod};

DataObject iedModel_PROT_RBRF2_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_RBRF2,    (ModelNode*) &iedModel_PROT_RBRF2_Beh,    (ModelNode*) &iedModel_PROT_RBRF2_Mod_q,0};
DataAttribute iedModel_PROT_RBRF2_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_RBRF2_Mod,    (ModelNode*) &iedModel_PROT_RBRF2_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF2_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_RBRF2_Mod,    (ModelNode*) &iedModel_PROT_RBRF2_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF2_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_RBRF2_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_RBRF2_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_RBRF2,    (ModelNode*) &iedModel_PROT_RBRF2_Health,    (ModelNode*) &iedModel_PROT_RBRF2_Beh_stVal,0};
DataAttribute iedModel_PROT_RBRF2_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_RBRF2_Beh,    (ModelNode*) &iedModel_PROT_RBRF2_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF2_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_RBRF2_Beh,    (ModelNode*) &iedModel_PROT_RBRF2_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF2_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_RBRF2_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_RBRF2_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_RBRF2,    (ModelNode*) &iedModel_PROT_RBRF2_NamPlt,    (ModelNode*) &iedModel_PROT_RBRF2_Health_stVal,0};
DataAttribute iedModel_PROT_RBRF2_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_RBRF2_Health,    (ModelNode*) &iedModel_PROT_RBRF2_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF2_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_RBRF2_Health,    (ModelNode*) &iedModel_PROT_RBRF2_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF2_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_RBRF2_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_RBRF2_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_RBRF2,    (ModelNode*) &iedModel_PROT_RBRF2_OpEx, (ModelNode*) &iedModel_PROT_RBRF2_NamPlt_vendor,0};
DataAttribute iedModel_PROT_RBRF2_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_RBRF2_NamPlt,    (ModelNode*) &iedModel_PROT_RBRF2_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF2_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_RBRF2_NamPlt,    (ModelNode*) &iedModel_PROT_RBRF2_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF2_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_RBRF2_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_RBRF2_OpEx 	 = {    DataObjectModelType,    		"OpEx",  (ModelNode*) &iedModel_PROT_RBRF2,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_RBRF2_OpEx_general,0};
DataAttribute iedModel_PROT_RBRF2_OpEx_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_RBRF2_OpEx,  (ModelNode*) &iedModel_PROT_RBRF2_OpEx_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF2_OpEx_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_RBRF2_OpEx,  (ModelNode*) &iedModel_PROT_RBRF2_OpEx_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RBRF2_OpEx_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_RBRF2_OpEx,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
*/

/*******************************************************
 * BLKRBRF
 *******************************************************/
/*
LogicalNode iedModel_PROT_BLKRBRF = {    LogicalNodeModelType,    "BLKRBRF",    (ModelNode*)&iedModel_Generic_PROT, (ModelNode*)&iedModel_PROT_RPSB1,    (ModelNode*) &iedModel_PROT_BLKRBRF_Mod};

DataObject iedModel_PROT_BLKRBRF_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_BLKRBRF,    (ModelNode*) &iedModel_PROT_BLKRBRF_Beh,    (ModelNode*) &iedModel_PROT_BLKRBRF_Mod_q,0};
DataAttribute iedModel_PROT_BLKRBRF_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_BLKRBRF_Mod,    (ModelNode*) &iedModel_PROT_BLKRBRF_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKRBRF_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_BLKRBRF_Mod,    (ModelNode*) &iedModel_PROT_BLKRBRF_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKRBRF_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_BLKRBRF_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_BLKRBRF_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_BLKRBRF,    (ModelNode*) &iedModel_PROT_BLKRBRF_Health,    (ModelNode*) &iedModel_PROT_BLKRBRF_Beh_stVal,0};
DataAttribute iedModel_PROT_BLKRBRF_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_BLKRBRF_Beh,    (ModelNode*) &iedModel_PROT_BLKRBRF_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKRBRF_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_BLKRBRF_Beh,    (ModelNode*) &iedModel_PROT_BLKRBRF_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKRBRF_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_BLKRBRF_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_BLKRBRF_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_BLKRBRF,    (ModelNode*) &iedModel_PROT_BLKRBRF_NamPlt,    (ModelNode*) &iedModel_PROT_BLKRBRF_Health_stVal,0};
DataAttribute iedModel_PROT_BLKRBRF_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_BLKRBRF_Health,    (ModelNode*) &iedModel_PROT_BLKRBRF_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKRBRF_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_BLKRBRF_Health,    (ModelNode*) &iedModel_PROT_BLKRBRF_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKRBRF_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_BLKRBRF_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_BLKRBRF_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_BLKRBRF,    (ModelNode*) &iedModel_PROT_BLKRBRF_OpEx, (ModelNode*) &iedModel_PROT_BLKRBRF_NamPlt_vendor,0};
DataAttribute iedModel_PROT_BLKRBRF_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_BLKRBRF_NamPlt,    (ModelNode*) &iedModel_PROT_BLKRBRF_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKRBRF_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_BLKRBRF_NamPlt,    (ModelNode*) &iedModel_PROT_BLKRBRF_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKRBRF_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_BLKRBRF_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

// ���������� � ������� ������������
DataObject iedModel_PROT_BLKRBRF_OpEx 	 = {    DataObjectModelType,    		"OpEx",  (ModelNode*) &iedModel_PROT_BLKRBRF,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_BLKRBRF_OpEx_general,0};
DataAttribute iedModel_PROT_BLKRBRF_OpEx_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_BLKRBRF_OpEx,  (ModelNode*) &iedModel_PROT_BLKRBRF_OpEx_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKRBRF_OpEx_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_BLKRBRF_OpEx,  (ModelNode*) &iedModel_PROT_BLKRBRF_OpEx_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_BLKRBRF_OpEx_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_BLKRBRF_OpEx,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
*/
/*******************************************************
 * RPSB1
 *******************************************************/
LogicalNode iedModel_PROT_RPSB1 = {    LogicalNodeModelType,    "RPSB1",    (ModelNode*)&iedModel_Generic_PROT,  (ModelNode*)&iedModel_PROT_PDIS1,    (ModelNode*) &iedModel_PROT_RPSB1_Mod};

DataObject iedModel_PROT_RPSB1_Mod = {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_RPSB1,    (ModelNode*) &iedModel_PROT_RPSB1_Beh,    (ModelNode*) &iedModel_PROT_RPSB1_Mod_q,0};
DataAttribute iedModel_PROT_RPSB1_Mod_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_RPSB1_Mod,    (ModelNode*) &iedModel_PROT_RPSB1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RPSB1_Mod_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_RPSB1_Mod,    (ModelNode*) &iedModel_PROT_RPSB1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RPSB1_Mod_stVal = { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_RPSB1_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_RPSB1_Beh = {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_RPSB1,    (ModelNode*) &iedModel_PROT_RPSB1_Health,    (ModelNode*) &iedModel_PROT_RPSB1_Beh_stVal,0};
DataAttribute iedModel_PROT_RPSB1_Beh_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_RPSB1_Beh,    (ModelNode*) &iedModel_PROT_RPSB1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RPSB1_Beh_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_RPSB1_Beh,    (ModelNode*) &iedModel_PROT_RPSB1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RPSB1_Beh_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_RPSB1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_RPSB1_Health = {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_RPSB1,    (ModelNode*) &iedModel_PROT_RPSB1_NamPlt,    (ModelNode*) &iedModel_PROT_RPSB1_Health_stVal,0};
DataAttribute iedModel_PROT_RPSB1_Health_stVal = {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_RPSB1_Health,    (ModelNode*) &iedModel_PROT_RPSB1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RPSB1_Health_q = {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_RPSB1_Health,    (ModelNode*) &iedModel_PROT_RPSB1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RPSB1_Health_t = {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_RPSB1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_RPSB1_NamPlt = {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_RPSB1,    (ModelNode*) &iedModel_PROT_RPSB1_Str, (ModelNode*) &iedModel_PROT_RPSB1_NamPlt_vendor,0};
DataAttribute iedModel_PROT_RPSB1_NamPlt_vendor = {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_RPSB1_NamPlt,    (ModelNode*) &iedModel_PROT_RPSB1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RPSB1_NamPlt_swRev = {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_RPSB1_NamPlt,    (ModelNode*) &iedModel_PROT_RPSB1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RPSB1_NamPlt_d = {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_RPSB1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_RPSB1_Str 	 = {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_RPSB1,  	(ModelNode*)&iedModel_PROT_RPSB1_BlkZn, (ModelNode*) &iedModel_PROT_RPSB1_Str_general,0};
DataAttribute iedModel_PROT_RPSB1_Str_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_RPSB1_Str,  (ModelNode*) &iedModel_PROT_RPSB1_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RPSB1_Str_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_RPSB1_Str,  (ModelNode*) &iedModel_PROT_RPSB1_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RPSB1_Str_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_RPSB1_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_RPSB1_BlkZn 	 = {    DataObjectModelType,    		"BlkZn",  (ModelNode*) &iedModel_PROT_RPSB1,  	(ModelNode*)NULL, (ModelNode*) &iedModel_PROT_RPSB1_BlkZn_general,0};
DataAttribute iedModel_PROT_RPSB1_BlkZn_general = {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_RPSB1_BlkZn,  (ModelNode*) &iedModel_PROT_RPSB1_BlkZn_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RPSB1_BlkZn_q = {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_RPSB1_BlkZn,  (ModelNode*) &iedModel_PROT_RPSB1_BlkZn_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_RPSB1_BlkZn_t = {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_RPSB1_BlkZn,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * PDIS1
 *******************************************************/
LogicalNode iedModel_PROT_PDIS1 					= {    LogicalNodeModelType,    "PDIS1",    (ModelNode*)&iedModel_Generic_PROT,   (ModelNode*)&iedModel_PROT_PDIS2,    (ModelNode*) &iedModel_PROT_PDIS1_Mod};

DataObject iedModel_PROT_PDIS1_Mod 				= {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_PDIS1,    (ModelNode*) &iedModel_PROT_PDIS1_Beh,    (ModelNode*) &iedModel_PROT_PDIS1_Mod_q,0};
DataAttribute iedModel_PROT_PDIS1_Mod_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS1_Mod,    (ModelNode*) &iedModel_PROT_PDIS1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS1_Mod_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS1_Mod,    (ModelNode*) &iedModel_PROT_PDIS1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS1_Mod_stVal 		= { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_PDIS1_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS1_Beh 				= {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_PDIS1,    (ModelNode*) &iedModel_PROT_PDIS1_Health,    (ModelNode*) &iedModel_PROT_PDIS1_Beh_stVal,0};
DataAttribute iedModel_PROT_PDIS1_Beh_stVal 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS1_Beh,    (ModelNode*) &iedModel_PROT_PDIS1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS1_Beh_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS1_Beh,    (ModelNode*) &iedModel_PROT_PDIS1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS1_Beh_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS1_Health 				= {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_PDIS1,    (ModelNode*) &iedModel_PROT_PDIS1_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS1_Health_stVal,0};
DataAttribute iedModel_PROT_PDIS1_Health_stVal 	= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS1_Health,    (ModelNode*) &iedModel_PROT_PDIS1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS1_Health_q 		= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS1_Health,    (ModelNode*) &iedModel_PROT_PDIS1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS1_Health_t 		= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS1_NamPlt 				= {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_PDIS1,    (ModelNode*) &iedModel_PROT_PDIS1_Op, (ModelNode*) &iedModel_PROT_PDIS1_NamPlt_vendor,0};
DataAttribute iedModel_PROT_PDIS1_NamPlt_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_PDIS1_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS1_NamPlt_swRev 	= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_PDIS1_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS1_NamPlt_d 		= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_PDIS1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS1_Op 	 				= { DataObjectModelType,    "Op",  (ModelNode*) &iedModel_PROT_PDIS1,  	(ModelNode*)&iedModel_PROT_PDIS1_Str, (ModelNode*) &iedModel_PROT_PDIS1_Op_general,0};
DataAttribute iedModel_PROT_PDIS1_Op_general 		= { DataAttributeModelType, "general", (ModelNode*) &iedModel_PROT_PDIS1_Op,  (ModelNode*) &iedModel_PROT_PDIS1_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS1_Op_q 			= { DataAttributeModelType, "q",    (ModelNode*) &iedModel_PROT_PDIS1_Op,  (ModelNode*) &iedModel_PROT_PDIS1_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS1_Op_t 			= { DataAttributeModelType, "t",    (ModelNode*) &iedModel_PROT_PDIS1_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS1_Str 	 			= {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_PDIS1,  NULL, (ModelNode*) &iedModel_PROT_PDIS1_Str_general,0};
DataAttribute iedModel_PROT_PDIS1_Str_general 		= {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PDIS1_Str,  (ModelNode*) &iedModel_PROT_PDIS1_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS1_Str_dirGeneral 	= {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_PDIS1_Str,  (ModelNode*) &iedModel_PROT_PDIS1_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS1_Str_q 			= {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PDIS1_Str,  (ModelNode*) &iedModel_PROT_PDIS1_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS1_Str_t 			= {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PDIS1_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * PDIS2
 *******************************************************/
LogicalNode iedModel_PROT_PDIS2 					= {    LogicalNodeModelType,    "PDIS2",    (ModelNode*)&iedModel_Generic_PROT,   (ModelNode*)&iedModel_PROT_PDIS3,    (ModelNode*) &iedModel_PROT_PDIS2_Mod};

DataObject iedModel_PROT_PDIS2_Mod 				= {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_PDIS2,    (ModelNode*) &iedModel_PROT_PDIS2_Beh,    (ModelNode*) &iedModel_PROT_PDIS2_Mod_q,0};
DataAttribute iedModel_PROT_PDIS2_Mod_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS2_Mod,    (ModelNode*) &iedModel_PROT_PDIS2_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS2_Mod_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS2_Mod,    (ModelNode*) &iedModel_PROT_PDIS2_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS2_Mod_stVal 		= { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_PDIS2_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS2_Beh 				= {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_PDIS2,    (ModelNode*) &iedModel_PROT_PDIS2_Health,    (ModelNode*) &iedModel_PROT_PDIS2_Beh_stVal,0};
DataAttribute iedModel_PROT_PDIS2_Beh_stVal 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS2_Beh,    (ModelNode*) &iedModel_PROT_PDIS2_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS2_Beh_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS2_Beh,    (ModelNode*) &iedModel_PROT_PDIS2_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS2_Beh_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS2_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS2_Health 				= {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_PDIS2,    (ModelNode*) &iedModel_PROT_PDIS2_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS2_Health_stVal,0};
DataAttribute iedModel_PROT_PDIS2_Health_stVal 	= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS2_Health,    (ModelNode*) &iedModel_PROT_PDIS2_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS2_Health_q 		= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS2_Health,    (ModelNode*) &iedModel_PROT_PDIS2_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS2_Health_t 		= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS2_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS2_NamPlt 				= {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_PDIS2,    (ModelNode*) &iedModel_PROT_PDIS2_Op, (ModelNode*) &iedModel_PROT_PDIS2_NamPlt_vendor,0};
DataAttribute iedModel_PROT_PDIS2_NamPlt_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_PDIS2_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS2_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS2_NamPlt_swRev 	= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_PDIS2_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS2_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS2_NamPlt_d 		= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_PDIS2_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS2_Op 	 				= { DataObjectModelType,    "Op",  (ModelNode*) &iedModel_PROT_PDIS2,  	(ModelNode*)&iedModel_PROT_PDIS2_Str, (ModelNode*) &iedModel_PROT_PDIS2_Op_general,0};
DataAttribute iedModel_PROT_PDIS2_Op_general 		= { DataAttributeModelType, "general", (ModelNode*) &iedModel_PROT_PDIS2_Op,  (ModelNode*) &iedModel_PROT_PDIS2_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS2_Op_q 			= { DataAttributeModelType, "q",    (ModelNode*) &iedModel_PROT_PDIS2_Op,  (ModelNode*) &iedModel_PROT_PDIS2_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS2_Op_t 			= { DataAttributeModelType, "t",    (ModelNode*) &iedModel_PROT_PDIS2_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS2_Str 	 			= {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_PDIS2,  NULL, (ModelNode*) &iedModel_PROT_PDIS2_Str_general,0};
DataAttribute iedModel_PROT_PDIS2_Str_general 		= {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PDIS2_Str,  (ModelNode*) &iedModel_PROT_PDIS2_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS2_Str_dirGeneral 	= {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_PDIS2_Str,  (ModelNode*) &iedModel_PROT_PDIS2_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS2_Str_q 			= {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PDIS2_Str,  (ModelNode*) &iedModel_PROT_PDIS2_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS2_Str_t 			= {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PDIS2_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * PDIS3
 *******************************************************/
LogicalNode iedModel_PROT_PDIS3 					= {    LogicalNodeModelType,    "PDIS3",    (ModelNode*)&iedModel_Generic_PROT,   (ModelNode*)&iedModel_PROT_PDIS4,    (ModelNode*) &iedModel_PROT_PDIS3_Mod};

DataObject iedModel_PROT_PDIS3_Mod 				= {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_PDIS3,    (ModelNode*) &iedModel_PROT_PDIS3_Beh,    (ModelNode*) &iedModel_PROT_PDIS3_Mod_q,0};
DataAttribute iedModel_PROT_PDIS3_Mod_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS3_Mod,    (ModelNode*) &iedModel_PROT_PDIS3_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS3_Mod_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS3_Mod,    (ModelNode*) &iedModel_PROT_PDIS3_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS3_Mod_stVal 		= { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_PDIS3_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS3_Beh 				= {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_PDIS3,    (ModelNode*) &iedModel_PROT_PDIS3_Health,    (ModelNode*) &iedModel_PROT_PDIS3_Beh_stVal,0};
DataAttribute iedModel_PROT_PDIS3_Beh_stVal 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS3_Beh,    (ModelNode*) &iedModel_PROT_PDIS3_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS3_Beh_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS3_Beh,    (ModelNode*) &iedModel_PROT_PDIS3_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS3_Beh_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS3_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS3_Health 				= {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_PDIS3,    (ModelNode*) &iedModel_PROT_PDIS3_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS3_Health_stVal,0};
DataAttribute iedModel_PROT_PDIS3_Health_stVal 	= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS3_Health,    (ModelNode*) &iedModel_PROT_PDIS3_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS3_Health_q 		= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS3_Health,    (ModelNode*) &iedModel_PROT_PDIS3_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS3_Health_t 		= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS3_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS3_NamPlt 				= {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_PDIS3,    (ModelNode*) &iedModel_PROT_PDIS3_Op, (ModelNode*) &iedModel_PROT_PDIS3_NamPlt_vendor,0};
DataAttribute iedModel_PROT_PDIS3_NamPlt_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_PDIS3_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS3_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS3_NamPlt_swRev 	= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_PDIS3_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS3_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS3_NamPlt_d 		= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_PDIS3_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS3_Op 	 				= { DataObjectModelType,    "Op",  (ModelNode*) &iedModel_PROT_PDIS3,  	(ModelNode*)&iedModel_PROT_PDIS3_Str, (ModelNode*) &iedModel_PROT_PDIS3_Op_general,0};
DataAttribute iedModel_PROT_PDIS3_Op_general 		= { DataAttributeModelType, "general", (ModelNode*) &iedModel_PROT_PDIS3_Op,  (ModelNode*) &iedModel_PROT_PDIS3_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS3_Op_q 			= { DataAttributeModelType, "q",    (ModelNode*) &iedModel_PROT_PDIS3_Op,  (ModelNode*) &iedModel_PROT_PDIS3_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS3_Op_t 			= { DataAttributeModelType, "t",    (ModelNode*) &iedModel_PROT_PDIS3_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS3_Str 	 			= {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_PDIS3,  NULL, (ModelNode*) &iedModel_PROT_PDIS3_Str_general,0};
DataAttribute iedModel_PROT_PDIS3_Str_general 		= {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PDIS3_Str,  (ModelNode*) &iedModel_PROT_PDIS3_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS3_Str_dirGeneral 	= {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_PDIS3_Str,  (ModelNode*) &iedModel_PROT_PDIS3_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS3_Str_q 			= {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PDIS3_Str,  (ModelNode*) &iedModel_PROT_PDIS3_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS3_Str_t 			= {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PDIS3_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * PDIS4
 *******************************************************/
LogicalNode iedModel_PROT_PDIS4 					= {    LogicalNodeModelType,    "PDIS4",    (ModelNode*)&iedModel_Generic_PROT,   (ModelNode*)&iedModel_PROT_PDIS5,    (ModelNode*) &iedModel_PROT_PDIS4_Mod};
DataObject iedModel_PROT_PDIS4_Mod 				= {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_PDIS4,    (ModelNode*) &iedModel_PROT_PDIS4_Beh,    (ModelNode*) &iedModel_PROT_PDIS4_Mod_q,0};
DataAttribute iedModel_PROT_PDIS4_Mod_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS4_Mod,    (ModelNode*) &iedModel_PROT_PDIS4_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS4_Mod_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS4_Mod,    (ModelNode*) &iedModel_PROT_PDIS4_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS4_Mod_stVal 		= { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_PDIS4_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS4_Beh 				= {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_PDIS4,    (ModelNode*) &iedModel_PROT_PDIS4_Health,    (ModelNode*) &iedModel_PROT_PDIS4_Beh_stVal,0};
DataAttribute iedModel_PROT_PDIS4_Beh_stVal 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS4_Beh,    (ModelNode*) &iedModel_PROT_PDIS4_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS4_Beh_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS4_Beh,    (ModelNode*) &iedModel_PROT_PDIS4_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS4_Beh_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS4_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS4_Health 				= {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_PDIS4,    (ModelNode*) &iedModel_PROT_PDIS4_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS4_Health_stVal,0};
DataAttribute iedModel_PROT_PDIS4_Health_stVal 	= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS4_Health,    (ModelNode*) &iedModel_PROT_PDIS4_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS4_Health_q 		= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS4_Health,    (ModelNode*) &iedModel_PROT_PDIS4_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS4_Health_t 		= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS4_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS4_NamPlt 				= {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_PDIS4,    (ModelNode*) &iedModel_PROT_PDIS4_Op, (ModelNode*) &iedModel_PROT_PDIS4_NamPlt_vendor,0};
DataAttribute iedModel_PROT_PDIS4_NamPlt_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_PDIS4_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS4_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS4_NamPlt_swRev 	= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_PDIS4_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS4_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS4_NamPlt_d 		= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_PDIS4_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS4_Op 	 				= { DataObjectModelType,    "Op",  (ModelNode*) &iedModel_PROT_PDIS4,  	(ModelNode*)&iedModel_PROT_PDIS4_Str, (ModelNode*) &iedModel_PROT_PDIS4_Op_general,0};
DataAttribute iedModel_PROT_PDIS4_Op_general 		= { DataAttributeModelType, "general", (ModelNode*) &iedModel_PROT_PDIS4_Op,  (ModelNode*) &iedModel_PROT_PDIS4_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS4_Op_q 			= { DataAttributeModelType, "q",    (ModelNode*) &iedModel_PROT_PDIS4_Op,  (ModelNode*) &iedModel_PROT_PDIS4_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS4_Op_t 			= { DataAttributeModelType, "t",    (ModelNode*) &iedModel_PROT_PDIS4_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS4_Str 	 			= {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_PDIS4,  NULL, (ModelNode*) &iedModel_PROT_PDIS4_Str_general,0};
DataAttribute iedModel_PROT_PDIS4_Str_general 		= {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PDIS4_Str,  (ModelNode*) &iedModel_PROT_PDIS4_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS4_Str_dirGeneral 	= {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_PDIS4_Str,  (ModelNode*) &iedModel_PROT_PDIS4_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS4_Str_q 			= {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PDIS4_Str,  (ModelNode*) &iedModel_PROT_PDIS4_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS4_Str_t 			= {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PDIS4_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * PDIS5
 *******************************************************/
LogicalNode iedModel_PROT_PDIS5 					= {    LogicalNodeModelType,    "PDIS5",    (ModelNode*)&iedModel_Generic_PROT,   (ModelNode*)&iedModel_PROT_PDIS6,    (ModelNode*) &iedModel_PROT_PDIS5_Mod};
DataObject iedModel_PROT_PDIS5_Mod 				= {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_PDIS5,    (ModelNode*) &iedModel_PROT_PDIS5_Beh,    (ModelNode*) &iedModel_PROT_PDIS5_Mod_q,0};
DataAttribute iedModel_PROT_PDIS5_Mod_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS5_Mod,    (ModelNode*) &iedModel_PROT_PDIS5_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS5_Mod_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS5_Mod,    (ModelNode*) &iedModel_PROT_PDIS5_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS5_Mod_stVal 		= { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_PDIS5_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS5_Beh 				= {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_PDIS5,    (ModelNode*) &iedModel_PROT_PDIS5_Health,    (ModelNode*) &iedModel_PROT_PDIS5_Beh_stVal,0};
DataAttribute iedModel_PROT_PDIS5_Beh_stVal 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS5_Beh,    (ModelNode*) &iedModel_PROT_PDIS5_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS5_Beh_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS5_Beh,    (ModelNode*) &iedModel_PROT_PDIS5_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS5_Beh_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS5_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS5_Health 				= {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_PDIS5,    (ModelNode*) &iedModel_PROT_PDIS5_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS5_Health_stVal,0};
DataAttribute iedModel_PROT_PDIS5_Health_stVal 	= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS5_Health,    (ModelNode*) &iedModel_PROT_PDIS5_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS5_Health_q 		= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS5_Health,    (ModelNode*) &iedModel_PROT_PDIS5_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS5_Health_t 		= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS5_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS5_NamPlt 				= {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_PDIS5,    (ModelNode*) &iedModel_PROT_PDIS5_Op, (ModelNode*) &iedModel_PROT_PDIS5_NamPlt_vendor,0};
DataAttribute iedModel_PROT_PDIS5_NamPlt_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_PDIS5_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS5_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS5_NamPlt_swRev 	= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_PDIS5_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS5_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS5_NamPlt_d 		= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_PDIS5_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS5_Op 	 				= { DataObjectModelType,    "Op",  (ModelNode*) &iedModel_PROT_PDIS5,  	(ModelNode*)&iedModel_PROT_PDIS5_Str, (ModelNode*) &iedModel_PROT_PDIS5_Op_general,0};
DataAttribute iedModel_PROT_PDIS5_Op_general 		= { DataAttributeModelType, "general", (ModelNode*) &iedModel_PROT_PDIS5_Op,  (ModelNode*) &iedModel_PROT_PDIS5_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS5_Op_q 			= { DataAttributeModelType, "q",    (ModelNode*) &iedModel_PROT_PDIS5_Op,  (ModelNode*) &iedModel_PROT_PDIS5_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS5_Op_t 			= { DataAttributeModelType, "t",    (ModelNode*) &iedModel_PROT_PDIS5_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS5_Str 	 			= {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_PDIS5,  NULL, (ModelNode*) &iedModel_PROT_PDIS5_Str_general,0};
DataAttribute iedModel_PROT_PDIS5_Str_general 		= {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PDIS5_Str,  (ModelNode*) &iedModel_PROT_PDIS5_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS5_Str_dirGeneral 	= {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_PDIS5_Str,  (ModelNode*) &iedModel_PROT_PDIS5_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS5_Str_q 			= {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PDIS5_Str,  (ModelNode*) &iedModel_PROT_PDIS5_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS5_Str_t 			= {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PDIS5_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * PDIS6
 *******************************************************/
LogicalNode iedModel_PROT_PDIS6 					= {    LogicalNodeModelType,    "PDIS6",    (ModelNode*)&iedModel_Generic_PROT,   (ModelNode*)&iedModel_PROT_PDIS7,    (ModelNode*) &iedModel_PROT_PDIS6_Mod};
DataObject iedModel_PROT_PDIS6_Mod 				= {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_PDIS6,    (ModelNode*) &iedModel_PROT_PDIS6_Beh,    (ModelNode*) &iedModel_PROT_PDIS6_Mod_q,0};
DataAttribute iedModel_PROT_PDIS6_Mod_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS6_Mod,    (ModelNode*) &iedModel_PROT_PDIS6_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS6_Mod_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS6_Mod,    (ModelNode*) &iedModel_PROT_PDIS6_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS6_Mod_stVal 		= { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_PDIS6_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS6_Beh 				= {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_PDIS6,    (ModelNode*) &iedModel_PROT_PDIS6_Health,    (ModelNode*) &iedModel_PROT_PDIS6_Beh_stVal,0};
DataAttribute iedModel_PROT_PDIS6_Beh_stVal 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS6_Beh,    (ModelNode*) &iedModel_PROT_PDIS6_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS6_Beh_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS6_Beh,    (ModelNode*) &iedModel_PROT_PDIS6_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS6_Beh_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS6_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS6_Health 				= {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_PDIS6,    (ModelNode*) &iedModel_PROT_PDIS6_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS6_Health_stVal,0};
DataAttribute iedModel_PROT_PDIS6_Health_stVal 	= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS6_Health,    (ModelNode*) &iedModel_PROT_PDIS6_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS6_Health_q 		= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS6_Health,    (ModelNode*) &iedModel_PROT_PDIS6_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS6_Health_t 		= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS6_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS6_NamPlt 				= {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_PDIS6,    (ModelNode*) &iedModel_PROT_PDIS6_Op, (ModelNode*) &iedModel_PROT_PDIS6_NamPlt_vendor,0};
DataAttribute iedModel_PROT_PDIS6_NamPlt_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_PDIS6_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS6_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS6_NamPlt_swRev 	= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_PDIS6_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS6_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS6_NamPlt_d 		= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_PDIS6_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS6_Op 	 				= { DataObjectModelType,    "Op",  (ModelNode*) &iedModel_PROT_PDIS6,  	(ModelNode*)&iedModel_PROT_PDIS6_Str, (ModelNode*) &iedModel_PROT_PDIS6_Op_general,0};
DataAttribute iedModel_PROT_PDIS6_Op_general 		= { DataAttributeModelType, "general", (ModelNode*) &iedModel_PROT_PDIS6_Op,  (ModelNode*) &iedModel_PROT_PDIS6_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS6_Op_q 			= { DataAttributeModelType, "q",    (ModelNode*) &iedModel_PROT_PDIS6_Op,  (ModelNode*) &iedModel_PROT_PDIS6_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS6_Op_t 			= { DataAttributeModelType, "t",    (ModelNode*) &iedModel_PROT_PDIS6_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS6_Str 	 			= {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_PDIS6,  NULL, (ModelNode*) &iedModel_PROT_PDIS6_Str_general,0};
DataAttribute iedModel_PROT_PDIS6_Str_general 		= {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PDIS6_Str,  (ModelNode*) &iedModel_PROT_PDIS6_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS6_Str_dirGeneral 	= {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_PDIS6_Str,  (ModelNode*) &iedModel_PROT_PDIS6_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS6_Str_q 			= {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PDIS6_Str,  (ModelNode*) &iedModel_PROT_PDIS6_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS6_Str_t 			= {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PDIS6_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * PDIS7
 *******************************************************/
LogicalNode iedModel_PROT_PDIS7 					= {    LogicalNodeModelType,    "PDIS7",    (ModelNode*)&iedModel_Generic_PROT,   (ModelNode*)&iedModel_PROT_PDIS8,    (ModelNode*) &iedModel_PROT_PDIS7_Mod};
DataObject iedModel_PROT_PDIS7_Mod 				= {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_PDIS7,    (ModelNode*) &iedModel_PROT_PDIS7_Beh,    (ModelNode*) &iedModel_PROT_PDIS7_Mod_q,0};
DataAttribute iedModel_PROT_PDIS7_Mod_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS7_Mod,    (ModelNode*) &iedModel_PROT_PDIS7_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS7_Mod_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS7_Mod,    (ModelNode*) &iedModel_PROT_PDIS7_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS7_Mod_stVal 		= { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_PDIS7_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS7_Beh 				= {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_PDIS7,    (ModelNode*) &iedModel_PROT_PDIS7_Health,    (ModelNode*) &iedModel_PROT_PDIS7_Beh_stVal,0};
DataAttribute iedModel_PROT_PDIS7_Beh_stVal 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS7_Beh,    (ModelNode*) &iedModel_PROT_PDIS7_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS7_Beh_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS7_Beh,    (ModelNode*) &iedModel_PROT_PDIS7_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS7_Beh_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS7_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS7_Health 				= {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_PDIS7,    (ModelNode*) &iedModel_PROT_PDIS7_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS7_Health_stVal,0};
DataAttribute iedModel_PROT_PDIS7_Health_stVal 	= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS7_Health,    (ModelNode*) &iedModel_PROT_PDIS7_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS7_Health_q 		= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS7_Health,    (ModelNode*) &iedModel_PROT_PDIS7_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS7_Health_t 		= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS7_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS7_NamPlt 				= {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_PDIS7,    (ModelNode*) &iedModel_PROT_PDIS7_Op, (ModelNode*) &iedModel_PROT_PDIS7_NamPlt_vendor,0};
DataAttribute iedModel_PROT_PDIS7_NamPlt_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_PDIS7_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS7_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS7_NamPlt_swRev 	= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_PDIS7_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS7_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS7_NamPlt_d 		= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_PDIS7_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS7_Op 	 				= { DataObjectModelType,    "Op",  (ModelNode*) &iedModel_PROT_PDIS7,  	(ModelNode*)&iedModel_PROT_PDIS7_Str, (ModelNode*) &iedModel_PROT_PDIS7_Op_general,0};
DataAttribute iedModel_PROT_PDIS7_Op_general 		= { DataAttributeModelType, "general", (ModelNode*) &iedModel_PROT_PDIS7_Op,  (ModelNode*) &iedModel_PROT_PDIS7_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS7_Op_q 			= { DataAttributeModelType, "q",    (ModelNode*) &iedModel_PROT_PDIS7_Op,  (ModelNode*) &iedModel_PROT_PDIS7_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS7_Op_t 			= { DataAttributeModelType, "t",    (ModelNode*) &iedModel_PROT_PDIS7_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS7_Str 	 			= {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_PDIS7,  NULL, (ModelNode*) &iedModel_PROT_PDIS7_Str_general,0};
DataAttribute iedModel_PROT_PDIS7_Str_general 		= {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PDIS7_Str,  (ModelNode*) &iedModel_PROT_PDIS7_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS7_Str_dirGeneral 	= {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_PDIS7_Str,  (ModelNode*) &iedModel_PROT_PDIS7_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS7_Str_q 			= {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PDIS7_Str,  (ModelNode*) &iedModel_PROT_PDIS7_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS7_Str_t 			= {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PDIS7_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * PDIS8
 *******************************************************/
LogicalNode iedModel_PROT_PDIS8 					= {    LogicalNodeModelType,    "PDIS8",    (ModelNode*)&iedModel_Generic_PROT,   (ModelNode*)&iedModel_PROT_PDIS9,    (ModelNode*) &iedModel_PROT_PDIS8_Mod};
DataObject iedModel_PROT_PDIS8_Mod 				= {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_PDIS8,    (ModelNode*) &iedModel_PROT_PDIS8_Beh,    (ModelNode*) &iedModel_PROT_PDIS8_Mod_q,0};
DataAttribute iedModel_PROT_PDIS8_Mod_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS8_Mod,    (ModelNode*) &iedModel_PROT_PDIS8_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS8_Mod_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS8_Mod,    (ModelNode*) &iedModel_PROT_PDIS8_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS8_Mod_stVal 		= { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_PDIS8_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS8_Beh 				= {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_PDIS8,    (ModelNode*) &iedModel_PROT_PDIS8_Health,    (ModelNode*) &iedModel_PROT_PDIS8_Beh_stVal,0};
DataAttribute iedModel_PROT_PDIS8_Beh_stVal 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS8_Beh,    (ModelNode*) &iedModel_PROT_PDIS8_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS8_Beh_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS8_Beh,    (ModelNode*) &iedModel_PROT_PDIS8_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS8_Beh_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS8_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS8_Health 				= {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_PDIS8,    (ModelNode*) &iedModel_PROT_PDIS8_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS8_Health_stVal,0};
DataAttribute iedModel_PROT_PDIS8_Health_stVal 	= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS8_Health,    (ModelNode*) &iedModel_PROT_PDIS8_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS8_Health_q 		= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS8_Health,    (ModelNode*) &iedModel_PROT_PDIS8_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS8_Health_t 		= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS8_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS8_NamPlt 				= {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_PDIS8,    (ModelNode*) &iedModel_PROT_PDIS8_Op, (ModelNode*) &iedModel_PROT_PDIS8_NamPlt_vendor,0};
DataAttribute iedModel_PROT_PDIS8_NamPlt_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_PDIS8_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS8_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS8_NamPlt_swRev 	= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_PDIS8_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS8_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS8_NamPlt_d 		= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_PDIS8_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS8_Op 	 				= { DataObjectModelType,    "Op",  (ModelNode*) &iedModel_PROT_PDIS8,  	(ModelNode*)&iedModel_PROT_PDIS8_Str, (ModelNode*) &iedModel_PROT_PDIS8_Op_general,0};
DataAttribute iedModel_PROT_PDIS8_Op_general 		= { DataAttributeModelType, "general", (ModelNode*) &iedModel_PROT_PDIS8_Op,  (ModelNode*) &iedModel_PROT_PDIS8_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS8_Op_q 			= { DataAttributeModelType, "q",    (ModelNode*) &iedModel_PROT_PDIS8_Op,  (ModelNode*) &iedModel_PROT_PDIS8_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS8_Op_t 			= { DataAttributeModelType, "t",    (ModelNode*) &iedModel_PROT_PDIS8_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS8_Str 	 			= {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_PDIS8,  NULL, (ModelNode*) &iedModel_PROT_PDIS8_Str_general,0};
DataAttribute iedModel_PROT_PDIS8_Str_general 		= {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PDIS8_Str,  (ModelNode*) &iedModel_PROT_PDIS8_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS8_Str_dirGeneral 	= {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_PDIS8_Str,  (ModelNode*) &iedModel_PROT_PDIS8_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS8_Str_q 			= {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PDIS8_Str,  (ModelNode*) &iedModel_PROT_PDIS8_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS8_Str_t 			= {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PDIS8_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * PDIS9
 *******************************************************/
LogicalNode iedModel_PROT_PDIS9 					= {    LogicalNodeModelType,    "PDIS9",    (ModelNode*)&iedModel_Generic_PROT,   (ModelNode*)&iedModel_PROT_PDIS10,    (ModelNode*) &iedModel_PROT_PDIS9_Mod};
DataObject iedModel_PROT_PDIS9_Mod 				= {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_PDIS9,    (ModelNode*) &iedModel_PROT_PDIS9_Beh,    (ModelNode*) &iedModel_PROT_PDIS9_Mod_q,0};
DataAttribute iedModel_PROT_PDIS9_Mod_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS9_Mod,    (ModelNode*) &iedModel_PROT_PDIS9_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS9_Mod_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS9_Mod,    (ModelNode*) &iedModel_PROT_PDIS9_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS9_Mod_stVal 		= { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_PDIS9_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS9_Beh 				= {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_PDIS9,    (ModelNode*) &iedModel_PROT_PDIS9_Health,    (ModelNode*) &iedModel_PROT_PDIS9_Beh_stVal,0};
DataAttribute iedModel_PROT_PDIS9_Beh_stVal 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS9_Beh,    (ModelNode*) &iedModel_PROT_PDIS9_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS9_Beh_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS9_Beh,    (ModelNode*) &iedModel_PROT_PDIS9_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS9_Beh_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS9_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS9_Health 				= {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_PDIS9,    (ModelNode*) &iedModel_PROT_PDIS9_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS9_Health_stVal,0};
DataAttribute iedModel_PROT_PDIS9_Health_stVal 	= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS9_Health,    (ModelNode*) &iedModel_PROT_PDIS9_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS9_Health_q 		= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS9_Health,    (ModelNode*) &iedModel_PROT_PDIS9_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS9_Health_t 		= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS9_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS9_NamPlt 				= {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_PDIS9,    (ModelNode*) &iedModel_PROT_PDIS9_Op, (ModelNode*) &iedModel_PROT_PDIS9_NamPlt_vendor,0};
DataAttribute iedModel_PROT_PDIS9_NamPlt_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_PDIS9_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS9_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS9_NamPlt_swRev 	= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_PDIS9_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS9_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS9_NamPlt_d 		= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_PDIS9_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS9_Op 	 				= { DataObjectModelType,    "Op",  (ModelNode*) &iedModel_PROT_PDIS9,  	(ModelNode*)&iedModel_PROT_PDIS9_Str, (ModelNode*) &iedModel_PROT_PDIS9_Op_general,0};
DataAttribute iedModel_PROT_PDIS9_Op_general 		= { DataAttributeModelType, "general", (ModelNode*) &iedModel_PROT_PDIS9_Op,  (ModelNode*) &iedModel_PROT_PDIS9_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS9_Op_q 			= { DataAttributeModelType, "q",    (ModelNode*) &iedModel_PROT_PDIS9_Op,  (ModelNode*) &iedModel_PROT_PDIS9_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS9_Op_t 			= { DataAttributeModelType, "t",    (ModelNode*) &iedModel_PROT_PDIS9_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS9_Str 	 			= {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_PDIS9,  NULL, (ModelNode*) &iedModel_PROT_PDIS9_Str_general,0};
DataAttribute iedModel_PROT_PDIS9_Str_general 		= {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PDIS9_Str,  (ModelNode*) &iedModel_PROT_PDIS9_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS9_Str_dirGeneral 	= {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_PDIS9_Str,  (ModelNode*) &iedModel_PROT_PDIS9_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS9_Str_q 			= {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PDIS9_Str,  (ModelNode*) &iedModel_PROT_PDIS9_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS9_Str_t 			= {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PDIS9_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

/*******************************************************
 * PDIS10
 *******************************************************/
LogicalNode iedModel_PROT_PDIS10 					= {    LogicalNodeModelType,    "PDIS10",    (ModelNode*)&iedModel_Generic_PROT,   (ModelNode*)NULL,    (ModelNode*) &iedModel_PROT_PDIS10_Mod};
DataObject iedModel_PROT_PDIS10_Mod 				= {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_PROT_PDIS10,    (ModelNode*) &iedModel_PROT_PDIS10_Beh,    (ModelNode*) &iedModel_PROT_PDIS10_Mod_q,0};
DataAttribute iedModel_PROT_PDIS10_Mod_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS10_Mod,    (ModelNode*) &iedModel_PROT_PDIS10_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS10_Mod_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS10_Mod,    (ModelNode*) &iedModel_PROT_PDIS10_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_PROT_PDIS10_Mod_stVal 		= { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_PROT_PDIS10_Mod,    (ModelNode*) NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS10_Beh 				= {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_PROT_PDIS10,    (ModelNode*) &iedModel_PROT_PDIS10_Health,    (ModelNode*) &iedModel_PROT_PDIS10_Beh_stVal,0};
DataAttribute iedModel_PROT_PDIS10_Beh_stVal 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS10_Beh,    (ModelNode*) &iedModel_PROT_PDIS10_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS10_Beh_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS10_Beh,    (ModelNode*) &iedModel_PROT_PDIS10_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS10_Beh_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS10_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS10_Health 				= {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_PROT_PDIS10,    (ModelNode*) &iedModel_PROT_PDIS10_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS10_Health_stVal,0};
DataAttribute iedModel_PROT_PDIS10_Health_stVal 	= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_PROT_PDIS10_Health,    (ModelNode*) &iedModel_PROT_PDIS10_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS10_Health_q 		= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_PROT_PDIS10_Health,    (ModelNode*) &iedModel_PROT_PDIS10_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS10_Health_t 		= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_PROT_PDIS10_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS10_NamPlt 				= {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_PROT_PDIS10,    (ModelNode*) &iedModel_PROT_PDIS10_Op, (ModelNode*) &iedModel_PROT_PDIS10_NamPlt_vendor,0};
DataAttribute iedModel_PROT_PDIS10_NamPlt_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_PROT_PDIS10_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS10_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS10_NamPlt_swRev 	= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_PROT_PDIS10_NamPlt,    (ModelNode*) &iedModel_PROT_PDIS10_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_PROT_PDIS10_NamPlt_d 		= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_PROT_PDIS10_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS10_Op 	 				= { DataObjectModelType,    "Op",  (ModelNode*) &iedModel_PROT_PDIS10,  	(ModelNode*)&iedModel_PROT_PDIS10_Str, (ModelNode*) &iedModel_PROT_PDIS10_Op_general,0};
DataAttribute iedModel_PROT_PDIS10_Op_general 		= { DataAttributeModelType, "general", (ModelNode*) &iedModel_PROT_PDIS10_Op,  (ModelNode*) &iedModel_PROT_PDIS10_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS10_Op_q 			= { DataAttributeModelType, "q",    (ModelNode*) &iedModel_PROT_PDIS10_Op,  (ModelNode*) &iedModel_PROT_PDIS10_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS10_Op_t 			= { DataAttributeModelType, "t",    (ModelNode*) &iedModel_PROT_PDIS10_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_PROT_PDIS10_Str 	 			= {    DataObjectModelType,    		"Str",  (ModelNode*) &iedModel_PROT_PDIS10,  NULL, (ModelNode*) &iedModel_PROT_PDIS10_Str_general,0};
DataAttribute iedModel_PROT_PDIS10_Str_general 		= {    DataAttributeModelType,"general", (ModelNode*) &iedModel_PROT_PDIS10_Str,  (ModelNode*) &iedModel_PROT_PDIS10_Str_dirGeneral,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS10_Str_dirGeneral 	= {    DataAttributeModelType,"dirGeneral", (ModelNode*) &iedModel_PROT_PDIS10_Str,  (ModelNode*) &iedModel_PROT_PDIS10_Str_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS10_Str_q 			= {    DataAttributeModelType,    		"q",    (ModelNode*) &iedModel_PROT_PDIS10_Str,  (ModelNode*) &iedModel_PROT_PDIS10_Str_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_PROT_PDIS10_Str_t 			= {    DataAttributeModelType,    		"t",    (ModelNode*) &iedModel_PROT_PDIS10_Str,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
/*************************************************************************
 * ���������� ���� LN
 *
 * 5.6.6 LN: ��������� ������������ ���: CSWI
 *
 * �������� ������� ����������� ���� (LN) ��������� � ��� 61850-5.
 * ������ ���������� ���� ������������ ��� ���������� ����� �����������
 * ������������
 *
 *************************************************************************/

LogicalNode iedModel_CTRL_CSWI1 						= {    LogicalNodeModelType,    "CSWI1",   (ModelNode*) &iedModel_Generic_CTRL,   (ModelNode*)&iedModel_CTRL_XCBR1,    (ModelNode*) &iedModel_CTRL_CSWI1_Mod};
//Mod
DataObject iedModel_CTRL_CSWI1_Mod 					= {    DataObjectModelType,      "Mod",    (ModelNode*) &iedModel_CTRL_CSWI1,    (ModelNode*) &iedModel_CTRL_CSWI1_Beh,    (ModelNode*) &iedModel_CTRL_CSWI1_Mod_q,0};
DataAttribute iedModel_CTRL_CSWI1_Mod_q 				= {    DataAttributeModelType,   "q",    (ModelNode*) &iedModel_CTRL_CSWI1_Mod,    (ModelNode*) &iedModel_CTRL_CSWI1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Mod_t 				= {    DataAttributeModelType,   "t",    (ModelNode*) &iedModel_CTRL_CSWI1_Mod,    (ModelNode*) &iedModel_CTRL_CSWI1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Mod_stVal 			= { DataAttributeModelType,		 "stVal",    (ModelNode*) &iedModel_CTRL_CSWI1_Mod,    (ModelNode*) &iedModel_CTRL_CSWI1_Mod_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Mod_ctlModel 		= {   DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_CTRL_CSWI1_Mod, (ModelNode*) &iedModel_CTRL_CSWI1_Mod_Oper,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Mod_Oper 				= {    DataAttributeModelType,  "Oper",    	(ModelNode*) &iedModel_CTRL_CSWI1_Mod,   NULL,    (ModelNode*) &iedModel_CTRL_CSWI1_Mod_Oper_ctlVal,    0,    IEC61850_FC_CO,    IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Mod_Oper_ctlVal 			= {    DataAttributeModelType,  "ctlVal",  	(ModelNode*) &iedModel_CTRL_CSWI1_Mod_Oper,    (ModelNode*) &iedModel_CTRL_CSWI1_Mod_Oper_origin,    NULL,    0,    IEC61850_FC_CO,    IEC61850_INT32, TRG_OPT_DATA_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Mod_Oper_origin 			= {    DataAttributeModelType,  "origin",  	(ModelNode*) &iedModel_CTRL_CSWI1_Mod_Oper,    (ModelNode*) &iedModel_CTRL_CSWI1_Mod_Oper_ctlNum,    (ModelNode*) &iedModel_CTRL_CSWI1_Mod_Oper_origin_orCat,    0,    IEC61850_FC_CO,    IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Mod_Oper_origin_orCat 	= {    DataAttributeModelType,  "orCat",   	(ModelNode*) &iedModel_CTRL_CSWI1_Mod_Oper_origin,    (ModelNode*) &iedModel_CTRL_CSWI1_Mod_Oper_origin_orIdent,    NULL,    0,    IEC61850_FC_CO,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Mod_Oper_origin_orIdent 	= {    DataAttributeModelType,  "orIdent", 	(ModelNode*) &iedModel_CTRL_CSWI1_Mod_Oper_origin,    NULL,    NULL,    0,    IEC61850_FC_CO,    IEC61850_OCTET_STRING_64, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Mod_Oper_ctlNum 			= {    DataAttributeModelType,  "ctlNum",  	(ModelNode*) &iedModel_CTRL_CSWI1_Mod_Oper,    (ModelNode*) &iedModel_CTRL_CSWI1_Mod_Oper_T,    NULL,    0,    IEC61850_FC_CO,    IEC61850_INT8U, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Mod_Oper_T 				= {    DataAttributeModelType,  "T",    	(ModelNode*) &iedModel_CTRL_CSWI1_Mod_Oper,    (ModelNode*) &iedModel_CTRL_CSWI1_Mod_Oper_Test,    NULL,    0,    IEC61850_FC_CO,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Mod_Oper_Test 			= {    DataAttributeModelType,  "Test",    	(ModelNode*) &iedModel_CTRL_CSWI1_Mod_Oper,    (ModelNode*) &iedModel_CTRL_CSWI1_Mod_Oper_Check,    NULL,    0,    IEC61850_FC_CO,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Mod_Oper_Check 			= {    DataAttributeModelType,  "Check",    (ModelNode*) &iedModel_CTRL_CSWI1_Mod_Oper,    NULL,    NULL,    0,    IEC61850_FC_CO,    IEC61850_CHECK, TRG_OPT_NO, NULL,0};

//Beh
DataObject iedModel_CTRL_CSWI1_Beh 					= {    DataObjectModelType,       "Beh",    (ModelNode*) &iedModel_CTRL_CSWI1,    (ModelNode*) &iedModel_CTRL_CSWI1_Health,    (ModelNode*) &iedModel_CTRL_CSWI1_Beh_stVal,0};
DataAttribute iedModel_CTRL_CSWI1_Beh_stVal 			= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_CTRL_CSWI1_Beh,    (ModelNode*) &iedModel_CTRL_CSWI1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_DATA_CHANGED,NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Beh_q 				= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_CTRL_CSWI1_Beh,    (ModelNode*) &iedModel_CTRL_CSWI1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Beh_t 				= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_CTRL_CSWI1_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

//Health
DataObject iedModel_CTRL_CSWI1_Health 					= {    DataObjectModelType,       "Health",    (ModelNode*) &iedModel_CTRL_CSWI1,    (ModelNode*) &iedModel_CTRL_CSWI1_NamPlt,    (ModelNode*) &iedModel_CTRL_CSWI1_Health_stVal,0};
DataAttribute iedModel_CTRL_CSWI1_Health_stVal 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_CTRL_CSWI1_Health,    (ModelNode*) &iedModel_CTRL_CSWI1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Health_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_CTRL_CSWI1_Health,    (ModelNode*) &iedModel_CTRL_CSWI1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Health_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_CTRL_CSWI1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
//NamPlt
DataObject iedModel_CTRL_CSWI1_NamPlt 					= {    DataObjectModelType,       "NamPlt",    (ModelNode*) &iedModel_CTRL_CSWI1,    (ModelNode*) &iedModel_CTRL_CSWI1_Pos, (ModelNode*) &iedModel_CTRL_CSWI1_NamPlt_vendor,0};
DataAttribute iedModel_CTRL_CSWI1_NamPlt_vendor 		= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_CTRL_CSWI1_NamPlt,    (ModelNode*) &iedModel_CTRL_CSWI1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_NamPlt_swRev 		= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_CTRL_CSWI1_NamPlt,    (ModelNode*) &iedModel_CTRL_CSWI1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_NamPlt_d 			= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_CTRL_CSWI1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
//Pos
DataObject iedModel_CTRL_CSWI1_Pos 					= {    DataObjectModelType,       "Pos",    (ModelNode*) &iedModel_CTRL_CSWI1,    (ModelNode*) NULL, (ModelNode*) &iedModel_CTRL_CSWI1_Pos_stVal,0};
DataAttribute iedModel_CTRL_CSWI1_Pos_stVal 			= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_CTRL_CSWI1_Pos,    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_CODEDENUM, TRG_OPT_DATA_CHANGED, NULL,0};//GENERIC_BITSTRING
DataAttribute iedModel_CTRL_CSWI1_Pos_q 				= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_CTRL_CSWI1_Pos,    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Pos_t 				= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_CTRL_CSWI1_Pos,    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Pos_ctlModel 		= {   DataAttributeModelType,     "ctlModel",    (ModelNode*) &iedModel_CTRL_CSWI1_Pos, (ModelNode*) &iedModel_CTRL_CSWI1_Pos_Oper,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Pos_Oper 			= {    DataAttributeModelType,    "Oper",    (ModelNode*) &iedModel_CTRL_CSWI1_Pos,   NULL,    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_Oper_ctlVal,    0,    IEC61850_FC_CO,    IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Pos_Oper_ctlVal 		= {    DataAttributeModelType,    "ctlVal",    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_Oper,    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_Oper_origin,    NULL,    0,    IEC61850_FC_CO,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Pos_Oper_origin 		= {    DataAttributeModelType,    "origin",    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_Oper,    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_Oper_ctlNum,    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_Oper_origin_orCat,    0,    IEC61850_FC_CO,    IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Pos_Oper_origin_orCat = {    DataAttributeModelType,   "orCat",    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_Oper_origin,    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_Oper_origin_orIdent,    NULL,    0,    IEC61850_FC_CO,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Pos_Oper_origin_orIdent = {    DataAttributeModelType, "orIdent",    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_Oper_origin,    NULL,    NULL,    0,    IEC61850_FC_CO,    IEC61850_OCTET_STRING_64, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Pos_Oper_ctlNum 		= {    DataAttributeModelType,    "ctlNum",    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_Oper,    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_Oper_T,    NULL,    0,    IEC61850_FC_CO,    IEC61850_INT8U, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Pos_Oper_T 			= {    DataAttributeModelType,    "T",    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_Oper,    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_Oper_Test,    NULL,    0,    IEC61850_FC_CO,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Pos_Oper_Test 		= {    DataAttributeModelType,    "Test",    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_Oper,    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_Oper_Check,    NULL,    0,    IEC61850_FC_CO,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_CSWI1_Pos_Oper_Check 		= {    DataAttributeModelType,    "Check",    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_Oper,    NULL,    NULL,    0,    IEC61850_FC_CO,    IEC61850_CHECK, TRG_OPT_NO, NULL,0};


/*************************************************************************
 * ���������� ���� LN
 *
 *  5.12.1 LN: �����������  ���: XCBR
 *
 * �������� ������� ����������� ���� (LN) ��������� � ��� 61850-5.
 * ������ ���������� ���� ������������ ��� ������������� �������������� ���������
 *
 *
 *************************************************************************/
LogicalNode iedModel_CTRL_XCBR1 							= {    LogicalNodeModelType,    "XCBR1",    (ModelNode*) &iedModel_Generic_CTRL,  (ModelNode*) &iedModel_CTRL_PTRC ,    (ModelNode*) &iedModel_CTRL_XCBR1_Mod};
//Mod
DataObject iedModel_CTRL_XCBR1_Mod 						= {    DataObjectModelType,     "Mod",     (ModelNode*) &iedModel_CTRL_XCBR1,     			(ModelNode*) &iedModel_CTRL_XCBR1_Beh,    (ModelNode*) &iedModel_CTRL_XCBR1_Mod_q,0};
DataAttribute iedModel_CTRL_XCBR1_Mod_q 					= {    DataAttributeModelType,  "q",       (ModelNode*) &iedModel_CTRL_XCBR1_Mod, 			(ModelNode*) &iedModel_CTRL_XCBR1_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Mod_t 					= {    DataAttributeModelType,  "t",       (ModelNode*) &iedModel_CTRL_XCBR1_Mod, 			(ModelNode*) &iedModel_CTRL_XCBR1_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Mod_stVal 				= { DataAttributeModelType,		"stVal",   (ModelNode*) &iedModel_CTRL_XCBR1_Mod, 			(ModelNode*) &iedModel_CTRL_XCBR1_Mod_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Mod_ctlModel 			= {   DataAttributeModelType,   "ctlModel",(ModelNode*) &iedModel_CTRL_XCBR1_Mod, 			(ModelNode*) &iedModel_CTRL_XCBR1_Mod_Oper, NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Mod_Oper 				= {    DataAttributeModelType,  "Oper",    	(ModelNode*) &iedModel_CTRL_XCBR1_Mod,         NULL,(ModelNode*) &iedModel_CTRL_XCBR1_Mod_Oper_ctlVal,    0,    IEC61850_FC_CO,    IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Mod_Oper_ctlVal 			= {    DataAttributeModelType,  "ctlVal",  	(ModelNode*) &iedModel_CTRL_XCBR1_Mod_Oper,    (ModelNode*) &iedModel_CTRL_XCBR1_Mod_Oper_origin,    NULL,    0,    IEC61850_FC_CO,    IEC61850_INT32, TRG_OPT_DATA_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Mod_Oper_origin 			= {    DataAttributeModelType,  "origin",  	(ModelNode*) &iedModel_CTRL_XCBR1_Mod_Oper,    (ModelNode*) &iedModel_CTRL_XCBR1_Mod_Oper_ctlNum,    (ModelNode*) &iedModel_CTRL_XCBR1_Mod_Oper_origin_orCat,    0,    IEC61850_FC_CO,    IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Mod_Oper_origin_orCat 	= {    DataAttributeModelType,  "orCat",   	(ModelNode*) &iedModel_CTRL_XCBR1_Mod_Oper_origin,    (ModelNode*) &iedModel_CTRL_XCBR1_Mod_Oper_origin_orIdent,    NULL,    0,    IEC61850_FC_CO,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Mod_Oper_origin_orIdent 	= {    DataAttributeModelType,  "orIdent", 	(ModelNode*) &iedModel_CTRL_XCBR1_Mod_Oper_origin,    NULL,    NULL,    0,    IEC61850_FC_CO,    IEC61850_OCTET_STRING_64, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Mod_Oper_ctlNum 			= {    DataAttributeModelType,  "ctlNum",  	(ModelNode*) &iedModel_CTRL_XCBR1_Mod_Oper,    (ModelNode*) &iedModel_CTRL_XCBR1_Mod_Oper_T,    NULL,    0,    IEC61850_FC_CO,    IEC61850_INT8U, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Mod_Oper_T 				= {    DataAttributeModelType,  "T",    	(ModelNode*) &iedModel_CTRL_XCBR1_Mod_Oper,    (ModelNode*) &iedModel_CTRL_XCBR1_Mod_Oper_Test,    NULL,    0,    IEC61850_FC_CO,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Mod_Oper_Test 			= {    DataAttributeModelType,  "Test",    	(ModelNode*) &iedModel_CTRL_XCBR1_Mod_Oper,    (ModelNode*) &iedModel_CTRL_XCBR1_Mod_Oper_Check,    NULL,    0,    IEC61850_FC_CO,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Mod_Oper_Check 			= {    DataAttributeModelType,  "Check",    (ModelNode*) &iedModel_CTRL_XCBR1_Mod_Oper,    NULL,    NULL,    0,    IEC61850_FC_CO,    IEC61850_CHECK, TRG_OPT_NO, NULL,0};
//Beh
DataObject iedModel_CTRL_XCBR1_Beh 						= {    DataObjectModelType,     "Beh",      (ModelNode*) &iedModel_CTRL_XCBR1,    			(ModelNode*) &iedModel_CTRL_XCBR1_Health,    (ModelNode*) &iedModel_CTRL_XCBR1_Beh_stVal,0};
DataAttribute iedModel_CTRL_XCBR1_Beh_stVal 				= {    DataAttributeModelType,  "stVal",    (ModelNode*) &iedModel_CTRL_XCBR1_Beh,    		(ModelNode*) &iedModel_CTRL_XCBR1_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_DATA_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Beh_q 					= {    DataAttributeModelType,  "q",    	(ModelNode*) &iedModel_CTRL_XCBR1_Beh,    		(ModelNode*) &iedModel_CTRL_XCBR1_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Beh_t 					= {    DataAttributeModelType,  "t",    	(ModelNode*) &iedModel_CTRL_XCBR1_Beh, NULL, NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
//Health
DataObject iedModel_CTRL_XCBR1_Health 						= {    DataObjectModelType,     "Health",   (ModelNode*) &iedModel_CTRL_XCBR1,    			(ModelNode*) &iedModel_CTRL_XCBR1_NamPlt,    (ModelNode*) &iedModel_CTRL_XCBR1_Health_stVal,0};
DataAttribute iedModel_CTRL_XCBR1_Health_stVal 			= {    DataAttributeModelType,  "stVal",    (ModelNode*) &iedModel_CTRL_XCBR1_Health,    	(ModelNode*) &iedModel_CTRL_XCBR1_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Health_q 				= {    DataAttributeModelType,  "q",    	(ModelNode*) &iedModel_CTRL_XCBR1_Health,    	(ModelNode*) &iedModel_CTRL_XCBR1_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Health_t 				= {    DataAttributeModelType,  "t",    	(ModelNode*) &iedModel_CTRL_XCBR1_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
//NamPlt
DataObject iedModel_CTRL_XCBR1_NamPlt 						= {    DataObjectModelType,     "NamPlt",   (ModelNode*) &iedModel_CTRL_XCBR1,    			(ModelNode*) &iedModel_CTRL_XCBR1_Pos, (ModelNode*) &iedModel_CTRL_XCBR1_NamPlt_vendor,0};
DataAttribute iedModel_CTRL_XCBR1_NamPlt_vendor 			= {    DataAttributeModelType,  "vendor",   (ModelNode*) &iedModel_CTRL_XCBR1_NamPlt,    	(ModelNode*) &iedModel_CTRL_XCBR1_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_NamPlt_swRev 			= {    DataAttributeModelType,  "swRev",    (ModelNode*) &iedModel_CTRL_XCBR1_NamPlt,    	(ModelNode*) &iedModel_CTRL_XCBR1_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_NamPlt_d 				= {    DataAttributeModelType,  "d",    	(ModelNode*) &iedModel_CTRL_XCBR1_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
//Pos
DataObject iedModel_CTRL_XCBR1_Pos 						= {    DataObjectModelType,     "Pos",      (ModelNode*) &iedModel_CTRL_XCBR1,    			(ModelNode*)&iedModel_CTRL_XCBR1_Loc, (ModelNode*) &iedModel_CTRL_XCBR1_Pos_stVal,0};
DataAttribute iedModel_CTRL_XCBR1_Pos_stVal 				= {    DataAttributeModelType,  "stVal",    (ModelNode*) &iedModel_CTRL_XCBR1_Pos,    		(ModelNode*) &iedModel_CTRL_XCBR1_Pos_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_CODEDENUM, TRG_OPT_DATA_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Pos_q 					= {    DataAttributeModelType,  "q",    	(ModelNode*) &iedModel_CTRL_XCBR1_Pos,    		(ModelNode*) &iedModel_CTRL_XCBR1_Pos_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Pos_t 					= {    DataAttributeModelType,  "t",    	(ModelNode*) &iedModel_CTRL_XCBR1_Pos,    		(ModelNode*) &iedModel_CTRL_XCBR1_Pos_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Pos_ctlModel 			= {   DataAttributeModelType,   "ctlModel", (ModelNode*) &iedModel_CTRL_XCBR1_Pos,    NULL,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
//Loc
DataObject iedModel_CTRL_XCBR1_Loc 						= {    DataObjectModelType,     "Loc",      (ModelNode*) &iedModel_CTRL_XCBR1,    			(ModelNode*) &iedModel_CTRL_XCBR1_OpCnt, (ModelNode*) &iedModel_CTRL_XCBR1_Loc_stVal,0};
DataAttribute iedModel_CTRL_XCBR1_Loc_stVal 				= {    DataAttributeModelType,  "stVal",    (ModelNode*) &iedModel_CTRL_XCBR1_Loc,    		(ModelNode*) &iedModel_CTRL_XCBR1_Loc_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Loc_q 					= {    DataAttributeModelType,  "q",    	(ModelNode*) &iedModel_CTRL_XCBR1_Loc,    		(ModelNode*) &iedModel_CTRL_XCBR1_Loc_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_Loc_t 					= {    DataAttributeModelType,  "t",    	(ModelNode*) &iedModel_CTRL_XCBR1_Loc,    		(ModelNode*)NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
//OpCnt
DataObject iedModel_CTRL_XCBR1_OpCnt 						= {    DataObjectModelType,     "OpCnt",    (ModelNode*) &iedModel_CTRL_XCBR1,    			(ModelNode*) &iedModel_CTRL_XCBR1_CBOpCap, (ModelNode*) &iedModel_CTRL_XCBR1_OpCnt_stVal,0};
DataAttribute iedModel_CTRL_XCBR1_OpCnt_stVal 				= {    DataAttributeModelType,  "stVal",    (ModelNode*) &iedModel_CTRL_XCBR1_OpCnt,    	(ModelNode*) &iedModel_CTRL_XCBR1_OpCnt_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32U, TRG_OPT_DATA_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_OpCnt_q 					= {    DataAttributeModelType,  "q",    	(ModelNode*) &iedModel_CTRL_XCBR1_OpCnt,    	(ModelNode*) &iedModel_CTRL_XCBR1_OpCnt_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_OpCnt_t 					= {    DataAttributeModelType,  "t",    	(ModelNode*) &iedModel_CTRL_XCBR1_OpCnt,    	(ModelNode*)NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
//CBOpCap
DataObject iedModel_CTRL_XCBR1_CBOpCap 					= {    DataObjectModelType,     "CBOpCap",  (ModelNode*) &iedModel_CTRL_XCBR1,    			(ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn, (ModelNode*) &iedModel_CTRL_XCBR1_CBOpCap_stVal,0};
DataAttribute iedModel_CTRL_XCBR1_CBOpCap_stVal 			= {    DataAttributeModelType,  "stVal",    (ModelNode*) &iedModel_CTRL_XCBR1_CBOpCap,    	(ModelNode*) &iedModel_CTRL_XCBR1_CBOpCap_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32U, TRG_OPT_DATA_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_CBOpCap_q 				= {    DataAttributeModelType,  "q",    	(ModelNode*) &iedModel_CTRL_XCBR1_CBOpCap,    	(ModelNode*) &iedModel_CTRL_XCBR1_CBOpCap_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_CBOpCap_t 				= {    DataAttributeModelType,  "t",    	(ModelNode*) &iedModel_CTRL_XCBR1_CBOpCap,    	(ModelNode*)NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
//BlkOpn
DataObject iedModel_CTRL_XCBR1_BlkOpn 						= {    DataObjectModelType,     "BlkOpn",   (ModelNode*) &iedModel_CTRL_XCBR1,    			(ModelNode*) &iedModel_CTRL_XCBR1_BlkCls, (ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_stVal,0};
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_stVal 			= {    DataAttributeModelType,  "stVal",    (ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn,    	(ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_q 				= {    DataAttributeModelType,  "q",    	(ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn,    	(ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_t 				= {    DataAttributeModelType,  "t",    	(ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn,    	(ModelNode*)&iedModel_CTRL_XCBR1_BlkOpn_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_ctlModel 			= {   DataAttributeModelType,   "ctlModel", (ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn,    	(ModelNode*)&iedModel_CTRL_XCBR1_BlkOpn_Oper,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_Oper 				= {    DataAttributeModelType,  "Oper",    	(ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn,   NULL,    (ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_Oper_ctlVal,    0,    IEC61850_FC_CO,    IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_Oper_ctlVal 		= {    DataAttributeModelType,  "ctlVal",  	(ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_Oper,    (ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_Oper_origin,    NULL,    0,    IEC61850_FC_CO,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_Oper_origin 		= {    DataAttributeModelType,  "origin",  	(ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_Oper,    (ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_Oper_ctlNum,    (ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_Oper_origin_orCat,    0,    IEC61850_FC_CO,    IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_Oper_origin_orCat = {    DataAttributeModelType,  "orCat",   	(ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_Oper_origin,    (ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_Oper_origin_orIdent,    NULL,    0,    IEC61850_FC_CO,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_Oper_origin_orIdent= {   DataAttributeModelType,  "orIdent", 	(ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_Oper_origin,    NULL,    NULL,    0,    IEC61850_FC_CO,    IEC61850_OCTET_STRING_64, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_Oper_ctlNum 		= {    DataAttributeModelType,  "ctlNum",  	(ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_Oper,    (ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_Oper_T,    NULL,    0,    IEC61850_FC_CO,    IEC61850_INT8U, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_Oper_T 			= {    DataAttributeModelType,  "T",    	(ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_Oper,    (ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_Oper_Test,    NULL,    0,    IEC61850_FC_CO,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_Oper_Test 		= {    DataAttributeModelType,  "Test",    	(ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_Oper,    (ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_Oper_Check,    NULL,    0,    IEC61850_FC_CO,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkOpn_Oper_Check 		= {    DataAttributeModelType,  "Check",    (ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_Oper,    NULL,    NULL,    0,    IEC61850_FC_CO,    IEC61850_CHECK, TRG_OPT_NO, NULL,0};

//BlkCls
DataObject iedModel_CTRL_XCBR1_BlkCls 						= {    DataObjectModelType,     "BlkCIs",   (ModelNode*) &iedModel_CTRL_XCBR1,    			(ModelNode*) NULL, (ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_stVal,0};
DataAttribute iedModel_CTRL_XCBR1_BlkCls_stVal 			= {    DataAttributeModelType,  "stVal",    (ModelNode*) &iedModel_CTRL_XCBR1_BlkCls,    	(ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkCls_q 				= {    DataAttributeModelType,  "q",    	(ModelNode*) &iedModel_CTRL_XCBR1_BlkCls,    	(ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkCls_t 				= {    DataAttributeModelType,  "t",    	(ModelNode*) &iedModel_CTRL_XCBR1_BlkCls,    	(ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkCls_ctlModel 			= {   DataAttributeModelType,   "ctlModel", (ModelNode*) &iedModel_CTRL_XCBR1_BlkCls,    	(ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_Oper,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkCls_Oper 				= {    DataAttributeModelType,  "Oper",    	(ModelNode*) &iedModel_CTRL_XCBR1_BlkCls,   NULL, (ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_Oper_ctlVal,    0,    IEC61850_FC_CO,    IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkCls_Oper_ctlVal 		= {    DataAttributeModelType,  "ctlVal",  	(ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_Oper,    (ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_Oper_origin,    NULL,    0,    IEC61850_FC_CO,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkCls_Oper_origin 		= {    DataAttributeModelType,  "origin",  	(ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_Oper,    (ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_Oper_ctlNum,    (ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_Oper_origin_orCat,    0,    IEC61850_FC_CO,    IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkCls_Oper_origin_orCat = {    DataAttributeModelType,  "orCat",   	(ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_Oper_origin,    (ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_Oper_origin_orIdent,    NULL,    0,    IEC61850_FC_CO,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkCls_Oper_origin_orIdent= {   DataAttributeModelType,  "orIdent", 	(ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_Oper_origin,    NULL,    NULL,    0,    IEC61850_FC_CO,    IEC61850_OCTET_STRING_64, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkCls_Oper_ctlNum 		= {    DataAttributeModelType,  "ctlNum",  	(ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_Oper,    (ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_Oper_T,    NULL,    0,    IEC61850_FC_CO,    IEC61850_INT8U, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkCls_Oper_T 			= {    DataAttributeModelType,  "T",    	(ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_Oper,    (ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_Oper_Test,    NULL,    0,    IEC61850_FC_CO,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkCls_Oper_Test 		= {    DataAttributeModelType,  "Test",    	(ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_Oper,    (ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_Oper_Check,    NULL,    0,    IEC61850_FC_CO,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_XCBR1_BlkCls_Oper_Check 		= {    DataAttributeModelType,  "Check",    (ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_Oper,    NULL,    NULL,    0,    IEC61850_FC_CO,    IEC61850_CHECK, TRG_OPT_NO, NULL,0};

//-PTRC --------------------------------------------------------------------------
LogicalNode iedModel_CTRL_PTRC 					= {    LogicalNodeModelType,    "PTRC1",    (ModelNode*)&iedModel_Generic_CTRL,   (ModelNode*)&iedModel_CTRL_GGIO1,    (ModelNode*) &iedModel_CTRL_PTRC_Mod};

DataObject iedModel_CTRL_PTRC_Mod 				= {    DataObjectModelType,    "Mod",    (ModelNode*) &iedModel_CTRL_PTRC,    (ModelNode*) &iedModel_CTRL_PTRC_Beh,    (ModelNode*) &iedModel_CTRL_PTRC_Mod_q,0};
DataAttribute iedModel_CTRL_PTRC_Mod_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_CTRL_PTRC_Mod,    (ModelNode*) &iedModel_CTRL_PTRC_Mod_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_CTRL_PTRC_Mod_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_CTRL_PTRC_Mod,    (ModelNode*) &iedModel_CTRL_PTRC_Mod_stVal,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO,   NULL,0};
DataAttribute iedModel_CTRL_PTRC_Mod_stVal 		= { DataAttributeModelType,"stVal",    (ModelNode*) &iedModel_CTRL_PTRC_Mod,    (ModelNode*) &iedModel_CTRL_PTRC_Mod_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32,     TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_PTRC_Mod_ctlModel 	= {   DataAttributeModelType,    "ctlModel",    (ModelNode*) &iedModel_CTRL_PTRC_Mod,    NULL,    NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};

DataObject iedModel_CTRL_PTRC_Beh 				= {    DataObjectModelType,    "Beh",    (ModelNode*) &iedModel_CTRL_PTRC,    (ModelNode*) &iedModel_CTRL_PTRC_Health,    (ModelNode*) &iedModel_CTRL_PTRC_Beh_stVal,0};
DataAttribute iedModel_CTRL_PTRC_Beh_stVal 		= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_CTRL_PTRC_Beh,    (ModelNode*) &iedModel_CTRL_PTRC_Beh_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_PTRC_Beh_q 			= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_CTRL_PTRC_Beh,    (ModelNode*) &iedModel_CTRL_PTRC_Beh_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_PTRC_Beh_t 			= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_CTRL_PTRC_Beh,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_CTRL_PTRC_Health 				= {    DataObjectModelType,    "Health",    (ModelNode*) &iedModel_CTRL_PTRC,    (ModelNode*) &iedModel_CTRL_PTRC_NamPlt,    (ModelNode*) &iedModel_CTRL_PTRC_Health_stVal,0};
DataAttribute iedModel_CTRL_PTRC_Health_stVal 	= {    DataAttributeModelType,    "stVal",    (ModelNode*) &iedModel_CTRL_PTRC_Health,    (ModelNode*) &iedModel_CTRL_PTRC_Health_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_INT32, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_CTRL_PTRC_Health_q 		= {    DataAttributeModelType,    "q",    (ModelNode*) &iedModel_CTRL_PTRC_Health,    (ModelNode*) &iedModel_CTRL_PTRC_Health_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_CTRL_PTRC_Health_t 		= {    DataAttributeModelType,    "t",    (ModelNode*) &iedModel_CTRL_PTRC_Health,    NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};

DataObject iedModel_CTRL_PTRC_NamPlt 				= {    DataObjectModelType,    "NamPlt",    (ModelNode*) &iedModel_CTRL_PTRC,    (ModelNode*) &iedModel_CTRL_PTRC_Op, (ModelNode*) &iedModel_CTRL_PTRC_NamPlt_vendor,0};
DataAttribute iedModel_CTRL_PTRC_NamPlt_vendor 	= {    DataAttributeModelType,    "vendor",    (ModelNode*) &iedModel_CTRL_PTRC_NamPlt,    (ModelNode*) &iedModel_CTRL_PTRC_NamPlt_swRev,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_CTRL_PTRC_NamPlt_swRev 	= {    DataAttributeModelType,    "swRev",    (ModelNode*) &iedModel_CTRL_PTRC_NamPlt,    (ModelNode*) &iedModel_CTRL_PTRC_NamPlt_d,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO,    NULL,0};
DataAttribute iedModel_CTRL_PTRC_NamPlt_d 		= {    DataAttributeModelType,    "d",    (ModelNode*) &iedModel_CTRL_PTRC_NamPlt,    NULL,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};

DataObject iedModel_CTRL_PTRC_Op 	 				= { DataObjectModelType,    "Op",  (ModelNode*) &iedModel_CTRL_PTRC,  	NULL, (ModelNode*) &iedModel_CTRL_PTRC_Op_general,0};
DataAttribute iedModel_CTRL_PTRC_Op_general 		= { DataAttributeModelType, "general", (ModelNode*) &iedModel_CTRL_PTRC_Op,  (ModelNode*) &iedModel_CTRL_PTRC_Op_q,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_PTRC_Op_q 			= { DataAttributeModelType, "q",    (ModelNode*) &iedModel_CTRL_PTRC_Op,  (ModelNode*) &iedModel_CTRL_PTRC_Op_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_PTRC_Op_t 			= { DataAttributeModelType, "t",    (ModelNode*) &iedModel_CTRL_PTRC_Op,  NULL,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};


// --------------------------------------------------------
LogicalNode iedModel_CTRL_GGIO1 							= {    LogicalNodeModelType,    "GGIO1",    (ModelNode*) &iedModel_Generic_CTRL,  NULL ,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1};

DataObject iedModel_CTRL_GGIO1_SPCSO1 						= {    DataObjectModelType,     "SPCSO1",     		(ModelNode*) &iedModel_CTRL_GGIO1,     		(ModelNode*)  &iedModel_CTRL_GGIO1_SPCSO2,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_q,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1, 			(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1, 			(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_d,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_d 				= {    DataAttributeModelType,  "d",       		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1, 		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_stVal,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1, 			(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_ctlModel 			= {   DataAttributeModelType,   "ctlModel",		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1, 			(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper, NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper 				= {    DataAttributeModelType,  "Oper",    		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1,   		NULL,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_ctlVal,    0,    IEC61850_FC_CO,    IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_ctlVal 			= {    DataAttributeModelType,  "ctlVal",  	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_origin,    NULL,    0,    IEC61850_FC_CO,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_origin 			= {    DataAttributeModelType,  "origin",  	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_ctlNum,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_origin_orCat,    0,    IEC61850_FC_CO,    IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_origin_orCat 	= {    DataAttributeModelType,  "orCat",   	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_origin,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_origin_orIdent,    NULL,    0,    IEC61850_FC_CO,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_origin_orIdent 	= {    DataAttributeModelType,  "orIdent", 	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_origin,    NULL,    NULL,    0,    IEC61850_FC_CO,    IEC61850_OCTET_STRING_64, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_ctlNum 			= {    DataAttributeModelType,  "ctlNum",  	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_T,    NULL,    0,    IEC61850_FC_CO,    IEC61850_INT8U, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_T 				= {    DataAttributeModelType,  "T",    	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_Test,    NULL,    0,    IEC61850_FC_CO,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_Test 			= {    DataAttributeModelType,  "Test",    	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_Check,    NULL,    0,    IEC61850_FC_CO,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_Check 			= {    DataAttributeModelType,  "Check",    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper,    NULL,    NULL,    0,    IEC61850_FC_CO,    IEC61850_CHECK, TRG_OPT_NO, NULL,0};

DataObject iedModel_CTRL_GGIO1_SPCSO2 						= {    DataObjectModelType,     "SPCSO2",     		(ModelNode*) &iedModel_CTRL_GGIO1,     			(ModelNode*)  &iedModel_CTRL_GGIO1_SPCSO3,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_q,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2, 			(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2, 			(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_d,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_d 				= {    DataAttributeModelType,  "d",       		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2, 		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_stVal,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2, 			(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_ctlModel 			= {   DataAttributeModelType,   "ctlModel",		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2, 			(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_Oper, NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_Oper 				= {    DataAttributeModelType,  "Oper",    		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2,   		NULL,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_Oper_ctlVal,    0,    IEC61850_FC_CO,    IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_Oper_ctlVal 			= {    DataAttributeModelType,  "ctlVal",  	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_Oper,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_Oper_origin,    NULL,    0,    IEC61850_FC_CO,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_Oper_origin 			= {    DataAttributeModelType,  "origin",  	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_Oper,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_Oper_ctlNum,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_Oper_origin_orCat,    0,    IEC61850_FC_CO,    IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_Oper_origin_orCat 	= {    DataAttributeModelType,  "orCat",   	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_Oper_origin,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_Oper_origin_orIdent,    NULL,    0,    IEC61850_FC_CO,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_Oper_origin_orIdent 	= {    DataAttributeModelType,  "orIdent", 	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_Oper_origin,    NULL,    NULL,    0,    IEC61850_FC_CO,    IEC61850_OCTET_STRING_64, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_Oper_ctlNum 			= {    DataAttributeModelType,  "ctlNum",  	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_Oper,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_Oper_T,    NULL,    0,    IEC61850_FC_CO,    IEC61850_INT8U, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_Oper_T 				= {    DataAttributeModelType,  "T",    	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_Oper,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_Oper_Test,    NULL,    0,    IEC61850_FC_CO,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_Oper_Test 			= {    DataAttributeModelType,  "Test",    	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_Oper,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_Oper_Check,    NULL,    0,    IEC61850_FC_CO,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO2_Oper_Check 			= {    DataAttributeModelType,  "Check",    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO2_Oper,    NULL,    NULL,    0,    IEC61850_FC_CO,    IEC61850_CHECK, TRG_OPT_NO, NULL,0};

DataObject iedModel_CTRL_GGIO1_SPCSO3 						= {    DataObjectModelType,     "SPCSO3",     		(ModelNode*) &iedModel_CTRL_GGIO1,     	NULL,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_q,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_q 				= {    DataAttributeModelType,  "q",       		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3, 			(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_t,    NULL,    0,    IEC61850_FC_ST,    IEC61850_QUALITY, TRG_OPT_QUALITY_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_t 				= {    DataAttributeModelType,  "t",       		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3, 			(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_d,    NULL,    0,    IEC61850_FC_ST,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_d 				= {    DataAttributeModelType,  "d",       		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3, 		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_stVal,    NULL,    0,    IEC61850_FC_DC,    IEC61850_VISIBLE_STRING_255, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_stVal 			= { DataAttributeModelType,		"stVal",   		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3, 			(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_ctlModel,    NULL,    0,    IEC61850_FC_ST,    IEC61850_BOOLEAN,     TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_ctlModel 			= {   DataAttributeModelType,   "ctlModel",		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3, 			(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_Oper, NULL,    0,    IEC61850_FC_CF,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_Oper 				= {    DataAttributeModelType,  "Oper",    		(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3,   		NULL,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_Oper_ctlVal,    0,    IEC61850_FC_CO,    IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_Oper_ctlVal 			= {    DataAttributeModelType,  "ctlVal",  	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_Oper,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_Oper_origin,    NULL,    0,    IEC61850_FC_CO,    IEC61850_BOOLEAN, TRG_OPT_DATA_CHANGED, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_Oper_origin 			= {    DataAttributeModelType,  "origin",  	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_Oper,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_Oper_ctlNum,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_Oper_origin_orCat,    0,    IEC61850_FC_CO,    IEC61850_CONSTRUCTED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_Oper_origin_orCat 	= {    DataAttributeModelType,  "orCat",   	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_Oper_origin,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_Oper_origin_orIdent,    NULL,    0,    IEC61850_FC_CO,    IEC61850_ENUMERATED, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_Oper_origin_orIdent 	= {    DataAttributeModelType,  "orIdent", 	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_Oper_origin,    NULL,    NULL,    0,    IEC61850_FC_CO,    IEC61850_OCTET_STRING_64, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_Oper_ctlNum 			= {    DataAttributeModelType,  "ctlNum",  	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_Oper,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_Oper_T,    NULL,    0,    IEC61850_FC_CO,    IEC61850_INT8U, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_Oper_T 				= {    DataAttributeModelType,  "T",    	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_Oper,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_Oper_Test,    NULL,    0,    IEC61850_FC_CO,    IEC61850_TIMESTAMP, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_Oper_Test 			= {    DataAttributeModelType,  "Test",    	(ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_Oper,    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_Oper_Check,    NULL,    0,    IEC61850_FC_CO,    IEC61850_BOOLEAN, TRG_OPT_NO, NULL,0};
DataAttribute iedModel_CTRL_GGIO1_SPCSO3_Oper_Check 			= {    DataAttributeModelType,  "Check",    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO3_Oper,    NULL,    NULL,    0,    IEC61850_FC_CO,    IEC61850_CHECK, TRG_OPT_NO, NULL,0};


// --------------------------------------------------------
// --------------------------------------------------------
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda0 = {"GGIO",false,"IN42GGIO1$ST$Ind1", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda1 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda1 = {"GGIO",false,"IN42GGIO1$ST$Ind2", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda2 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda2 = {"GGIO",false,"IN42GGIO1$ST$Ind3", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda3 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda3 = {"GGIO",false,"IN42GGIO1$ST$Ind4", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda4 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda4 = {"GGIO",false,"IN42GGIO1$ST$Ind5", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda5 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda5 = {"GGIO",false,"IN42GGIO1$ST$Ind6", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda6 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda6 = {"GGIO",false,"IN42GGIO1$ST$Ind7", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda7 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda7 = {"GGIO",false,"IN42GGIO1$ST$Ind8", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda8 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda8 = {"GGIO",false,"IN42GGIO1$ST$Ind9", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda9 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda9 = {"GGIO",false,"IN42GGIO1$ST$Ind10", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda10 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda10 = {"GGIO",false,"IN42GGIO1$ST$Ind11", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda11 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda11 = {"GGIO",false,"IN42GGIO1$ST$Ind12", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda12 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda12 = {"GGIO",false,"IN42GGIO1$ST$Ind13", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda13 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda13 = {"GGIO",false,"IN42GGIO1$ST$Ind14", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda14 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda14 = {"GGIO",false,"IN42GGIO1$ST$Ind15", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda15 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda15 = {"GGIO",false,"IN42GGIO1$ST$Ind16", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda16 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda16 = {"GGIO",false,"IN42GGIO1$ST$Ind17", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda17 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda17 = {"GGIO",false,"IN42GGIO1$ST$Ind18", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda18 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda18 = {"GGIO",false,"IN42GGIO1$ST$Ind19", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda19 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda19 = {"GGIO",false,"IN42GGIO1$ST$Ind20", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda20 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda20 = {"GGIO",false,"IN42GGIO1$ST$Ind21", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda21 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda21 = {"GGIO",false,"IN42GGIO1$ST$Ind22", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda22 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda22 = {"GGIO",false,"IN42GGIO1$ST$Ind23", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda23 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda23 = {"GGIO",false,"IN42GGIO1$ST$Ind24", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda24 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda24 = {"GGIO",false,"IN42GGIO1$ST$Ind25", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda25 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda25 = {"GGIO",false,"IN42GGIO1$ST$Ind26", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda26 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda26 = {"GGIO",false,"IN42GGIO1$ST$Ind27", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda27 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda27 = {"GGIO",false,"IN42GGIO1$ST$Ind28", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda28 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda28 = {"GGIO",false,"IN42GGIO1$ST$Ind29", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda29 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda29 = {"GGIO",false,"IN42GGIO1$ST$Ind30", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda30 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda30 = {"GGIO",false,"IN42GGIO1$ST$Ind31", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda31 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda31 = {"GGIO",false,"IN42GGIO1$ST$Ind32", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda32 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda32 = {"GGIO",false,"IN42GGIO1$ST$Ind33", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda33 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda33 = {"GGIO",false,"IN42GGIO1$ST$Ind34", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda34 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda34 = {"GGIO",false,"IN42GGIO1$ST$Ind35", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda35 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda35 = {"GGIO",false,"IN42GGIO1$ST$Ind36", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda36 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda36 = {"GGIO",false,"IN42GGIO1$ST$Ind37", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda37 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda37 = {"GGIO",false,"IN42GGIO1$ST$Ind38", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda38 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda38 = {"GGIO",false,"IN42GGIO1$ST$Ind39", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda39 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda39 = {"GGIO",false,"IN42GGIO1$ST$Ind40", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda40 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda40 = {"GGIO",false,"IN42GGIO1$ST$Ind41", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_fcda41 };
DataSetEntry iedModelds_LD0_LLN0_dataset_fcda41 = {"GGIO",false,"IN42GGIO1$ST$Ind42", -1, NULL, NULL, NULL };


/***********************************************************************
 * DataSet
 ***********************************************************************/

DataSetEntry iedModelds_LD0_MMXU1_fcda0 = {"MES",false, "MMXU1$MX$A$phsA",-1,NULL,NULL,&iedModelds_LD0_MMXU1_fcda1};
DataSetEntry iedModelds_LD0_MMXU1_fcda1 = {"MES",false, "MMXU1$MX$A$phsB",-1,NULL,NULL,&iedModelds_LD0_MMXU1_fcda2};
DataSetEntry iedModelds_LD0_MMXU1_fcda2 = {"MES",false, "MMXU1$MX$A$phsC",-1,NULL,NULL,&iedModelds_LD0_MMXU1_fcda3};
DataSetEntry iedModelds_LD0_MMXU1_fcda3 = {"MES",false, "MMXU1$MX$A$neut",-1,NULL,NULL,&iedModelds_LD0_MMXU1_fcda4};
DataSetEntry iedModelds_LD0_MMXU1_fcda4 = {"MES",false, "MSQI1$MX$SeqA$I0",-1,NULL,NULL,&iedModelds_LD0_MMXU1_fcda5};
DataSetEntry iedModelds_LD0_MMXU1_fcda5 = {"MES",false, "MSQI1$MX$SeqA$I2",-1,NULL,NULL,NULL};

DataSetEntry iedModelds_LD0_MMXU2_fcda0 = {"MES",false, "MMXU2$MX$A$phsA",-1,NULL,NULL,&iedModelds_LD0_MMXU2_fcda1};
DataSetEntry iedModelds_LD0_MMXU2_fcda1 = {"MES",false, "MMXU2$MX$A$phsB",-1,NULL,NULL,&iedModelds_LD0_MMXU2_fcda2};
DataSetEntry iedModelds_LD0_MMXU2_fcda2 = {"MES",false, "MMXU2$MX$A$phsC",-1,NULL,NULL,&iedModelds_LD0_MMXU2_fcda3};
DataSetEntry iedModelds_LD0_MMXU2_fcda3 = {"MES",false, "MMXU2$MX$A$neut",-1,NULL,NULL,&iedModelds_LD0_MMXU2_fcda4};
DataSetEntry iedModelds_LD0_MMXU2_fcda4 = {"MES",false, "MSQI2$MX$SeqA$I0",-1,NULL,NULL,&iedModelds_LD0_MMXU2_fcda5};
DataSetEntry iedModelds_LD0_MMXU2_fcda5 = {"MES",false, "MSQI2$MX$SeqA$I2",-1,NULL,NULL,NULL};

DataSetEntry iedModelds_LD0_MMXU3_fcda0 = {"MES",false, "MMXU3$MX$A$phsA",-1,NULL,NULL,&iedModelds_LD0_MMXU3_fcda1};
DataSetEntry iedModelds_LD0_MMXU3_fcda1 = {"MES",false, "MMXU3$MX$A$phsB",-1,NULL,NULL,&iedModelds_LD0_MMXU3_fcda2};
DataSetEntry iedModelds_LD0_MMXU3_fcda2 = {"MES",false, "MMXU3$MX$A$phsC",-1,NULL,NULL,&iedModelds_LD0_MMXU3_fcda3};
DataSetEntry iedModelds_LD0_MMXU3_fcda3 = {"MES",false, "MMXU3$MX$A$neut",-1,NULL,NULL,&iedModelds_LD0_MMXU3_fcda4};
DataSetEntry iedModelds_LD0_MMXU3_fcda4 = {"MES",false, "MSQI3$MX$SeqA$I0",-1,NULL,NULL,&iedModelds_LD0_MMXU3_fcda5};
DataSetEntry iedModelds_LD0_MMXU3_fcda5 = {"MES",false, "MSQI3$MX$SeqA$I2",-1,NULL,NULL,NULL};

DataSetEntry iedModelds_LD0_MMXU4_fcda0 = {"MES",false, "MMXU4$MX$PhV$phsA",-1,NULL,NULL,	&iedModelds_LD0_MMXU4_fcda1};
DataSetEntry iedModelds_LD0_MMXU4_fcda1 = {"MES",false, "MMXU4$MX$PhV$phsB",-1,NULL,NULL,	&iedModelds_LD0_MMXU4_fcda2};
DataSetEntry iedModelds_LD0_MMXU4_fcda2 = {"MES",false, "MMXU4$MX$PhV$phsC",-1,NULL,NULL,	&iedModelds_LD0_MMXU4_fcda3};
DataSetEntry iedModelds_LD0_MMXU4_fcda3 = {"MES",false, "MMXU4$MX$PhV$res",-1, NULL,NULL,	&iedModelds_LD0_MMXU4_fcda4};
DataSetEntry iedModelds_LD0_MMXU4_fcda4 = {"MES",false, "MMXU4$MX$PPV$phsAB",-1,NULL,NULL,	&iedModelds_LD0_MMXU4_fcda5};
DataSetEntry iedModelds_LD0_MMXU4_fcda5 = {"MES",false, "MMXU4$MX$PPV$phsBC",-1,NULL,NULL,	&iedModelds_LD0_MMXU4_fcda6};
DataSetEntry iedModelds_LD0_MMXU4_fcda6 = {"MES",false, "MMXU4$MX$PPV$phsCA",-1,NULL,NULL,	&iedModelds_LD0_MMXU4_fcda7};
DataSetEntry iedModelds_LD0_MMXU4_fcda7 = {"MES",false, "MSQI4$MX$SeqU$U0",-1,NULL,NULL,	&iedModelds_LD0_MMXU4_fcda8};
DataSetEntry iedModelds_LD0_MMXU4_fcda8 = {"MES",false, "MSQI4$MX$SeqU$U2",-1,NULL,NULL,NULL};

DataSetEntry iedModelds_LD0_MMXU5_fcda0 = {"MES",false, "MMXU5$MX$TotW",-1,NULL,NULL,&iedModelds_LD0_MMXU5_fcda1};
DataSetEntry iedModelds_LD0_MMXU5_fcda1 = {"MES",false, "MMXU5$MX$TotVAr",-1,NULL,NULL,&iedModelds_LD0_MMXU5_fcda2};
DataSetEntry iedModelds_LD0_MMXU5_fcda2 = {"MES",false, "MMXU5$MX$TotPF",-1,NULL,NULL,&iedModelds_LD0_MMXU5_fcda3};
DataSetEntry iedModelds_LD0_MMXU5_fcda3 = {"MES",false, "MMXU5$MX$Hz",-1,NULL,NULL,NULL};

//LED12
DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda0 = {"GGIO",false,"LED16GGIO1$ST$Ind1", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_D3_fcda1 };
DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda1 = {"GGIO",false,"LED16GGIO1$ST$Ind2", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_D3_fcda2 };
DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda2 = {"GGIO",false,"LED16GGIO1$ST$Ind3", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_D3_fcda3 };
DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda3 = {"GGIO",false,"LED16GGIO1$ST$Ind4", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_D3_fcda4 };
DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda4 = {"GGIO",false,"LED16GGIO1$ST$Ind5", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_D3_fcda5 };
DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda5 = {"GGIO",false,"LED16GGIO1$ST$Ind6", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_D3_fcda6 };
DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda6 = {"GGIO",false,"LED16GGIO1$ST$Ind7", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_D3_fcda7 };
DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda7 = {"GGIO",false,"LED16GGIO1$ST$Ind8", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_D3_fcda8 };
DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda8 = {"GGIO",false,"LED16GGIO1$ST$Ind9", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_D3_fcda9 };
DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda9 = {"GGIO",false,"LED16GGIO1$ST$Ind10", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_D3_fcda10 };
DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda10 = {"GGIO",false,"LED16GGIO1$ST$Ind11", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_D3_fcda11 };
DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda11 = {"GGIO",false,"LED16GGIO1$ST$Ind12", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_D3_fcda12 };
DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda12 = {"GGIO",false,"LED16GGIO1$ST$Ind13", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_D3_fcda13 };
DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda13 = {"GGIO",false,"LED16GGIO1$ST$Ind14", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_D3_fcda14 };
DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda14 = {"GGIO",false,"LED16GGIO1$ST$Ind15", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_D3_fcda15 };
DataSetEntry iedModelds_LD0_LLN0_dataset_D3_fcda15 = {"GGIO",false,"LED16GGIO1$ST$Ind16", -1, NULL, NULL, NULL };

DataSetEntry iedModelds_LD0_LLN0_dataset_D4_fcda0 = {"CTRL",false,"XCBR1$ST$Pos", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_D4_fcda1 };
DataSetEntry iedModelds_LD0_LLN0_dataset_D4_fcda1 = {"CTRL",false,"XCBR1$ST$BlkCls", -1, NULL, NULL, NULL };

DataSetEntry iedModelds_LD0_LLN0_dataset_D5_fcda0 = {"CTRL",false,"GGIO1$ST$SPCSO1$stVal", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_D5_fcda1 };
DataSetEntry iedModelds_LD0_LLN0_dataset_D5_fcda1 = {"CTRL",false,"GGIO1$ST$SPCSO2$stVal", -1, NULL, NULL, &iedModelds_LD0_LLN0_dataset_D5_fcda2 };
DataSetEntry iedModelds_LD0_LLN0_dataset_D5_fcda2 = {"CTRL",false,"GGIO1$ST$SPCSO3$stVal", -1, NULL, NULL, NULL };

/***********************************************************************
 * DataSet
 ***********************************************************************/
DataSet iedModelds_LD0_LLN0_dataset0 = {"LD0", "LLN0$DS0", 24, &iedModelds_LD0_LLN0_dataset_fcda0, 		&iedModelds_LD0_LLN0_dataset1};		//��������
DataSet iedModelds_LD0_LLN0_dataset1 = {"LD0", "LLN0$DS1", 16, &iedModelds_LD0_LLN0_dataset_D3_fcda0, 	&iedModelds_LD0_LLN0_dataset2};		//�������
DataSet iedModelds_LD0_LLN0_dataset2 = {"LD0", "LLN0$DS2",  2, &iedModelds_LD0_LLN0_dataset_D4_fcda0, 	&iedModelds_LD0_LLN0_dataset3};		//�������
DataSet iedModelds_LD0_LLN0_dataset3 = {"LD0", "LLN0$DS3",  3, &iedModelds_LD0_LLN0_dataset_D5_fcda0 ,	&iedModelds_LD0_LLN0_dataset4};		//���������
DataSet iedModelds_LD0_LLN0_dataset4 = {"LD0", "LLN0$DS4",  0, NULL ,									&iedModelds_LD0_LLN0_dataset5};		//XCBR
DataSet iedModelds_LD0_LLN0_dataset5 = {"LD0", "LLN0$DS5",  0, NULL ,									&iedModelds_LD0_LLN0_dataset6};		//������ � �������
DataSet iedModelds_LD0_LLN0_dataset6 = {"LD0", "LLN0$DS6",  6, &iedModelds_LD0_MMXU1_fcda0 ,			&iedModelds_LD0_LLN0_dataset7};		// ��������
DataSet iedModelds_LD0_LLN0_dataset7 = {"LD0", "LLN0$DS7",  6, &iedModelds_LD0_MMXU2_fcda0 ,			&iedModelds_LD0_LLN0_dataset8};
DataSet iedModelds_LD0_LLN0_dataset8 = {"LD0", "LLN0$DS8",  6, &iedModelds_LD0_MMXU3_fcda0 ,			&iedModelds_LD0_LLN0_dataset9};
DataSet iedModelds_LD0_LLN0_dataset9 = {"LD0", "LLN0$DS9",  9, &iedModelds_LD0_MMXU4_fcda0 ,			&iedModelds_LD0_LLN0_dataset10};
DataSet iedModelds_LD0_LLN0_dataset10 ={"LD0", "LLN0$DS10", 6, &iedModelds_LD0_MMXU5_fcda0 ,			NULL};


ReportControlBlock iedModel_LD0_LLN0_report0 = {
	&iedModel_LD0_LLN0,
	"URCB_101",
	"LLN0$BR$URCB_101",
	false,				// false  UNBUFFERED REPORT CONTROL BLOCK(URCB)
	"DS0",				// ������ �� ����� ������ ��� ������
	0,					// ������� ������������
	TRG_OPT_DATA_CHANGED,// | TRG_OPT_INTEGRITY,// ������� ��������� 16
	111,				// OptFlds
	50,					// BufTm �������� ����� ��
	0,					// IntPrd - ������ ����������� � �� (1000)
	&iedModel_LD0_LLN0_report1
};

ReportControlBlock iedModel_LD0_LLN0_report1 = { &iedModel_LD0_LLN0, 	"URCB_201", "LLN0$BR$URCB_102",	false,"DS1", 0, TRG_OPT_INTEGRITY, 111, 100, 5000,	&iedModel_LD0_LLN0_report2};

ReportControlBlock iedModel_LD0_LLN0_report2 = { &iedModel_LD0_LLN0, 	"BRCB_101", "LLN0$BR$BRCB_101", true, "DS0", 0, TRG_OPT_INTEGRITY, 111,	3000, 5000,	&iedModel_LD0_LLN0_report3};
ReportControlBlock iedModel_LD0_LLN0_report3 = { &iedModel_LD0_LLN0, 	"BRCB_201", "LLN0$BR$BRCB_201", true, "DS1", 0, TRG_OPT_NO, 111, 3000, 5000, &iedModel_LD0_LLN0_report4};
ReportControlBlock iedModel_LD0_LLN0_report4 = { &iedModel_LD0_LLN0, 	"BRCB_301", "LLN0$BR$BRCB_301", true, "DS2", 0, TRG_OPT_NO, 111, 3000, 5000, &iedModel_LD0_LLN0_report5};
ReportControlBlock iedModel_LD0_LLN0_report5 = { &iedModel_LD0_LLN0, 	"BRCB_401", "LLN0$BR$BRCB_401", true, "DS3", 0, TRG_OPT_NO, 111, 3000, 5000, &iedModel_LD0_LLN0_report6};
ReportControlBlock iedModel_LD0_LLN0_report6 = { &iedModel_LD0_LLN0, 	"BRCB_501", "LLN0$BR$BRCB_501", true, "DS4", 0, TRG_OPT_NO, 111, 3000, 5000, &iedModel_LD0_LLN0_report7};
ReportControlBlock iedModel_LD0_LLN0_report7 = { &iedModel_LD0_LLN0, 	"BRCB_601", "LLN0$BR$BRCB_601", true, "DS5", 0, TRG_OPT_NO, 111, 3000, 5000, &iedModel_LD0_LLN0_report8};
ReportControlBlock iedModel_LD0_LLN0_report8 = { &iedModel_LD0_LLN0, 	"BRCB_701", "LLN0$BR$BRCB_701", true, "DS6", 0, TRG_OPT_NO, 111, 3000, 5000, &iedModel_LD0_LLN0_report9};
ReportControlBlock iedModel_LD0_LLN0_report9 = { &iedModel_LD0_LLN0, 	"BRCB_771", "LLN0$BR$BRCB_801", true, "DS7", 0, TRG_OPT_NO, 111, 3000, 5000, &iedModel_LD0_LLN0_report10};
ReportControlBlock iedModel_LD0_LLN0_report10 = { &iedModel_LD0_LLN0, 	"BRCB_901", "LLN0$BR$BRCB_901", true, "DS8", 0, TRG_OPT_NO, 111, 3000, 5000, NULL};


static PhyComAddress iedModel_LD0_LLN0_gse0_address = {  4,  1,  4096,  {0x1, 0xc, 0xcd, 0x1, 0x0, 0x1} };
static PhyComAddress iedModel_LD0_LLN0_gse1_address = {  4,  1,  4096,  {0x1, 0xc, 0xcd, 0x1, 0x0, 0x2} };


GSEControlBlock iedModel_LD0_LLN0_gse0 = {
	&iedModel_LD0_LLN0,
	"gcbDiscret",
	"discret",
	"DS0",
	2,
	false,
	&iedModel_LD0_LLN0_gse0_address,
	1000,
	3000,
	&iedModel_LD0_LLN0_gse1
};

GSEControlBlock iedModel_LD0_LLN0_gse1 = {
	&iedModel_LD0_LLN0,
	"gcbAnalog",
	"analog",
	"DS1",
	2,
	false,
	&iedModel_LD0_LLN0_gse1_address,
	-1,
	-1,
	NULL
};

//extern SVControlBlock iedModel_MUnn_LLN0_smv0;
//extern SettingGroupControlBlock iedModel_PROT_LLN0_sgcb;
//
SettingGroupControlBlock iedModel_LD0_LLN0_sgcb0 = {
	&iedModel_LD0_LLN0,		// ��������
	1,						// �������� ������ ��������
	6,						// ����� ����� ��������
	0,						// editSG
	false,					// cnfEdit
	0,						// timestamp
	0,						// resvTms
	NULL					// ��������� � ������
};


/*************************************************************************
 * DataObject_hasFCData
 *
 *************************************************************************/
//__attribute__((__section__(".eb0rodata"))) const  uint8_t NamPlt_vendor[] = "BEMN_qwertyuiopasdfghjkl;zxcvbnm,./";
#define Dir_not		3

static void		initializeValues()
{
	uint64_t currentTime;

USART_TRACE("\n");
USART_TRACE("initializeValues -------------------------------------------\n");

currentTime = Hal_getTimeInMs();

/******************************************************************************
 * LD0
 ******************************************************************************/
iedModel_LD0_LLN0_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_LD0_LLN0_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_LD0_LLN0_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_LD0_LLN0_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_LD0_LLN0_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_LD0_LLN0_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);

iedModel_LD0_LLN0_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_LD0_LLN0_NamPlt_ldNs.mmsValue = MmsValue_newVisibleString(_LDNS);
iedModel_LD0_LLN0_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_LD0_LLN0_NamPlt_d.mmsValue = MmsValue_newVisibleString(_SWRevision);

iedModel_LD0_LPHD1_PhyHealth_stVal.mmsValue = MmsValue_newIntegerFromInt16(1);
iedModel_LD0_LPHD1_PhyNam_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_LD0_LPHD1_Proxy_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_LD0_LPHD1_Proxy_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_LD0_LPHD1_PhyHealth_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_LD0_LPHD1_PhyHealth_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);

//USART_TRACE("LD0_LLN0\n");
/******************************************************************************
 * PROT
 ******************************************************************************/
iedModel_PROT_LLN0_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);				// PROT LLN0
iedModel_PROT_LLN0_Mod_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_LLN0_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);

iedModel_PROT_LLN0_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_PROT_LLN0_Beh_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_LLN0_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);

iedModel_PROT_LLN0_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_PROT_LLN0_Health_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_LLN0_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);

iedModel_PROT_LLN0_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_LLN0_NamPlt_ldNs.mmsValue = MmsValue_newVisibleString(_LDNS);
iedModel_PROT_LLN0_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_LLN0_NamPlt_configRev.mmsValue = MmsValue_newVisibleString("0");

iedModel_PROT_LPHD1_PhyHealth_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);
iedModel_PROT_LPHD1_PhyHealth_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_LPHD1_Proxy_stVal.mmsValue = MmsValue_newBoolean(false);// �� ����� ������
iedModel_PROT_LPHD1_Proxy_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_LPHD1_Proxy_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_LPHD1_PhyNam_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_LPHD1_PhyHealth_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);

// IPTOC1...8
iedModel_PROT_IPTOC1_Mod_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC1_Beh_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC1_Health_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC2_Mod_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC2_Beh_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC2_Health_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC3_Mod_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC3_Beh_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC3_Health_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC4_Mod_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC4_Beh_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC4_Health_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC5_Mod_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC5_Beh_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC5_Health_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC6_Mod_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC6_Beh_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC6_Health_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC7_Mod_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC7_Beh_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC7_Health_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC8_Mod_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC8_Beh_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC8_Health_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_IPTOC1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_IPTOC1_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_IPTOC2_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_IPTOC2_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_IPTOC3_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_IPTOC3_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_IPTOC4_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_IPTOC4_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_IPTOC5_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_IPTOC5_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_IPTOC6_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_IPTOC6_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
// I20PTOC1...6
iedModel_PROT_I20PTOC1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_I20PTOC1_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_I20PTOC2_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_I20PTOC2_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_I20PTOC3_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_I20PTOC3_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_I20PTOC4_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_I20PTOC4_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_I20PTOC5_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_I20PTOC5_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_I20PTOC6_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_I20PTOC6_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_I20PTOC7_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_I20PTOC7_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_I20PTOC8_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_I20PTOC8_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
// UPTOV1...4
iedModel_PROT_UPTOV1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_UPTOV1_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_UPTOV2_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_UPTOV2_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_UPTOV3_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_UPTOV3_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_UPTOV4_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_UPTOV4_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);

iedModel_PROT_UPTOV1_Str_dirGeneral.mmsValue = MmsValue_newIntegerFromInt16(Dir_not);
iedModel_PROT_UPTOV2_Str_dirGeneral.mmsValue = MmsValue_newIntegerFromInt16(Dir_not);
iedModel_PROT_UPTOV3_Str_dirGeneral.mmsValue = MmsValue_newIntegerFromInt16(Dir_not);
iedModel_PROT_UPTOV4_Str_dirGeneral.mmsValue = MmsValue_newIntegerFromInt16(Dir_not);

// UPTOV1...4
iedModel_PROT_UPTUV1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_UPTUV1_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_UPTUV2_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_UPTUV2_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_UPTUV3_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_UPTUV3_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_UPTUV4_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_UPTUV4_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);

iedModel_PROT_UPTUV1_Str_dirGeneral.mmsValue = MmsValue_newIntegerFromInt16(Dir_not);
iedModel_PROT_UPTUV2_Str_dirGeneral.mmsValue = MmsValue_newIntegerFromInt16(Dir_not);
iedModel_PROT_UPTUV3_Str_dirGeneral.mmsValue = MmsValue_newIntegerFromInt16(Dir_not);
iedModel_PROT_UPTUV4_Str_dirGeneral.mmsValue = MmsValue_newIntegerFromInt16(Dir_not);

// PTOF1...4
iedModel_PROT_PTOF1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_PTOF1_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_PTOF2_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_PTOF2_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_PTOF3_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_PTOF3_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_PTOF4_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_PTOF4_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);

iedModel_PROT_PTOF1_Str_dirGeneral.mmsValue = MmsValue_newIntegerFromInt16(Dir_not);
iedModel_PROT_PTOF2_Str_dirGeneral.mmsValue = MmsValue_newIntegerFromInt16(Dir_not);
iedModel_PROT_PTOF3_Str_dirGeneral.mmsValue = MmsValue_newIntegerFromInt16(Dir_not);
iedModel_PROT_PTOF4_Str_dirGeneral.mmsValue = MmsValue_newIntegerFromInt16(Dir_not);

// PTUF1...4
iedModel_PROT_PTUF1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_PTUF1_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_PTUF2_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_PTUF2_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_PTUF3_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_PTUF3_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_PTUF4_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_PTUF4_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);

iedModel_PROT_PTUF1_Str_dirGeneral.mmsValue = MmsValue_newIntegerFromInt16(Dir_not);
iedModel_PROT_PTUF2_Str_dirGeneral.mmsValue = MmsValue_newIntegerFromInt16(Dir_not);
iedModel_PROT_PTUF3_Str_dirGeneral.mmsValue = MmsValue_newIntegerFromInt16(Dir_not);
iedModel_PROT_PTUF4_Str_dirGeneral.mmsValue = MmsValue_newIntegerFromInt16(Dir_not);

//VZGGIO
iedModel_PROT_VZGGIO1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_VZGGIO1_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_VZGGIO2_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_VZGGIO2_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_VZGGIO3_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_VZGGIO3_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_VZGGIO4_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_VZGGIO4_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_VZGGIO5_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_VZGGIO5_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_VZGGIO6_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_VZGGIO6_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_VZGGIO7_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_VZGGIO7_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_VZGGIO8_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_VZGGIO8_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_VZGGIO9_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_VZGGIO9_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_VZGGIO10_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_VZGGIO10_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_VZGGIO11_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_VZGGIO11_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_VZGGIO12_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_VZGGIO12_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_VZGGIO13_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_VZGGIO13_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_VZGGIO14_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_VZGGIO14_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_VZGGIO15_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_VZGGIO15_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_PROT_VZGGIO16_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_VZGGIO16_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);

iedModel_PROT_VZGGIO1_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_VZGGIO2_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_VZGGIO3_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_VZGGIO4_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_VZGGIO5_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_VZGGIO6_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_VZGGIO7_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_VZGGIO8_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_VZGGIO9_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_VZGGIO10_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_VZGGIO11_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_VZGGIO12_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_VZGGIO13_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_VZGGIO14_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_VZGGIO15_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_VZGGIO16_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_VZGGIO1_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_PROT_VZGGIO2_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_PROT_VZGGIO3_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_PROT_VZGGIO4_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_PROT_VZGGIO5_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_PROT_VZGGIO6_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_PROT_VZGGIO7_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_PROT_VZGGIO8_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_PROT_VZGGIO9_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_PROT_VZGGIO10_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_PROT_VZGGIO11_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_PROT_VZGGIO12_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_PROT_VZGGIO13_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_PROT_VZGGIO14_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_PROT_VZGGIO15_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_PROT_VZGGIO16_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);

//RREC1
iedModel_PROT_RREC1_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_PROT_RREC1_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_RREC1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_PROT_RREC1_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);

//RBRF1
iedModel_PROT_RBRF1_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_PROT_RBRF1_Mod_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_RBRF1_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_RBRF1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_PROT_RBRF1_Beh_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_RBRF1_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
/*
//RBRF2
iedModel_PROT_RBRF2_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_PROT_RBRF2_Mod_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_RBRF2_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_RBRF2_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_PROT_RBRF2_Beh_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_RBRF2_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
//BLKRBRF
iedModel_PROT_BLKRBRF_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_PROT_BLKRBRF_Mod_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_BLKRBRF_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_PROT_BLKRBRF_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_PROT_BLKRBRF_Beh_q.mmsValue = MmsValue_newBitString(0);
iedModel_PROT_BLKRBRF_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
*/
//USART_TRACE("PROT\n");
/******************************************************************************
 * CTRL
 ******************************************************************************/
iedModel_CTRL_LLN0_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_CTRL_LLN0_Mod_q.mmsValue = MmsValue_newBitString(0);
iedModel_CTRL_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(CTLMODELEDENUM_statusOnly);
iedModel_CTRL_LLN0_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_CTRL_LLN0_Beh_q.mmsValue = MmsValue_newBitString(0);
iedModel_CTRL_LLN0_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_CTRL_LLN0_Health_q.mmsValue = MmsValue_newBitString(0);
iedModel_CTRL_LLN0_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_CTRL_LLN0_NamPlt_ldNs.mmsValue = MmsValue_newVisibleString(_LDNS);
iedModel_CTRL_LLN0_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
//USART_TRACE("CTRL_LLN0\n");

iedModel_CTRL_LPHD1_PhyHealth_stVal.mmsValue = MmsValue_newIntegerFromInt32(STVALINT32_OK);
iedModel_CTRL_LPHD1_PhyHealth_q.mmsValue = MmsValue_newBitString(0);
iedModel_CTRL_LPHD1_Proxy_stVal.mmsValue = MmsValue_newBoolean(false);					// �� ����� ������
iedModel_CTRL_LPHD1_Proxy_q.mmsValue = MmsValue_newBitString(0);
iedModel_CTRL_LPHD1_PhyNam_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
//USART_TRACE("CTRL_LPHD1\n");

iedModel_CTRL_LLN0_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_CTRL_LLN0_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_CTRL_LLN0_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);

iedModel_CTRL_LPHD1_PhyHealth_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_CTRL_LPHD1_Proxy_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);


//CSWI1 --------------------------------------------------------------------------------
iedModel_CTRL_CSWI1_Mod_q.mmsValue = MmsValue_newBitString(0);
iedModel_CTRL_CSWI1_Beh_q.mmsValue = MmsValue_newBitString(0);
iedModel_CTRL_CSWI1_Pos_q.mmsValue = MmsValue_newBitString(0);
iedModel_CTRL_CSWI1_Health_q.mmsValue = MmsValue_newBitString(0);
iedModel_CTRL_CSWI1_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_CTRL_CSWI1_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_CTRL_CSWI1_Pos_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_CTRL_CSWI1_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);

iedModel_CTRL_CSWI1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_CTRL_CSWI1_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);

//USART_TRACE("CTRL_CSWI1\n");
//PTRC --------------------------------------------------------------------------------
iedModel_CTRL_PTRC_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_CTRL_PTRC_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_CTRL_PTRC_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);

iedModel_CTRL_PTRC_Op_q.mmsValue = MmsValue_newBitString(QUALITY_DETAIL_OLD_DATA);
iedModel_CTRL_PTRC_Mod_q.mmsValue = MmsValue_newBitString(0);
iedModel_CTRL_PTRC_Beh_q.mmsValue = MmsValue_newBitString(0);
iedModel_CTRL_PTRC_Health_q.mmsValue = MmsValue_newBitString(0);

iedModel_CTRL_PTRC_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_CTRL_PTRC_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_CTRL_PTRC_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);

iedModel_CTRL_PTRC_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_CTRL_PTRC_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);

//USART_TRACE("CTRL_PTRC\n");
//XCBR1 --------------------------------------------------------------------------------
iedModel_CTRL_XCBR1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(CTLMODELEDENUM_statusOnly);
iedModel_CTRL_XCBR1_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_CTRL_XCBR1_Mod_q.mmsValue = MmsValue_newBitString(0);
iedModel_CTRL_XCBR1_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
//USART_TRACE("CTRL_XCBR1_Mod\n");

iedModel_CTRL_XCBR1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_CTRL_XCBR1_Beh_q.mmsValue = MmsValue_newBitString(0);
iedModel_CTRL_XCBR1_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
//USART_TRACE("CTRL_XCBR1_Beh\n");

iedModel_CTRL_XCBR1_Pos_ctlModel.mmsValue = MmsValue_newIntegerFromInt16(CTLMODELEDENUM_statusOnly);
iedModel_CTRL_XCBR1_Pos_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
//USART_TRACE("CTRL_XCBR1_Pos\n");

iedModel_CTRL_XCBR1_Loc_stVal.mmsValue = MmsValue_newBoolean(true);
iedModel_CTRL_XCBR1_Loc_q.mmsValue = MmsValue_newBitString(0);
iedModel_CTRL_XCBR1_Loc_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
//USART_TRACE("CTRL_XCBR1_Loc\n");

iedModel_CTRL_XCBR1_BlkOpn_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(CTLMODELEDENUM_statusOnly);
iedModel_CTRL_XCBR1_BlkOpn_stVal.mmsValue = MmsValue_newIntegerFromInt16(0);
iedModel_CTRL_XCBR1_BlkOpn_q.mmsValue = MmsValue_newBitString(0);
iedModel_CTRL_XCBR1_BlkOpn_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);


iedModel_CTRL_XCBR1_BlkCls_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(CTLMODELEDENUM_statusOnly);
iedModel_CTRL_XCBR1_BlkCls_q.mmsValue = MmsValue_newBitString(0);
iedModel_CTRL_XCBR1_BlkCls_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);


iedModel_CTRL_XCBR1_CBOpCap_stVal.mmsValue = MmsValue_newIntegerFromInt32(0);
iedModel_CTRL_XCBR1_CBOpCap_q.mmsValue = MmsValue_newBitString(0);
iedModel_CTRL_XCBR1_CBOpCap_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);

iedModel_CTRL_XCBR1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_CTRL_XCBR1_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);

//GGIO1 --------------------------------------------------------------------------------
iedModel_CTRL_GGIO1_SPCSO1_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(CTLMODELEDENUM_DirectWithNormalSecurity);
iedModel_CTRL_GGIO1_SPCSO2_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(CTLMODELEDENUM_DirectWithNormalSecurity);
iedModel_CTRL_GGIO1_SPCSO3_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(CTLMODELEDENUM_DirectWithNormalSecurity);
iedModel_CTRL_GGIO1_SPCSO1_d.mmsValue = MmsValue_newVisibleString("Reset the new fault flag");//����� ����� ����� �������������
iedModel_CTRL_GGIO1_SPCSO2_d.mmsValue = MmsValue_newVisibleString("Reset the flag of the new record in the system log");//����� ����� ����� ������ � ������� �������
iedModel_CTRL_GGIO1_SPCSO3_d.mmsValue = MmsValue_newVisibleString("Reset the flag of the new record in the alarm log");//����� ����� ����� ������ � ������� ������

//USART_TRACE("CTRL_GGIO1\n");
/******************************************************************************
 * GGIO
 ******************************************************************************/
iedModel_GGIO_LLN0_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_GGIO_LLN0_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_GGIO_LLN0_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_GGIO_LLN0_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_GGIO_LLN0_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_GGIO_LLN0_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);

iedModel_GGIO_LLN0_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_GGIO_LLN0_NamPlt_ldNs.mmsValue = MmsValue_newVisibleString(_LDNS);
iedModel_GGIO_LLN0_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_GGIO_LLN0_NamPlt_d.mmsValue = MmsValue_newVisibleString(_SWRevision);

iedModel_GGIO_LPHD1_PhyHealth_stVal.mmsValue = MmsValue_newIntegerFromInt16(1);
iedModel_GGIO_LPHD1_PhyNam_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_GGIO_LPHD1_Proxy_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_GGIO_LPHD1_Proxy_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_GGIO_LPHD1_PhyHealth_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_GGIO_LPHD1_PhyHealth_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);

//INGGIO1
iedModel_GGIO_INGGIO1_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_GGIO_INGGIO1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_GGIO_INGGIO1_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);

iedModel_GGIO_INGGIO1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(CTLMODELEDENUM_statusOnly);
iedModel_GGIO_INGGIO1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_GGIO_INGGIO1_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);

//OUTGGIO1
iedModel_GGIO_OUTGGIO1_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_GGIO_OUTGGIO1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_GGIO_OUTGGIO1_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);

iedModel_GGIO_OUTGGIO1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(CTLMODELEDENUM_statusOnly);
iedModel_GGIO_OUTGGIO1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_GGIO_OUTGGIO1_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);

//LEDGGIO1
iedModel_GGIO_LEDGGIO1_SPCSO1_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(CTLMODELEDENUM_DirectWithNormalSecurity);

iedModel_GGIO_LEDGGIO1_SPCSO1_d.mmsValue = MmsValue_newVisibleString("Resetting the LEDs");//����� ���������

iedModel_GGIO_LEDGGIO1_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt32(STVALINT32_OK);
iedModel_GGIO_LEDGGIO1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(STVALINT32_OK);
iedModel_GGIO_LEDGGIO1_Health_stVal.mmsValue = MmsValue_newIntegerFromInt32(STVALINT32_OK);

iedModel_GGIO_LEDGGIO1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_GGIO_LEDGGIO1_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_GGIO_LEDGGIO1_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_GGIO_LEDGGIO1_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_GGIO_LEDGGIO1_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
IedServer_updateQuality(iedServer,&iedModel_GGIO_LEDGGIO1_Mod_q,0);
IedServer_updateQuality(iedServer,&iedModel_GGIO_LEDGGIO1_Beh_q,0);
IedServer_updateQuality(iedServer,&iedModel_GGIO_LEDGGIO1_Health_q,0);

//SSL
iedModel_GGIO_SSLGGIO1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_GGIO_SSLGGIO1_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
//VLS
iedModel_GGIO_VLSGGIO1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_GGIO_VLSGGIO1_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
//LS
iedModel_GGIO_LSGGIO1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_GGIO_LSGGIO1_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);

/******************************************************************************
 * MES
 ******************************************************************************/
// MES LLN0
iedModel_MES_LLN0_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt32(STVALINT32_OK);
iedModel_MES_LLN0_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(STVALINT32_OK);
iedModel_MES_LLN0_Health_stVal.mmsValue = MmsValue_newIntegerFromInt32(STVALINT32_OK);
iedModel_MES_LLN0_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_LLN0_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_LLN0_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);

iedModel_MES_LLN0_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_MES_LLN0_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
iedModel_MES_LLN0_NamPlt_ldNs.mmsValue = MmsValue_newVisibleString(_LDNS);

iedModel_MES_LPHD1_Proxy_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_MES_LPHD1_Proxy_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_LPHD1_PhyHealth_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_ON);
iedModel_MES_LPHD1_PhyHealth_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);


//MMXU1
iedModel_MES_MMXU1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(CTLMODELEDENUM_DirectWithNormalSecurity);
iedModel_MES_MMXU1_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_MES_MMXU1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_MES_MMXU1_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
IedServer_updateQuality(iedServer,&iedModel_MES_MMXU1_Mod_q,0);
IedServer_updateQuality(iedServer,&iedModel_MES_MMXU1_Beh_q,0);
IedServer_updateQuality(iedServer,&iedModel_MES_MMXU1_Health_q,0);
iedModel_MES_MMXU1_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MMXU1_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MMXU1_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MMXU1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_MES_MMXU1_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
/*
//MMXU2
iedModel_MES_MMXU2_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(CTLMODELEDENUM_DirectWithNormalSecurity);
iedModel_MES_MMXU2_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_MES_MMXU2_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_MES_MMXU2_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
IedServer_updateQuality(iedServer,&iedModel_MES_MMXU2_Mod_q,0);
IedServer_updateQuality(iedServer,&iedModel_MES_MMXU2_Beh_q,0);
IedServer_updateQuality(iedServer,&iedModel_MES_MMXU2_Health_q,0);
iedModel_MES_MMXU2_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MMXU2_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MMXU2_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MMXU2_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_MES_MMXU2_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);

//MMXU3
iedModel_MES_MMXU3_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(CTLMODELEDENUM_DirectWithNormalSecurity);
iedModel_MES_MMXU3_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_MES_MMXU3_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_MES_MMXU3_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
IedServer_updateQuality(iedServer,&iedModel_MES_MMXU3_Mod_q,0);
IedServer_updateQuality(iedServer,&iedModel_MES_MMXU3_Beh_q,0);
IedServer_updateQuality(iedServer,&iedModel_MES_MMXU3_Health_q,0);
iedModel_MES_MMXU3_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MMXU3_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MMXU3_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MMXU3_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_MES_MMXU3_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);

//MMXU4
iedModel_MES_MMXU4_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(CTLMODELEDENUM_DirectWithNormalSecurity);
iedModel_MES_MMXU4_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_MES_MMXU4_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_MES_MMXU4_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
IedServer_updateQuality(iedServer,&iedModel_MES_MMXU4_Mod_q,0);
IedServer_updateQuality(iedServer,&iedModel_MES_MMXU4_Beh_q,0);
IedServer_updateQuality(iedServer,&iedModel_MES_MMXU4_Health_q,0);
iedModel_MES_MMXU4_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MMXU4_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MMXU4_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MMXU4_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_MES_MMXU4_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
*/
//MSQI1
iedModel_MES_MSQI1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(CTLMODELEDENUM_DirectWithNormalSecurity);
iedModel_MES_MSQI1_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_MES_MSQI1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_MES_MSQI1_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
IedServer_updateQuality(iedServer,&iedModel_MES_MSQI1_Mod_q,0);
IedServer_updateQuality(iedServer,&iedModel_MES_MSQI1_Beh_q,0);
IedServer_updateQuality(iedServer,&iedModel_MES_MSQI1_Health_q,0);
iedModel_MES_MSQI1_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MSQI1_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MSQI1_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MSQI1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_MES_MSQI1_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
/*
//MSQI2
iedModel_MES_MSQI2_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(CTLMODELEDENUM_DirectWithNormalSecurity);
iedModel_MES_MSQI2_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_MES_MSQI2_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_MES_MSQI2_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
IedServer_updateQuality(iedServer,&iedModel_MES_MSQI2_Mod_q,0);
IedServer_updateQuality(iedServer,&iedModel_MES_MSQI2_Beh_q,0);
IedServer_updateQuality(iedServer,&iedModel_MES_MSQI2_Health_q,0);
iedModel_MES_MSQI2_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MSQI2_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MSQI2_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MSQI2_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_MES_MSQI2_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);

//MSQI3
iedModel_MES_MSQI3_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(CTLMODELEDENUM_DirectWithNormalSecurity);
iedModel_MES_MSQI3_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_MES_MSQI3_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_MES_MSQI3_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
IedServer_updateQuality(iedServer,&iedModel_MES_MSQI3_Mod_q,0);
IedServer_updateQuality(iedServer,&iedModel_MES_MSQI3_Beh_q,0);
IedServer_updateQuality(iedServer,&iedModel_MES_MSQI3_Health_q,0);
iedModel_MES_MSQI3_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MSQI3_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MSQI3_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MSQI3_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_MES_MSQI3_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);

//MSQI4
iedModel_MES_MSQI4_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(CTLMODELEDENUM_DirectWithNormalSecurity);
iedModel_MES_MSQI4_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_MES_MSQI4_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
iedModel_MES_MSQI4_Health_stVal.mmsValue = MmsValue_newIntegerFromInt16(STVALINT32_OK);
IedServer_updateQuality(iedServer,&iedModel_MES_MSQI4_Mod_q,0);
IedServer_updateQuality(iedServer,&iedModel_MES_MSQI4_Beh_q,0);
IedServer_updateQuality(iedServer,&iedModel_MES_MSQI4_Health_q,0);
iedModel_MES_MSQI4_Mod_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MSQI4_Beh_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MSQI4_Health_t.mmsValue = MmsValue_newUtcTimeByMsTime(currentTime);
iedModel_MES_MSQI4_NamPlt_vendor.mmsValue = MmsValue_newVisibleString(_Vendor);
iedModel_MES_MSQI4_NamPlt_swRev.mmsValue = MmsValue_newVisibleString(_swREV);
*/

USART_TRACE("------------------------------------------------------------\n");
}

#endif
