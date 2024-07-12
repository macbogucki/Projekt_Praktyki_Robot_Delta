/* Automation Studio generated header file */
/* Do not edit ! */
/* McPathGen 5.24.1 */

#ifndef _MCPATHGEN_
#define _MCPATHGEN_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _McPathGen_VERSION
#define _McPathGen_VERSION 5.24.1
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif

#ifdef _SG4
#include <McBase.h> 
#include <McAxis.h> 
#include <McAxGroup.h>
#endif
 
#ifdef _SG3
#include <McBase.h> 
#include <McAxis.h> 
#include <McAxGroup.h>
#endif
 
#ifdef _SGC
#include <McBase.h> 
#include <McAxis.h> 
#include <McAxGroup.h>
#endif

/* Datatypes and datatypes of function blocks */
typedef enum McPathGenDynModIdentModeEnum
{	mcPATHGEN_DMI_NO_FILE_OVR10,
	mcPATHGEN_DMI_NO_FILE_OVR50,
	mcPATHGEN_DMI_IDENTIFY
} McPathGenDynModIdentModeEnum;

typedef enum McPathGenDynModIdentPhaseEnum
{	mcPATHGEN_DMI_INACTIVE,
	mcPATHGEN_DMI_READ_DATA,
	mcPATHGEN_DMI_MOVE_TO_STARTPOS,
	mcPATHGEN_DMI_AT_STARTPOS,
	mcPATHGEN_DMI_IDENTIFICATION,
	mcPATHGEN_DMI_CREATE_REPORT
} McPathGenDynModIdentPhaseEnum;

typedef enum McPathGenCusMechStatusEnum
{	mcPATHGEN_CUSMECH_SUCCESS,
	mcPATHGEN_CUSMECH_INFO,
	mcPATHGEN_CUSMECH_WARNING,
	mcPATHGEN_CUSMECH_ERROR
} McPathGenCusMechStatusEnum;

typedef enum McPathGenMonElemFeedCharEnum
{	mcPATHGEN_FCH_STANDARD,
	mcPATHGEN_FCH_LINEAR
} McPathGenMonElemFeedCharEnum;

typedef enum McPathGenMonElemFeedTypeEnum
{	mcPATHGEN_FT_FEEDRATE,
	mcPATHGEN_FT_INVERSETIMEFEEDRATE,
	mcPATHGEN_FT_FEEDRATEPERREV
} McPathGenMonElemFeedTypeEnum;

typedef enum McPathGenMonElemFeedReductEnum
{	mcPATHGEN_FR_INACTIVE,
	mcPATHGEN_FR_ACTIVE
} McPathGenMonElemFeedReductEnum;

typedef enum McPathGenTrackingStateEnum
{	mcPATHGEN_TS_NO_TRACKING = 0,
	mcPATHGEN_TS_SYNCHRONIZING = 1,
	mcPATHGEN_TS_SYNCHRONIZED = 2,
	mcPATHGEN_TS_DESYNCHRONIZING = 3
} McPathGenTrackingStateEnum;

typedef enum McPathGenTrackedObjTypeEnum
{	mcPATHGEN_TS_NO_OBJECT = 0,
	mcPATHGEN_TS_TRACKING_PATH = 1,
	mcPATHGEN_TS_AXES_GROUP = 2,
	mcPATHGEN_TS_TRAK = 3
} McPathGenTrackedObjTypeEnum;

typedef enum McAGPGSubtEnum
{	mcAGPGS_GEN = 0,
	mcAGPGS_ABB_ROB = 1
} McAGPGSubtEnum;

typedef enum McAGPGLicEnum
{	mcAGPGL_SNG = 0,
	mcAGPGL_FLT = 1
} McAGPGLicEnum;

typedef enum McAGPGPASASAPADEnum
{	mcAGPGPASASAPAD_DEF = 8,
	mcAGPGPASASAPAD_SHORT_WAY = 3
} McAGPGPASASAPADEnum;

typedef enum McAGPGModalDatBxEnum
{	mcCAGPGMDB_RST_TO_DEF = 0,
	mcCAGPGMDB_KEEP_CUR_VAL = 1
} McAGPGModalDatBxEnum;

typedef enum McAGPGGeoPlanRndSymRndEnum
{	mcAGPGGPRSR_YES = 1,
	mcAGPGGPRSR_NO = 0
} McAGPGGeoPlanRndSymRndEnum;

typedef enum McAGPGGeoPlanRndLatSegEnum
{	mcAGPGGPRLS_WHOLE = 1,
	mcAGPGGPRLS_HALF = 0
} McAGPGGeoPlanRndLatSegEnum;

typedef enum McAGPGGeoPlanRndAvoidZeroCrvEnum
{	mcAGPGGPRAZC_YES = 1,
	mcAGPGGPRAZC_NO = 0
} McAGPGGeoPlanRndAvoidZeroCrvEnum;

typedef enum McAGPGGeoPlanRndModEnum
{	mcAGPGGPRM_STD = 0,
	mcAGPGGPRM_ADV = 1
} McAGPGGeoPlanRndModEnum;

typedef enum McAGPGGeoPlanWrkPlEnum
{	mcAGPGGPWP_PL_XY = 0,
	mcAGPGGPWP_PL_YZ = 1,
	mcAGPGGPWP_PL_ZX = 2
} McAGPGGeoPlanWrkPlEnum;

typedef enum McAGPGTrajPlanEnum
{	mcAGPGTP_BASIC = 0
} McAGPGTrajPlanEnum;

typedef enum McAGPGTPBLimCkResEnum
{	mcAGPGTPBLCR_USR_DEF = 0,
	mcAGPGTPBLCR_AUT = 1
} McAGPGTPBLimCkResEnum;

typedef enum McAGPGTPBBuffTimeEnum
{	mcAGPGTPBBT_USR_DEF = 0,
	mcAGPGTPBBT_AUT = 1
} McAGPGTPBBuffTimeEnum;

typedef enum McAGPGTPBBarrParEnum
{	mcAGPGTPBBP_JNT_COOR = 0,
	mcAGPGTPBBP_TCP_COOR = 1
} McAGPGTPBBarrParEnum;

typedef enum McAGPGMiscNonMoveLimEnum
{	mcAGPGMNML_NOT_USE = 0,
	mcAGPGMNML_USE = 1
} McAGPGMiscNonMoveLimEnum;

typedef enum McAGPGMNMLUADEnum
{	mcAGPGMNMLUAD_DELAYED_EXE = 0
} McAGPGMNMLUADEnum;

typedef enum McAGPGMTSOJerkSupEnum
{	mcAGPGMTSOJS_NOT_USE = 0,
	mcAGPGMTSOJS_BASIC = 1,
	mcAGPGMTSOJS_AUT = 2
} McAGPGMTSOJerkSupEnum;

typedef enum McAGFPRGIPSIntrplTypEnum
{	mcAGFPRGIPSIT_RPD_LIN = 0,
	mcAGFPRGIPSIT_LIN = 1,
	mcAGFPRGIPSIT_CIR_CW = 2,
	mcAGFPRGIPSIT_CIR_CNTCW = 3,
	mcAGFPRGIPSIT_CIR_IN_GEN_ORIENT = 4,
	mcAGFPRGIPSIT_RPD_PTTOPT = 5,
	mcAGFPRGIPSIT_PTTOPT = 6
} McAGFPRGIPSIntrplTypEnum;

typedef enum McAGFPRGIPSAbsRelPosCoorEnum
{	mcAGFPRGIPSARPC_ABS = 0,
	mcAGFPRGIPSARPC_REL = 1
} McAGFPRGIPSAbsRelPosCoorEnum;

typedef enum McAGFPRGIPSAbsRelCirCoorEnum
{	mcAGFPRGIPSARCC_ABS = 0,
	mcAGFPRGIPSARCC_REL = 1
} McAGFPRGIPSAbsRelCirCoorEnum;

typedef enum McAGFPRGIPSJACSACSPrgEnum
{	mcAGFPRGIPSJAP_JACS = 0,
	mcAGFPRGIPSJAP_ACS = 1
} McAGFPRGIPSJACSACSPrgEnum;

typedef enum McAGFPRGIPSCtrCxnEnum
{	mcAGFPRGIPSCC_INACT = 0,
	mcAGFPRGIPSCC_TAN_ARC = 1,
	mcAGFPRGIPSCC_CH = 2
} McAGFPRGIPSCtrCxnEnum;

typedef enum McAGFPRGIPSCtrCxnChChSpecEnum
{	mcAGFPRGIPSCCCCS_CH_LEN = 0,
	mcAGFPRGIPSCCCCS_SHORT_PATH = 1
} McAGFPRGIPSCtrCxnChChSpecEnum;

typedef enum McAGFPRGIPSPrgUnitEnum
{	mcAGFPRGIPSPU_USE_AXESGROUP_SET = 0,
	mcAGFPRGIPSPU_INCH = 1,
	mcAGFPRGIPSPU_MILL = 2
} McAGFPRGIPSPrgUnitEnum;

typedef enum McAGFPRGIPSFSetFPathEnum
{	mcAGFPRGIPSFSFP_STD = 0,
	mcAGFPRGIPSFSFP_CUS_F_PATH = 1
} McAGFPRGIPSFSetFPathEnum;

typedef enum McAGFPRGIPSFSetFChEnum
{	mcAGFPRGIPSFSFC_STD = 0,
	mcAGFPRGIPSFSFC_LIN = 1
} McAGFPRGIPSFSetFChEnum;

typedef enum McAGFPRGIPSFSetFTypEnum
{	mcAGFPRGIPSFSFT_F_RATE = 0,
	mcAGFPRGIPSFSFT_INVTIME_F_RATE = 1,
	mcAGFPRGIPSFSFT_F_RATE_PER_REV = 2
} McAGFPRGIPSFSetFTypEnum;

typedef enum McAGFPRGIPSFSetFRedEnum
{	mcAGFPRGIPSFSFR_INACT = 0,
	mcAGFPRGIPSFSFR_ACT = 1
} McAGFPRGIPSFSetFRedEnum;

typedef enum McAGFPRGDLEnum
{	mcAGFPRGDL_GC_BR = 0,
	mcAGFPRGDL_GC_ALT1 = 1,
	mcAGFPRGDL_STRUC_TXT = 2,
	mcAGFPRGDL_MOT_PKT_LOG = 3,
	mcAGFPRGDL_CUS_LANG_1 = 4
} McAGFPRGDLEnum;

typedef enum McAGFPRGLEnum
{	mcAGFPRGL_DEF = 0,
	mcAGFPRGL_USR = 1
} McAGFPRGLEnum;

typedef enum McAGFPRGPEPVAdvSynEnum
{	mcAGFPRGPEPVAS_IPSYN = 0,
	mcAGFPRGPEPVAS_PATHSYN = 1
} McAGFPRGPEPVAdvSynEnum;

typedef enum McAGFPRGPEPVAdvRefEnum
{	mcAGFPRGPEPVAR_NO = 0,
	mcAGFPRGPEPVAR_YES = 1
} McAGFPRGPEPVAdvRefEnum;

typedef enum McAGFPRGPEIVAdvSynEnum
{	mcAGFPRGPEIVAS_IPSYN = 0,
	mcAGFPRGPEIVAS_PATHSYN = 1
} McAGFPRGPEIVAdvSynEnum;

typedef enum McAGFPRGPEIVAdvConstEnum
{	mcAGFPRGPEIVAC_NO = 0,
	mcAGFPRGPEIVAC_YES = 1
} McAGFPRGPEIVAdvConstEnum;

typedef enum McAGFPRGPEFUNAdvSynEnum
{	mcAGFPRGPEFUNAS_IPSYN = 0,
	mcAGFPRGPEFUNAS_PATHSYN = 1
} McAGFPRGPEFUNAdvSynEnum;

typedef enum McAGFPRGPEFUNAdvExeInSimEnum
{	mcAGFPRGPEFUNAEIS_NO = 0,
	mcAGFPRGPEFUNAEIS_YES = 1
} McAGFPRGPEFUNAdvExeInSimEnum;

typedef enum McAGFPRGPEFUNAdvReturnRefEnum
{	mcAGFPRGPEFUNARR_NO = 0,
	mcAGFPRGPEFUNARR_YES = 1
} McAGFPRGPEFUNAdvReturnRefEnum;

typedef enum McAGFPRGPEFUNArgRefEnum
{	mcAGFPRGPEFUNAR_NO = 0,
	mcAGFPRGPEFUNAR_YES = 1
} McAGFPRGPEFUNArgRefEnum;

typedef enum McAGFPRGPEFBIAdvSynEnum
{	mcAGFPRGPEFBIAS_IPSYN = 0,
	mcAGFPRGPEFBIAS_PATHSYN = 1
} McAGFPRGPEFBIAdvSynEnum;

typedef enum McAGFPRGPEFBIAdvBlkEnum
{	mcAGFPRGPEFBIAB_NO = 0,
	mcAGFPRGPEFBIAB_YES = 1
} McAGFPRGPEFBIAdvBlkEnum;

typedef enum McAGFPRGPEPPSRIsPatEnum
{	mcAGFPRGPEPPSRIP_NO = 0,
	mcAGFPRGPEPPSRIP_YES = 1
} McAGFPRGPEPPSRIsPatEnum;

typedef enum McAGFFFFwdModEnum
{	mcAGFFFFM_COMP_AND_TRANS = 0,
	mcAGFFFFM_DIS = 1,
	mcAGFFFFM_COMP = 2
} McAGFFFFwdModEnum;

typedef enum McAGFFParIdentEnum
{	mcAGFFPI_NOT_USE = 0,
	mcAGFFPI_USE = 1
} McAGFFParIdentEnum;

typedef enum McAGFFFFwdFltrEnum
{	mcAGFFFFF_NOT_USE = 0,
	mcAGFFFFF_USE_JERK_TIME = 1
} McAGFFFFwdFltrEnum;

typedef enum McAGFFHCFTypeEnum
{	mcAGFFHCFT_STD_FRM = 0,
	mcAGFFHCFT_FRM_TBL_FRM = 1,
	mcAGFFHCFT_PRG_MOVE_FRM = 2
} McAGFFHCFTypeEnum;

typedef enum McAGFFHCFTPMFMoveTypEnum
{	mcAGFFHCFTPMFMT_TRANS_X = 0,
	mcAGFFHCFTPMFMT_TRANS_Y = 1,
	mcAGFFHCFTPMFMT_TRANS_Z = 2,
	mcAGFFHCFTPMFMT_ROT_X = 3,
	mcAGFFHCFTPMFMT_ROT_Y = 4,
	mcAGFFHCFTPMFMT_ROT_Z = 5
} McAGFFHCFTPMFMoveTypEnum;

typedef enum McAGFMFunIdxTypEnum
{	mcAGFMFIT_SNG = 0,
	mcAGFMFIT_RNG = 1
} McAGFMFunIdxTypEnum;

typedef enum McAGFMFunBlkEnum
{	mcAGFMFB_EN = 0,
	mcAGFMFB_DIS = 1
} McAGFMFunBlkEnum;

typedef enum McAGFMFunOutEnum
{	mcAGFMFO_B4 = 0,
	mcAGFMFO_A = 1
} McAGFMFunOutEnum;

typedef enum McAGFMFunInSimEnum
{	mcAGFMFIS_NOT_USE = 0,
	mcAGFMFIS_SET = 1
} McAGFMFunInSimEnum;

typedef enum McAGFPDPathTypEnum
{	mcAGFPDPT_CART_PATH = 0,
	mcAGFPDPT_ORIENT_PATH = 1,
	mcAGFPDPT_PHS_AX_PATH = 2,
	mcAGFPDPT_CUS_PHS_AX_PATH = 3
} McAGFPDPathTypEnum;

typedef enum McAGFPDCalcInEnum
{	mcAGFPDCI_MCS = 0,
	mcAGFPDCI_PCS = 1,
	mcAGFPDCI_SEL_BY_NAME = 2
} McAGFPDCalcInEnum;

typedef enum McAGFPDPathLimEnum
{	mcAGFPDPL_INT = 0,
	mcAGFPDPL_EXT = 1
} McAGFPDPathLimEnum;

typedef enum McAGFPDPathLimIntVelEnum
{	mcAGFPDPLIV_NOT_USE = 0,
	mcAGFPDPLIV_BASIC = 1
} McAGFPDPathLimIntVelEnum;

typedef enum McAGFPDPathLimIntAccEnum
{	mcAGFPDPLIA_NOT_USE = 0,
	mcAGFPDPLIA_BASIC = 1
} McAGFPDPathLimIntAccEnum;

typedef enum McAGFPDPathLimIntDecEnum
{	mcAGFPDPLID_NOT_USE = 0,
	mcAGFPDPLID_BASIC = 1
} McAGFPDPathLimIntDecEnum;

typedef enum McAGFPDPathLimIntJerkEnum
{	mcAGFPDPLIJ_NOT_USE = 0,
	mcAGFPDPLIJ_BASIC = 1
} McAGFPDPathLimIntJerkEnum;

typedef enum McAGFTToolEnum
{	mcAGFTT_TOOL_TBL = 0,
	mcAGFTT_SNG_TOOL = 1
} McAGFTToolEnum;

typedef enum McAGFWSelfColDetectEnum
{	mcAGFWSCD_NOT_USE = 0,
	mcAGFWSCD_EN = 1
} McAGFWSelfColDetectEnum;

typedef enum McAGFWFlgWsEnum
{	mcAGFWFW_NOT_USE = 0,
	mcAGFWFW_EN = 1
} McAGFWFlgWsEnum;

typedef enum McAGFPTrgTypEnum
{	mcAGFPTT_ACP = 0,
	mcAGFPTT_VAR = 1
} McAGFPTrgTypEnum;

typedef enum McAGFPTrgTypAcpDigInEnum
{	mcAGFPTTADI_TRG_1 = 0,
	mcAGFPTTADI_TRG_2 = 1
} McAGFPTrgTypAcpDigInEnum;

typedef enum McAGFPTrgTypAcpEdgEnum
{	mcAGFPTTAE_POS = 0,
	mcAGFPTTAE_NEG = 1
} McAGFPTrgTypAcpEdgEnum;

typedef enum McAGFPTrgTypVarEdgEnum
{	mcAGFPTTVE_POS = 0,
	mcAGFPTTVE_NEG = 1
} McAGFPTrgTypVarEdgEnum;

typedef enum McAGFPTrgTypVarTimeStampEnum
{	mcAGFPTTVTS_NOT_USE = 0,
	mcAGFPTTVTS_USE = 1
} McAGFPTrgTypVarTimeStampEnum;

typedef enum McAGFSIGPredDistEnum
{	mcAGFSIGPD_NOT_USE = 0,
	mcAGFSIGPD_USE = 1
} McAGFSIGPredDistEnum;

typedef enum McAGFSIGPredTimeEnum
{	mcAGFSIGPT_NOT_USE = 0,
	mcAGFSIGPT_USE = 1
} McAGFSIGPredTimeEnum;

typedef enum McAGFSIGAxDlyEnum
{	mcAGFSIGAD_AUT = 0,
	mcAGFSIGAD_USR_DEF_TIME = 1
} McAGFSIGAxDlyEnum;

typedef enum McAGFSIGSigMissedSigBxEnum
{	mcAGFSIGSMSB_NO_OUT_ERR = 0,
	mcAGFSIGSMSB_DELAYED_OUT_WAR = 1
} McAGFSIGSigMissedSigBxEnum;

typedef enum McAGFSIGSigActEnum
{	mcAGFSIGSA_MFUN = 0
} McAGFSIGSigActEnum;

typedef enum McAGFSIGSigReacTimeEnum
{	mcAGFSIGSRT_NOT_USE = 0,
	mcAGFSIGSRT_USE = 1
} McAGFSIGSigReacTimeEnum;

typedef enum McAGFSIGSigMsPrcEnum
{	mcAGFSIGSMP_NOT_USE = 0,
	mcAGFSIGSMP_VAR = 1
} McAGFSIGSigMsPrcEnum;

typedef enum McAGF2DCCompTypEnum
{	mcAGF2DCCT_JNT_AX = 0
} McAGF2DCCompTypEnum;

typedef enum McAGF2DCCompDatEnum
{	mcAGF2DCCD_PT_LST = 0,
	mcAGF2DCCD_CSV_F = 1
} McAGF2DCCompDatEnum;

typedef enum McAGF3DCCompTypEnum
{	mcAGF3DCCT_JNT_AX = 0
} McAGF3DCCompTypEnum;

typedef enum McAGF3DCCompDatEnum
{	mcAGF3DCCD_PT_LST = 0,
	mcAGF3DCCD_CSV_F = 1
} McAGF3DCCompDatEnum;

typedef enum McAGFPPOutEnum
{	mcAGFPPO_F = 0,
	mcAGFPPO_STREAM = 1
} McAGFPPOutEnum;

typedef enum McAGFPPOFFmtEnum
{	mcAGFPPOFF_SVG = 0
} McAGFPPOFFmtEnum;

typedef enum McAGFPPOFFmtSVGTrfEnum
{	mcAGFPPOFFST_AUT = 0,
	mcAGFPPOFFST_WRK_AREA = 1
} McAGFPPOFFmtSVGTrfEnum;

typedef enum McAGFPPOFFmtSVGViewEnum
{	mcAGFPPOFFSV_XY = 0,
	mcAGFPPOFFSV_YZ = 1,
	mcAGFPPOFFSV_XZ = 2,
	mcAGFPPOFFSV_TOP_FRT_RIGHT = 3,
	mcAGFPPOFFSV_TOP_FRT_LFT = 4,
	mcAGFPPOFFSV_TOP_BCK_LFT = 5,
	mcAGFPPOFFSV_TOP_BCK_RIGHT = 6
} McAGFPPOFFmtSVGViewEnum;

typedef enum McAGFPPOFFmtSVGContEnum
{	mcAGFPPOFFSC_MCS_PATH = 0
} McAGFPPOFFmtSVGContEnum;

typedef enum McAGFPPContSvgSupEnum
{	mcAGFPPCSS_INACT = 0,
	mcAGFPPCSS_MFUN = 1
} McAGFPPContSvgSupEnum;

typedef enum McAGFPPOSFmtEnum
{	mcAGFPPOSF_SVG = 0
} McAGFPPOSFmtEnum;

typedef enum McAGFPPOSFmtSVGPropEnum
{	mcAGFPPOSFSP_AUT = 0,
	mcAGFPPOSFSP_USR = 1
} McAGFPPOSFmtSVGPropEnum;

typedef enum McAGFPPOSFmtSVGPropUsrTrfEnum
{	mcAGFPPOSFSPUT_WRK_AREA = 0
} McAGFPPOSFmtSVGPropUsrTrfEnum;

typedef enum McAGFPPOSFmtSVGViewEnum
{	mcAGFPPOSFSV_XY = 0,
	mcAGFPPOSFSV_YZ = 1,
	mcAGFPPOSFSV_XZ = 2
} McAGFPPOSFmtSVGViewEnum;

typedef enum McAGFPPOSFmtSVGContEnum
{	mcAGFPPOSFSC_MCS_PATH = 0,
	mcAGFPPOSFSC_ACT_POS = 1
} McAGFPPOSFmtSVGContEnum;

typedef enum McAGFPPShapeEnum
{	mcAGFPPS_CIR = 0,
	mcAGFPPS_SQUARE = 1
} McAGFPPShapeEnum;

typedef enum McAGFTTAlignNonRpdMoveEnum
{	mcAGFTTANRM_ALIGN_TO_PATH = 0,
	mcAGFTTANRM_ALIGN_TO_NXT_MOVE = 1
} McAGFTTAlignNonRpdMoveEnum;

typedef enum McAGFTTAlignRpdMoveEnum
{	mcAGFTTARM_ALIGN_TO_PATH = 0,
	mcAGFTTARM_ALIGN_TO_NXT_MOVE = 1
} McAGFTTAlignRpdMoveEnum;

typedef enum McAGFTTFrmEnum
{	mcAGFTTF_PCS = 0,
	mcAGFTTF_SEL_BY_NAME = 1
} McAGFTTFrmEnum;

typedef enum McAGFTTFrmPCSPlEnum
{	mcAGFTTFPP_WRK_PL = 0,
	mcAGFTTFPP_XY = 1,
	mcAGFTTFPP_XZ = 2,
	mcAGFTTFPP_YZ = 3
} McAGFTTFrmPCSPlEnum;

typedef enum McAGFTTFrmSelByNamePlEnum
{	mcAGFTTFSBNP_XY = 0,
	mcAGFTTFSBNP_XZ = 1,
	mcAGFTTFSBNP_YZ = 2
} McAGFTTFrmSelByNamePlEnum;

typedef enum McAGFTTTPTanToolOnOffEnum
{	mcAGFTTTPTTOO_NOT_USE = 0,
	mcAGFTTTPTTOO_EN = 1
} McAGFTTTPTanToolOnOffEnum;

typedef enum McAGFTTTPTTOOEReacEnum
{	mcAGFTTTPTTOOER_MFUN = 0,
	mcAGFTTTPTTOOER_TOOL_LIFT = 1
} McAGFTTTPTTOOEReacEnum;

typedef enum McAGFTTTPCnrTransEnum
{	mcAGFTTTPCT_NOT_USE = 0,
	mcAGFTTTPCT_EN = 1
} McAGFTTTPCnrTransEnum;

typedef enum McAGFTTTPCTEReacEnum
{	mcAGFTTTPCTER_MFUN = 0,
	mcAGFTTTPCTER_TOOL_LIFT = 1
} McAGFTTTPCTEReacEnum;

typedef enum McAGFTrkSyncGeomEnum
{	mcAGFTRKSG_BASIC = 0
} McAGFTrkSyncGeomEnum;

typedef enum McAGFTrkTrqLimConsEnum
{	mcAGFTRKTLC_EX = 0,
	mcAGFTRKTLC_APPX = 1
} McAGFTrkTrqLimConsEnum;

typedef enum McAGFPCXCoorEnum
{	mcAGFPCXC_NOT_USE = 0,
	mcAGFPCXC_USE = 1
} McAGFPCXCoorEnum;

typedef enum McAGFPCYCoorEnum
{	mcAGFPCYC_NOT_USE = 0,
	mcAGFPCYC_USE = 1
} McAGFPCYCoorEnum;

typedef enum McMSCSDescEnum
{	mcMSCSD_STD = 0
} McMSCSDescEnum;

typedef enum McMSCSCNCCEnum
{	mcMSCSCNCC_XYZ = 0,
	mcMSCSCNCC_XY = 1,
	mcMSCSCNCC_XZ = 2,
	mcMSCSCNCC_YZ = 3
} McMSCSCNCCEnum;

typedef enum McMSCSCNOCEnum
{	mcMSCSCNOC_NOT_USE = 0,
	mcMSCSCNOC_ANGLES = 1
} McMSCSCNOCEnum;

typedef enum McMSCSFunTrfEnum
{	mcMSCSFT_STD = 0
} McMSCSFunTrfEnum;

typedef enum McMSJntAxPosLimEnum
{	mcMSJAPL_USE_AX_LIM = 0,
	mcMSJAPL_CFG_JNT_AX_LIM = 1
} McMSJntAxPosLimEnum;

typedef enum McMSCNEnum
{	mcMSCN_DEF = 0,
	mcMSCN_USR = 1
} McMSCNEnum;

typedef enum McMS2ACXYWFrmMdlEnum
{	mcMS2ACXYWFM_STD = 0
} McMS2ACXYWFrmMdlEnum;

typedef enum McMSFrmMdlStdEdgeEnum
{	mcMSFMSE_CXN_LIN = 0,
	mcMSFMSE_PT = 1,
	mcMSFMSE_NOT_USE = 2
} McMSFrmMdlStdEdgeEnum;

typedef enum McMSCplg2LinCplgSrcAxEnum
{	mcMSC2LCSA_AX_1 = 0,
	mcMSC2LCSA_AX_2 = 1
} McMSCplg2LinCplgSrcAxEnum;

typedef enum McMSCplg2LinCplgTgtJntAxEnum
{	mcMSC2LCTJA_JNT_AX_1 = 0,
	mcMSC2LCTJA_JNT_AX_2 = 1
} McMSCplg2LinCplgTgtJntAxEnum;

typedef enum McMS2ACXZWFrmMdlEnum
{	mcMS2ACXZWFM_STD = 0
} McMS2ACXZWFrmMdlEnum;

typedef enum McMS2ACYZWFrmMdlEnum
{	mcMS2ACYZWFM_STD = 0
} McMS2ACYZWFrmMdlEnum;

typedef enum McMS3ACXYZWFrmMdlEnum
{	mcMS3ACXYZWFM_STD = 0
} McMS3ACXYZWFrmMdlEnum;

typedef enum McMSCplg3LinCplgSrcAxEnum
{	mcMSC3LCSA_AX_1 = 0,
	mcMSC3LCSA_AX_2 = 1,
	mcMSC3LCSA_AX_3 = 2
} McMSCplg3LinCplgSrcAxEnum;

typedef enum McMSCplg3LinCplgTgtJntAxEnum
{	mcMSC3LCTJA_JNT_AX_1 = 0,
	mcMSC3LCTJA_JNT_AX_2 = 1,
	mcMSC3LCTJA_JNT_AX_3 = 2
} McMSCplg3LinCplgTgtJntAxEnum;

typedef enum McMS3ACXZCDescEnum
{	mcMS3ACXZCD_STD = 0
} McMS3ACXZCDescEnum;

typedef enum McMSMdl3CntDirJntAxEnum
{	mcMSM3CDJA_STD = 0,
	mcMSM3CDJA_INV = 1
} McMSMdl3CntDirJntAxEnum;

typedef enum McMS3ACXZCWFrmMdlEnum
{	mcMS3ACXZCWFM_STD = 0
} McMS3ACXZCWFrmMdlEnum;

typedef enum McMS3ACXZBDescEnum
{	mcMS3ACXZBD_STD = 0
} McMS3ACXZBDescEnum;

typedef enum McMSTCPOFrmEnum
{	mcMSTCPOF_USE = 0,
	mcMSTCPOF_NOT_USE = 1
} McMSTCPOFrmEnum;

typedef enum McMS3ACXZBWFrmMdlEnum
{	mcMS3ACXZBWFM_STD = 0
} McMS3ACXZBWFrmMdlEnum;

typedef enum McMS4ACXYZBDescEnum
{	mcMS4ACXYZBD_STD = 0
} McMS4ACXYZBDescEnum;

typedef enum McMSMdl4CntDirJntAxEnum
{	mcMSM4CDJA_STD = 0,
	mcMSM4CDJA_INV = 1
} McMSMdl4CntDirJntAxEnum;

typedef enum McMS4ACXYZBWFrmMdlEnum
{	mcMS4ACXYZBWFM_STD = 0
} McMS4ACXYZBWFrmMdlEnum;

typedef enum McMSCplg4LinCplgSrcAxEnum
{	mcMSC4LCSA_AX_1 = 0,
	mcMSC4LCSA_AX_2 = 1,
	mcMSC4LCSA_AX_3 = 2,
	mcMSC4LCSA_AX_4 = 3
} McMSCplg4LinCplgSrcAxEnum;

typedef enum McMSCplg4LinCplgTgtJntAxEnum
{	mcMSC4LCTJA_JNT_AX_1 = 0,
	mcMSC4LCTJA_JNT_AX_2 = 1,
	mcMSC4LCTJA_JNT_AX_3 = 2,
	mcMSC4LCTJA_JNT_AX_4 = 3
} McMSCplg4LinCplgTgtJntAxEnum;

typedef enum McMS4ACXYZCDescEnum
{	mcMS4ACXYZCD_STD = 0
} McMS4ACXYZCDescEnum;

typedef enum McMS4ACXYZCWFrmMdlEnum
{	mcMS4ACXYZCWFM_STD = 0
} McMS4ACXYZCWFrmMdlEnum;

typedef enum McMS5ACXYZBADescEnum
{	mcMS5ACXYZBAD_STD = 0
} McMS5ACXYZBADescEnum;

typedef enum McMSMdl5CntDirJntAxEnum
{	mcMSM5CDJA_STD = 0,
	mcMSM5CDJA_INV = 1
} McMSMdl5CntDirJntAxEnum;

typedef enum McMS5ACXYZBAWFrmMdlEnum
{	mcMS5ACXYZBAWFM_STD = 0
} McMS5ACXYZBAWFrmMdlEnum;

typedef enum McMSCplg5LinCplgSrcAxEnum
{	mcMSC5LCSA_AX_1 = 0,
	mcMSC5LCSA_AX_2 = 1,
	mcMSC5LCSA_AX_3 = 2,
	mcMSC5LCSA_AX_4 = 3,
	mcMSC5LCSA_AX_5 = 4
} McMSCplg5LinCplgSrcAxEnum;

typedef enum McMSCplg5LinCplgTgtJntAxEnum
{	mcMSC5LCTJA_JNT_AX_1 = 0,
	mcMSC5LCTJA_JNT_AX_2 = 1,
	mcMSC5LCTJA_JNT_AX_3 = 2,
	mcMSC5LCTJA_JNT_AX_4 = 3,
	mcMSC5LCTJA_JNT_AX_5 = 4
} McMSCplg5LinCplgTgtJntAxEnum;

typedef enum McMS5ACXYZCADescEnum
{	mcMS5ACXYZCAD_STD = 0
} McMS5ACXYZCADescEnum;

typedef enum McMS5ACXYZCAWFrmMdlEnum
{	mcMS5ACXYZCAWFM_STD = 0
} McMS5ACXYZCAWFrmMdlEnum;

typedef enum McMS6ACZXYBCADescEnum
{	mcMS6ACZXYBCAD_STD = 0
} McMS6ACZXYBCADescEnum;

typedef enum McMSMdl6CntDirJntAxEnum
{	mcMSM6CDJA_STD = 0,
	mcMSM6CDJA_INV = 1
} McMSMdl6CntDirJntAxEnum;

typedef enum McMS6ACZXYBCAWFrmMdlEnum
{	mcMS6ACZXYBCAWFM_STD = 0
} McMS6ACZXYBCAWFrmMdlEnum;

typedef enum McMSCplg6LinCplgSrcAxEnum
{	mcMSC6LCSA_AX_1 = 0,
	mcMSC6LCSA_AX_2 = 1,
	mcMSC6LCSA_AX_3 = 2,
	mcMSC6LCSA_AX_4 = 3,
	mcMSC6LCSA_AX_5 = 4,
	mcMSC6LCSA_AX_6 = 5
} McMSCplg6LinCplgSrcAxEnum;

typedef enum McMSCplg6LinCplgTgtJntAxEnum
{	mcMSC6LCTJA_JNT_AX_1 = 0,
	mcMSC6LCTJA_JNT_AX_2 = 1,
	mcMSC6LCTJA_JNT_AX_3 = 2,
	mcMSC6LCTJA_JNT_AX_4 = 3,
	mcMSC6LCTJA_JNT_AX_5 = 4,
	mcMSC6LCTJA_JNT_AX_6 = 5
} McMSCplg6LinCplgTgtJntAxEnum;

typedef enum McMS4ASASceneViewerObjEnum
{	mcMS4ASASVO_NOT_USE = 0,
	mcMS4ASASVO_COMAU_REBEL_S6_060 = 2
} McMS4ASASceneViewerObjEnum;

typedef enum McMS4ASADescEnum
{	mcMS4ASAD_STD = 0
} McMS4ASADescEnum;

typedef enum McMS4ASAWFrmMdlEnum
{	mcMS4ASAWFM_STD = 0
} McMS4ASAWFrmMdlEnum;

typedef enum McMSDynMdlEnum
{	mcMSDM_DYNPARTABLE = 0
} McMSDynMdlEnum;

typedef enum McMS4ASAMonPtEnum
{	mcMS4ASAMP_NOT_USE = 0,
	mcMS4ASAMP_STD = 1
} McMS4ASAMonPtEnum;

typedef enum McMS2ADASceneViewerObjEnum
{	mcMS2ADASVO_NOT_USE = 0,
	mcMS2ADASVO_GEN = 1,
	mcMS2ADASVO_CODIAN_D2500S020 = 2,
	mcMS2ADASVO_CODIAN_D2800S020 = 3,
	mcMS2ADASVO_CODIAN_D21000S030 = 4,
	mcMS2ADASVO_CODIAN_D21500S030 = 5
} McMS2ADASceneViewerObjEnum;

typedef enum McMS2ADADescEnum
{	mcMS2ADAD_STD = 0
} McMS2ADADescEnum;

typedef enum McMSMdl2CntDirJntAxEnum
{	mcMSM2CDJA_STD = 0,
	mcMSM2CDJA_INV = 1
} McMSMdl2CntDirJntAxEnum;

typedef enum McMS2ADAWFrmMdlEnum
{	mcMS2ADAWFM_STD = 0
} McMS2ADAWFrmMdlEnum;

typedef enum McMS2ADBSceneViewerObjEnum
{	mcMS2ADBSVO_NOT_USE = 0,
	mcMS2ADBSVO_GEN = 1,
	mcMS2ADBSVO_CODIAN_D2500S020 = 2,
	mcMS2ADBSVO_CODIAN_D2800S020 = 3,
	mcMS2ADBSVO_CODIAN_D21000S030 = 4,
	mcMS2ADBSVO_CODIAN_D21500S030 = 5
} McMS2ADBSceneViewerObjEnum;

typedef enum McMS2ADBDescEnum
{	mcMS2ADBD_STD = 0
} McMS2ADBDescEnum;

typedef enum McMS2ADBWFrmMdlEnum
{	mcMS2ADBWFM_STD = 0
} McMS2ADBWFrmMdlEnum;

typedef enum McMSDynLimEnum
{	mcMSDL_DYNPARTABLES = 0
} McMSDynLimEnum;

typedef enum McMSLoadDepJerkLimEnum
{	mcMSLDJL_NOT_USE = 0,
	mcMSLDJL_PAYLOAD_DEP_JERK_RED = 1
} McMSLoadDepJerkLimEnum;

typedef enum McMSDelta2DWrkRngEnum
{	mcMSD2DWR_NOT_USE = 0,
	mcMSD2DWR_STD = 1,
	mcMSD2DWR_MAIN_AREA_W_EX_ZONES = 2
} McMSDelta2DWrkRngEnum;

typedef enum McMSD2DWRMAWEZZone1Enum
{	mcMSD2DWRMAWEZZ1_NOT_USE = 0,
	mcMSD2DWRMAWEZZ1_USE = 1
} McMSD2DWRMAWEZZone1Enum;

typedef enum McMSD2DWRMAWEZZone2Enum
{	mcMSD2DWRMAWEZZ2_NOT_USE = 0,
	mcMSD2DWRMAWEZZ2_USE = 1
} McMSD2DWRMAWEZZone2Enum;

typedef enum McMSD2DWRMAWEZZone3Enum
{	mcMSD2DWRMAWEZZ3_NOT_USE = 0,
	mcMSD2DWRMAWEZZ3_USE = 1
} McMSD2DWRMAWEZZone3Enum;

typedef enum McMS2ADBMonPtEnum
{	mcMS2ADBMP_NOT_USE = 0,
	mcMS2ADBMP_STD = 1
} McMS2ADBMonPtEnum;

typedef enum McMS3ADASceneViewerObjEnum
{	mcMS3ADASVO_NOT_USE = 0,
	mcMS3ADASVO_GEN = 1
} McMS3ADASceneViewerObjEnum;

typedef enum McMS3ADADescEnum
{	mcMS3ADAD_STD = 0
} McMS3ADADescEnum;

typedef enum McMS3ADAWFrmMdlEnum
{	mcMS3ADAWFM_STD = 0
} McMS3ADAWFrmMdlEnum;

typedef enum McMS3ADXZBSceneViewerObjEnum
{	mcMS3ADXZBSVO_NOT_USE = 0,
	mcMS3ADXZBSVO_GEN = 1
} McMS3ADXZBSceneViewerObjEnum;

typedef enum McMS3ADXZBDescEnum
{	mcMS3ADXZBD_STD = 0
} McMS3ADXZBDescEnum;

typedef enum McMS3ADXZBDSDPPMBrktMntArmEnum
{	mcMS3ADXZBDSDPPMBMA_ARM_1 = 0,
	mcMS3ADXZBDSDPPMBMA_ARM_2 = 1
} McMS3ADXZBDSDPPMBrktMntArmEnum;

typedef enum McMS3ADXZBDSDPPMQ3ZeroPosEnum
{	mcMS3ADXZBDSDPPMQZP_INNER = 0,
	mcMS3ADXZBDSDPPMQZP_OUTER = 1
} McMS3ADXZBDSDPPMQ3ZeroPosEnum;

typedef enum McMS3ADXZBWFrmMdlEnum
{	mcMS3ADXZBWFM_STD = 0
} McMS3ADXZBWFrmMdlEnum;

typedef enum McMS3ADBSceneViewerObjEnum
{	mcMS3ADBSVO_NOT_USE = 0,
	mcMS3ADBSVO_GEN = 1
} McMS3ADBSceneViewerObjEnum;

typedef enum McMS3ADBDescEnum
{	mcMS3ADBD_STD = 0
} McMS3ADBDescEnum;

typedef enum McMS3ADBWFrmMdlEnum
{	mcMS3ADBWFM_STD = 0
} McMS3ADBWFrmMdlEnum;

typedef enum McMS3ADXZCSceneViewerObjEnum
{	mcMS3ADXZCSVO_NOT_USE = 0,
	mcMS3ADXZCSVO_GEN = 1,
	mcMS3ADXZCSVO_D2800S02XR100 = 2
} McMS3ADXZCSceneViewerObjEnum;

typedef enum McMS3ADXZCDescEnum
{	mcMS3ADXZCD_STD = 0
} McMS3ADXZCDescEnum;

typedef enum McMS3ADXZCWFrmMdlEnum
{	mcMS3ADXZCWFM_STD = 0
} McMS3ADXZCWFrmMdlEnum;

typedef enum McMS3ADXZCMonPtEnum
{	mcMS3ADXZCMP_NOT_USE = 0,
	mcMS3ADXZCMP_STD = 1
} McMS3ADXZCMonPtEnum;

typedef enum McMS4ADASceneViewerObjEnum
{	mcMS4ADASVO_NOT_USE = 0,
	mcMS4ADASVO_GEN = 1
} McMS4ADASceneViewerObjEnum;

typedef enum McMS4ADADescEnum
{	mcMS4ADAD_STD = 0
} McMS4ADADescEnum;

typedef enum McMS4ADAWFrmMdlEnum
{	mcMS4ADAWFM_STD = 0
} McMS4ADAWFrmMdlEnum;

typedef enum McMSDeltaWrkRngEnum
{	mcMSDWR_NOT_USE = 0,
	mcMSDWR_STD = 1
} McMSDeltaWrkRngEnum;

typedef enum McMS4ADBSceneViewerObjEnum
{	mcMS4ADBSVO_NOT_USE = 0,
	mcMS4ADBSVO_GEN = 1
} McMS4ADBSceneViewerObjEnum;

typedef enum McMS4ADBDescEnum
{	mcMS4ADBD_STD = 0
} McMS4ADBDescEnum;

typedef enum McMS4ADBWFrmMdlEnum
{	mcMS4ADBWFM_STD = 0
} McMS4ADBWFrmMdlEnum;

typedef enum McMS4ADCSceneViewerObjEnum
{	mcMS4ADCSVO_NOT_USE = 0,
	mcMS4ADCSVO_GEN = 1
} McMS4ADCSceneViewerObjEnum;

typedef enum McMS4ADCDescEnum
{	mcMS4ADCD_STD = 0
} McMS4ADCDescEnum;

typedef enum McMS4ADCWFrmMdlEnum
{	mcMS4ADCWFM_STD = 0
} McMS4ADCWFrmMdlEnum;

typedef enum McMS5ADASceneViewerObjEnum
{	mcMS5ADASVO_NOT_USE = 0,
	mcMS5ADASVO_GEN = 1
} McMS5ADASceneViewerObjEnum;

typedef enum McMS5ADADescEnum
{	mcMS5ADAD_STD = 0
} McMS5ADADescEnum;

typedef enum McMS5ADAWFrmMdlEnum
{	mcMS5ADAWFM_STD = 0
} McMS5ADAWFrmMdlEnum;

typedef enum McMS3ARADescEnum
{	mcMS3ARAD_STD = 0
} McMS3ARADescEnum;

typedef enum McMS3ARAWFrmMdlEnum
{	mcMS3ARAWFM_STD = 0
} McMS3ARAWFrmMdlEnum;

typedef enum McMS4ARASceneViewerObjEnum
{	mcMS4ARASVO_NOT_USE = 0,
	mcMS4ARASVO_GEN = 1,
	mcMS4ARASVO_COMAU_PAL_180_31 = 2
} McMS4ARASceneViewerObjEnum;

typedef enum McMS4ARADescEnum
{	mcMS4ARAD_STD = 0
} McMS4ARADescEnum;

typedef enum McMS4ARAWFrmMdlEnum
{	mcMS4ARAWFM_STD = 0
} McMS4ARAWFrmMdlEnum;

typedef enum McMS4ARBDescEnum
{	mcMS4ARBD_STD = 0
} McMS4ARBDescEnum;

typedef enum McMS4ARBWFrmMdlEnum
{	mcMS4ARBWFM_STD = 0
} McMS4ARBWFrmMdlEnum;

typedef enum McMS5ARADescEnum
{	mcMS5ARAD_STD = 0
} McMS5ARADescEnum;

typedef enum McMS5ARAWFrmMdlEnum
{	mcMS5ARAWFM_STD = 0
} McMS5ARAWFrmMdlEnum;

typedef enum McMS5ARBDescEnum
{	mcMS5ARBD_STD = 0
} McMS5ARBDescEnum;

typedef enum McMS5ARBWFrmMdlEnum
{	mcMS5ARBWFM_STD = 0
} McMS5ARBWFrmMdlEnum;

typedef enum McMS6ARASceneViewerObjEnum
{	mcMS6ARASVO_NOT_USE = 0,
	mcMS6ARASVO_GEN = 1
} McMS6ARASceneViewerObjEnum;

typedef enum McMS6ARADescEnum
{	mcMS6ARAD_STD = 0
} McMS6ARADescEnum;

typedef enum McMS6ARAWFrmMdlEnum
{	mcMS6ARAWFM_STD = 0
} McMS6ARAWFrmMdlEnum;

typedef enum McMS6ARBSceneViewerObjEnum
{	mcMS6ARBSVO_NOT_USE = 0,
	mcMS6ARBSVO_GEN = 1,
	mcMS6ARBSVO_COMAU_RACER_3 = 20,
	mcMS6ARBSVO_COMAU_RACER_5063 = 30,
	mcMS6ARBSVO_COMAU_RACER_5080 = 31,
	mcMS6ARBSVO_COMAU_RACER_714 = 40,
	mcMS6ARBSVO_COMAU_NS12185 = 50,
	mcMS6ARBSVO_COMAU_NS16165 = 60
} McMS6ARBSceneViewerObjEnum;

typedef enum McMS6ARBDescEnum
{	mcMS6ARBD_STD = 0
} McMS6ARBDescEnum;

typedef enum McMS6ARBWFrmMdlEnum
{	mcMS6ARBWFM_STD = 0
} McMS6ARBWFrmMdlEnum;

typedef enum McMS6ARCSceneViewerObjEnum
{	mcMS6ARCSVO_NOT_USE = 0,
	mcMS6ARCSVO_GEN = 1
} McMS6ARCSceneViewerObjEnum;

typedef enum McMS6ARCDescEnum
{	mcMS6ARCD_STD = 0
} McMS6ARCDescEnum;

typedef enum McMS6ARCSingHndlgEnum
{	mcMS6ARCSH_STD = 0,
	mcMS6ARCSH_ORIENT_COMP = 1
} McMS6ARCSingHndlgEnum;

typedef enum McMS6ARCWFrmMdlEnum
{	mcMS6ARCWFM_STD = 0
} McMS6ARCWFrmMdlEnum;

typedef enum McMS6ARCMonPtEnum
{	mcMS6ARCMP_NOT_USE = 0,
	mcMS6ARCMP_STD = 1
} McMS6ARCMonPtEnum;

typedef struct McPathGenMonElemFeedReductType
{	enum McPathGenMonElemFeedReductEnum State;
	double ReductionFactor;
	double MinimumRadius;
	double MaximumRadius;
} McPathGenMonElemFeedReductType;

typedef struct McPathGenDynModIdentSpParType
{	float Velocity;
	float Acceleration;
	float Deceleration;
	float Jerk;
} McPathGenDynModIdentSpParType;

typedef struct McPathGenDynModIdentAdvIParType
{	plcstring TestTrajFileName[261];
} McPathGenDynModIdentAdvIParType;

typedef struct McPathGenDynModIdentAdvOParType
{	plcstring ResultFileName[261];
} McPathGenDynModIdentAdvOParType;

typedef struct McPathGenDynModIdentAdvParType
{	struct McPathGenDynModIdentAdvIParType Input;
	struct McPathGenDynModIdentAdvOParType Output;
} McPathGenDynModIdentAdvParType;

typedef struct McPathGenMonElemPrgType
{	plcstring FileName[261];
	plcstring FullPath[261];
	unsigned long Number;
} McPathGenMonElemPrgType;

typedef struct McPathGenMonElemCurrentPrgType
{	plcstring FileName[261];
	plcstring FullPath[261];
	unsigned long Number;
	unsigned long CallLevel;
} McPathGenMonElemCurrentPrgType;

typedef struct McPathGenMonElemBlockMonType
{	plcstring BlockLast2[261];
	plcstring BlockLast1[261];
	plcstring BlockActual[261];
	plcstring BlockNext1[261];
	plcstring BlockNext2[261];
} McPathGenMonElemBlockMonType;

typedef struct McPathGenMonElemPrgSequenceType
{	unsigned long CallLevel;
	struct McPathGenMonElemPrgType Program[32];
} McPathGenMonElemPrgSequenceType;

typedef struct McPathGenMonElemAxPositionsType
{	double SetPosition[15];
} McPathGenMonElemAxPositionsType;

typedef struct McPathGenMonElemPathSpeedType
{	float UnitPerMinute;
	float UnitPerRevolution;
	float Inverse;
} McPathGenMonElemPathSpeedType;

typedef struct McPathGenMonElemFeedSettingsType
{	plcstring FeedPath[81];
	enum McPathGenMonElemFeedCharEnum FeedCharacteristic;
	enum McPathGenMonElemFeedTypeEnum FeedType;
	struct McPathGenMonElemFeedReductType FeedReduction;
	float FeedRate;
	float InverseTimeFeedRate;
	float FeedPerRevolution;
} McPathGenMonElemFeedSettingsType;

typedef struct McPathGenMonElemPathLimitsType
{	float Velocity;
	float Acceleration;
	float Deceleration;
	float JerkAcceleration;
	float JerkDeceleration;
} McPathGenMonElemPathLimitsType;

typedef struct McPathGenMonElemPathInfoType
{	float CurrentPathVelocity;
	double CurrentPathPosition;
	double CurrentPathLength;
	double RemainingDistance;
	struct McPathGenMonElemPathLimitsType Limits;
} McPathGenMonElemPathInfoType;

typedef struct McPathGenMonElemToolTransType
{	double X;
	double Y;
	double Z;
} McPathGenMonElemToolTransType;

typedef struct McPathGenMonElemToolOrientType
{	double Angle1;
	double Angle2;
	double Angle3;
} McPathGenMonElemToolOrientType;

typedef struct McPathGenMonElemToolIdentType
{	plcstring Identifier[128];
} McPathGenMonElemToolIdentType;

typedef struct McPathGenMonElemToolDescType
{	struct McPathGenMonElemToolTransType ToolTranslation;
	struct McPathGenMonElemToolOrientType ToolOrientation;
	double ToolLength;
	double ToolRadius;
	signed long ToolVirtualToolTip;
} McPathGenMonElemToolDescType;

typedef struct McPathGenMonElemAxLimitsType
{	double UpperPositionLimit;
	double LowerPositionLimit;
	float VelocityPositive;
	float VelocityNegative;
	float AccelerationPositive;
	float AccelerationNegative;
	float DecelerationPositive;
	float DecelerationNegative;
	float JerkAccelerationPositive;
	float JerkAccelerationNegative;
	float JerkDecelerationPositive;
	float JerkDecelerationNegative;
	float LoadAccelerationPositive;
	float LoadAccelerationNegative;
	float LoadDecelerationPositive;
	float LoadDecelerationNegative;
} McPathGenMonElemAxLimitsType;

typedef struct McPathGenMonElemAxTorquesType
{	double Torques[10];
} McPathGenMonElemAxTorquesType;

typedef struct McPathGenMonElemGBTorquesType
{	double Torques[10];
} McPathGenMonElemGBTorquesType;

typedef struct McPathGenMonElemCSLoadsType
{	double Loads[250];
} McPathGenMonElemCSLoadsType;

typedef struct McPathGenMonElemDynamicDecType
{	double Decelerations[15];
} McPathGenMonElemDynamicDecType;

typedef struct McPathGenMonElemSkipLevelType
{	plcbit Level[10];
} McPathGenMonElemSkipLevelType;

typedef struct McPathGenMonElemBasicMonType
{	struct McPathGenMonElemCurrentPrgType CurrentProgram;
	unsigned long LineNumber;
	unsigned long BlockNumber;
	double Runtime;
	float PathSpeed;
	struct McPathGenMonElemAxPositionsType Axes;
	struct McPathGenMonElemAxPositionsType TCPInMCS;
	struct McPathGenMonElemAxPositionsType SlaveAxes;
} McPathGenMonElemBasicMonType;

typedef struct McPathGenCusMechStatusType
{	unsigned long Code;
} McPathGenCusMechStatusType;

typedef struct McPathGenCusMechInfoType
{	struct McPathGenCusMechStatusType Status;
} McPathGenCusMechInfoType;

typedef struct McPathGenCusMechDirInType
{	double JointPos[15];
	double TcpRefPos[15];
} McPathGenCusMechDirInType;

typedef struct McPathGenCusMechDirOutType
{	double TcpPos[15];
} McPathGenCusMechDirOutType;

typedef struct McPathGenCusMechDirParType
{	unsigned long MechDimensionsAddr;
	struct McToolGeometryType Tool;
	unsigned long JointCount;
	unsigned long TcpCount;
} McPathGenCusMechDirParType;

typedef struct McPathGenCusMechDirType
{	struct McPathGenCusMechDirInType Input;
	struct McPathGenCusMechDirOutType Output;
	struct McPathGenCusMechDirParType Parameter;
	struct McPathGenCusMechInfoType Info;
} McPathGenCusMechDirType;

typedef struct McPathGenCusMechInvInType
{	double TcpPos[15];
	double JointRefPos[15];
} McPathGenCusMechInvInType;

typedef struct McPathGenCusMechInvOutType
{	double JointPos[15];
} McPathGenCusMechInvOutType;

typedef struct McPathGenCusMechInvParType
{	unsigned long MechDimensionsAddr;
	struct McToolGeometryType Tool;
	unsigned long JointCount;
	unsigned long TcpCount;
} McPathGenCusMechInvParType;

typedef struct McPathGenCusMechInvType
{	struct McPathGenCusMechInvInType Input;
	struct McPathGenCusMechInvOutType Output;
	struct McPathGenCusMechInvParType Parameter;
	struct McPathGenCusMechInfoType Info;
} McPathGenCusMechInvType;

typedef struct McPathGenCusMechDirDerInType
{	double JointPos[15];
	double JointDer[15];
	double TcpRefPos[15];
} McPathGenCusMechDirDerInType;

typedef struct McPathGenCusMechDirDerOutType
{	double TcpDer[15];
} McPathGenCusMechDirDerOutType;

typedef struct McPathGenCusMechDirDerParType
{	unsigned long MechDimensionsAddr;
	struct McToolGeometryType Tool;
	unsigned long JointCount;
	unsigned long TcpCount;
} McPathGenCusMechDirDerParType;

typedef struct McPathGenCusMechDirDerType
{	struct McPathGenCusMechDirDerInType Input;
	struct McPathGenCusMechDirDerOutType Output;
	struct McPathGenCusMechDirDerParType Parameter;
	struct McPathGenCusMechInfoType Info;
} McPathGenCusMechDirDerType;

typedef struct McPathGenCusMechInvDerInType
{	double TcpPos[15];
	double TcpDer[15];
	double JointRefPos[15];
} McPathGenCusMechInvDerInType;

typedef struct McPathGenCusMechInvDerOutType
{	double JointDer[15];
} McPathGenCusMechInvDerOutType;

typedef struct McPathGenCusMechInvDerParType
{	unsigned long MechDimensionsAddr;
	struct McToolGeometryType Tool;
	unsigned long JointCount;
	unsigned long TcpCount;
} McPathGenCusMechInvDerParType;

typedef struct McPathGenCusMechInvDerType
{	struct McPathGenCusMechInvDerInType Input;
	struct McPathGenCusMechInvDerOutType Output;
	struct McPathGenCusMechInvDerParType Parameter;
	struct McPathGenCusMechInfoType Info;
} McPathGenCusMechInvDerType;

typedef struct McPathGenCusMechPointType
{	double X;
	double Y;
	double Z;
} McPathGenCusMechPointType;

typedef struct McPathGenCusMechWMInType
{	double JointPos[15];
} McPathGenCusMechWMInType;

typedef struct McPathGenCusMechWMEdgeType
{	unsigned long ID;
	struct McPathGenCusMechPointType Point1;
	struct McPathGenCusMechPointType Point2;
	double Distance;
} McPathGenCusMechWMEdgeType;

typedef struct McPathGenCusMechWMOutType
{	struct McPathGenCusMechWMEdgeType Edge[16];
	unsigned long EdgeCount;
} McPathGenCusMechWMOutType;

typedef struct McPathGenCusMechWMParType
{	unsigned long MechDimensionsAddr;
	unsigned long WfmDescriptionAddr;
	struct McToolGeometryType Tool;
	unsigned long JointCount;
	plcbit CheckSelfCollision;
} McPathGenCusMechWMParType;

typedef struct McPathGenCusMechWMSelColType
{	plcbit Detected;
	unsigned long EdgeID1;
	unsigned long EdgeID2;
} McPathGenCusMechWMSelColType;

typedef struct McPathGenCusMechWMInfoType
{	struct McPathGenCusMechStatusType Status;
	struct McPathGenCusMechWMSelColType SelfCollision;
} McPathGenCusMechWMInfoType;

typedef struct McPathGenCusMechWMStatusType
{	unsigned long Code;
} McPathGenCusMechWMStatusType;

typedef struct McPathGenCusMechWMType
{	struct McPathGenCusMechWMInType Input;
	struct McPathGenCusMechWMOutType Output;
	struct McPathGenCusMechWMParType Parameter;
	struct McPathGenCusMechWMInfoType Info;
} McPathGenCusMechWMType;

typedef struct McPathGenTrackedObjectType
{	enum McPathGenTrackedObjTypeEnum ObjectType;
	struct McTrackingPathType TrackedTrkPath;
} McPathGenTrackedObjectType;

typedef struct McPathGenTrackedFrameType
{	unsigned long FrameId;
} McPathGenTrackedFrameType;

typedef struct McPathGenErrorStructType
{	double ActualError;
} McPathGenErrorStructType;

typedef struct McPathGenTrackingInfoType
{	struct McPathGenTrackedObjectType TrackedObject;
	struct McPathGenTrackedFrameType TrackedFrame;
	struct McPathGenErrorStructType ErrorStruct;
} McPathGenTrackingInfoType;

typedef struct McAGPGPAJntAxJntAxType
{	plcstring Name[251];
	struct McCfgReferenceType AxisReference;
} McAGPGPAJntAxJntAxType;

typedef struct McAGPGPAJntAxType
{	struct McCfgUnboundedArrayType JointAxis;
} McAGPGPAJntAxType;

typedef struct McAGPGPASASAPADType
{	enum McAGPGPASASAPADEnum Type;
} McAGPGPASASAPADType;

typedef struct McAGPGPASlAxSlAxType
{	plcstring Name[251];
	struct McCfgReferenceType AxisReference;
	struct McAGPGPASASAPADType PeriodicAxisDirection;
} McAGPGPASlAxSlAxType;

typedef struct McAGPGPASlAxType
{	struct McCfgUnboundedArrayType SlaveAxis;
} McAGPGPASlAxType;

typedef struct McAGPGPASngAxSngAxType
{	struct McCfgReferenceType AxisReference;
} McAGPGPASngAxSngAxType;

typedef struct McAGPGPASngAxType
{	struct McCfgUnboundedArrayType SingleAxis;
} McAGPGPASngAxType;

typedef struct McAGPGPAType
{	struct McAGPGPAJntAxType JointAxes;
	struct McAGPGPASlAxType SlaveAxes;
	struct McAGPGPASngAxType SingleAxes;
} McAGPGPAType;

typedef struct McAGPGMSType
{	struct McCfgReferenceType MechanicalSystemReference;
} McAGPGMSType;

typedef struct McAGPGModalDatBxType
{	enum McAGPGModalDatBxEnum Type;
} McAGPGModalDatBxType;

typedef struct McAGPGGeoPlanTCPResType
{	double LengthResolution;
	double AngleResolution;
} McAGPGGeoPlanTCPResType;

typedef struct McAGPGGeoPlanRndType
{	double PathDistance;
	enum McAGPGGeoPlanRndSymRndEnum SymmetricRounding;
	enum McAGPGGeoPlanRndLatSegEnum LastSegment;
	enum McAGPGGeoPlanRndAvoidZeroCrvEnum AvoidZeroCurvature;
} McAGPGGeoPlanRndType;

typedef struct McAGPGGeoPlanType
{	struct McAGPGGeoPlanTCPResType TCPResolution;
	struct McAGPGGeoPlanRndType Rounding;
	enum McAGPGGeoPlanRndModEnum RoundingMode;
	double MaxCornerDeviation;
	double MaxTangentialTransitionDeviation;
	double MaxRadiusDeviation;
	enum McAGPGGeoPlanWrkPlEnum WorkingPlane;
} McAGPGGeoPlanType;

typedef struct McAGPGTPBLimCkResUsrDefType
{	float Time;
} McAGPGTPBLimCkResUsrDefType;

typedef struct McAGPGTPBLimCkResType
{	enum McAGPGTPBLimCkResEnum Type;
	struct McAGPGTPBLimCkResUsrDefType UserDefined;
} McAGPGTPBLimCkResType;

typedef struct McAGPGTPBBuffTimeUsrDefType
{	float Time;
} McAGPGTPBBuffTimeUsrDefType;

typedef struct McAGPGTPBBuffTimeType
{	enum McAGPGTPBBuffTimeEnum Type;
	struct McAGPGTPBBuffTimeUsrDefType UserDefined;
} McAGPGTPBBuffTimeType;

typedef struct McAGPGTPBBarrParType
{	enum McAGPGTPBBarrParEnum Type;
} McAGPGTPBBarrParType;

typedef struct McAGPGTPBType
{	struct McAGPGTPBLimCkResType LimitCheckResolution;
	struct McAGPGTPBBuffTimeType BufferTime;
	struct McAGPGTPBBarrParType BarrierParametrization;
} McAGPGTPBType;

typedef struct McAGPGTrajPlanType
{	enum McAGPGTrajPlanEnum Type;
	struct McAGPGTPBType Basic;
} McAGPGTrajPlanType;

typedef struct McAGPGMNMLUADType
{	enum McAGPGMNMLUADEnum Type;
} McAGPGMNMLUADType;

typedef struct McAGPGMiscNonMoveLimUseType
{	unsigned long Count;
	struct McAGPGMNMLUADType Action;
} McAGPGMiscNonMoveLimUseType;

typedef struct McAGPGMiscNonMoveLimType
{	enum McAGPGMiscNonMoveLimEnum Type;
	struct McAGPGMiscNonMoveLimUseType Used;
} McAGPGMiscNonMoveLimType;

typedef struct McAGPGMTSOJerkSupBasicType
{	float AdaptationTime;
} McAGPGMTSOJerkSupBasicType;

typedef struct McAGPGMTSOJerkSupType
{	enum McAGPGMTSOJerkSupEnum Type;
	struct McAGPGMTSOJerkSupBasicType Basic;
} McAGPGMTSOJerkSupType;

typedef struct McAGPGMTSOType
{	struct McAGPGMTSOJerkSupType JerkSuppression;
} McAGPGMTSOType;

typedef struct McAGPGMiscType
{	struct McAGPGMiscNonMoveLimType NonMovementsLimit;
	struct McAGPGMTSOType TimeStretchOverride;
} McAGPGMiscType;

typedef struct McAGPGBSType
{	struct McAGPGModalDatBxType ModalDataBehaviour;
	struct McAGPGGeoPlanType GeometryPlanning;
	struct McAGPGTrajPlanType TrajectoryPlanning;
	struct McAGPGMiscType Miscellaneous;
} McAGPGBSType;

typedef struct McAGPGSRType
{	struct McAGSRQSType Quickstop;
} McAGPGSRType;

typedef struct McCfgAxGrpPathGenType
{	enum McAGPGSubtEnum Subtype;
	enum McPTCEnum ProcessingTaskClass;
	enum McAGPGLicEnum License;
	struct McAGPGPAType PhysicalAxes;
	struct McAGPGMSType MechanicalSystem;
	struct McAGPGBSType BasicSettings;
	struct McAGPGSRType StopReaction;
	struct McAGAGFType AxesGroupFeatures;
} McCfgAxGrpPathGenType;

typedef struct McCfgAxGrpPathGenBaseSetType
{	struct McAGPGBSType BasicSettings;
} McCfgAxGrpPathGenBaseSetType;

typedef struct McAGFPRGIPSIntrplTypType
{	enum McAGFPRGIPSIntrplTypEnum Type;
} McAGFPRGIPSIntrplTypType;

typedef struct McAGFPRGIPSAbsRelPosCoorType
{	enum McAGFPRGIPSAbsRelPosCoorEnum Type;
} McAGFPRGIPSAbsRelPosCoorType;

typedef struct McAGFPRGIPSAbsRelCirCoorType
{	enum McAGFPRGIPSAbsRelCirCoorEnum Type;
} McAGFPRGIPSAbsRelCirCoorType;

typedef struct McAGFPRGIPSJACSACSPrgType
{	enum McAGFPRGIPSJACSACSPrgEnum Type;
} McAGFPRGIPSJACSACSPrgType;

typedef struct McAGFPRGIPSCtrCxnTanArcType
{	double Radius;
} McAGFPRGIPSCtrCxnTanArcType;

typedef struct McAGFPRGIPSCtrCxnChChSpecType
{	enum McAGFPRGIPSCtrCxnChChSpecEnum Type;
} McAGFPRGIPSCtrCxnChChSpecType;

typedef struct McAGFPRGIPSCtrCxnChType
{	struct McAGFPRGIPSCtrCxnChChSpecType ChamferSpecification;
	double Length;
} McAGFPRGIPSCtrCxnChType;

typedef struct McAGFPRGIPSCtrCxnType
{	enum McAGFPRGIPSCtrCxnEnum Type;
	struct McAGFPRGIPSCtrCxnTanArcType TangentialArcs;
	struct McAGFPRGIPSCtrCxnChType Chamfers;
} McAGFPRGIPSCtrCxnType;

typedef struct McAGFPRGIPSPrgUnitType
{	enum McAGFPRGIPSPrgUnitEnum Type;
} McAGFPRGIPSPrgUnitType;

typedef struct McAGFPRGIPSFSetFPathCusFPathType
{	McCfgString250Type PathName;
} McAGFPRGIPSFSetFPathCusFPathType;

typedef struct McAGFPRGIPSFSetFPathType
{	enum McAGFPRGIPSFSetFPathEnum Type;
	struct McAGFPRGIPSFSetFPathCusFPathType CustomFeedPath;
} McAGFPRGIPSFSetFPathType;

typedef struct McAGFPRGIPSFSetFChType
{	enum McAGFPRGIPSFSetFChEnum Type;
} McAGFPRGIPSFSetFChType;

typedef struct McAGFPRGIPSFSetFTypType
{	enum McAGFPRGIPSFSetFTypEnum Type;
} McAGFPRGIPSFSetFTypType;

typedef struct McAGFPRGIPSFSetFRedActType
{	double ReductionFactor;
	double MinimumRadius;
	double MaximumRadius;
} McAGFPRGIPSFSetFRedActType;

typedef struct McAGFPRGIPSFSetFRedType
{	enum McAGFPRGIPSFSetFRedEnum Type;
	struct McAGFPRGIPSFSetFRedActType Active;
} McAGFPRGIPSFSetFRedType;

typedef struct McAGFPRGIPSFSetType
{	struct McAGFPRGIPSFSetFPathType FeedPath;
	struct McAGFPRGIPSFSetFChType FeedCharacteristic;
	struct McAGFPRGIPSFSetFTypType FeedType;
	struct McAGFPRGIPSFSetFRedType FeedReduction;
	double FeedRate;
	double InverseTimeFeedRate;
	double FeedPerRevolution;
} McAGFPRGIPSFSetType;

typedef struct McAGFPRGIPSType
{	struct McAGFPRGIPSIntrplTypType InterpolationType;
	struct McAGFPRGIPSAbsRelPosCoorType AbsRelPositionCoordinates;
	struct McAGFPRGIPSAbsRelCirCoorType AbsRelCircleCoordinates;
	struct McAGFPRGIPSJACSACSPrgType JACSACSProgramming;
	struct McAGFPRGIPSCtrCxnType ContourConnection;
	struct McAGFPRGIPSPrgUnitType ProgrammingUnits;
	struct McAGFPRGIPSFSetType FeedSettings;
} McAGFPRGIPSType;

typedef struct McAGFPRGDLType
{	enum McAGFPRGDLEnum Type;
} McAGFPRGDLType;

typedef struct McAGFPRGLDefType
{	plcstring FileDevice[251];
} McAGFPRGLDefType;

typedef struct McAGFPRGLUsrUsrPrgLocType
{	plcstring FileDevice[251];
} McAGFPRGLUsrUsrPrgLocType;

typedef struct McAGFPRGLUsrType
{	struct McCfgUnboundedArrayType UserProgramLocation;
} McAGFPRGLUsrType;

typedef struct McAGFPRGLType
{	enum McAGFPRGLEnum Type;
	struct McAGFPRGLDefType Default;
	struct McAGFPRGLUsrType User;
} McAGFPRGLType;

typedef struct McAGFPRGPEPVAdvSynType
{	enum McAGFPRGPEPVAdvSynEnum Type;
} McAGFPRGPEPVAdvSynType;

typedef struct McAGFPRGPEPVAdvRefType
{	enum McAGFPRGPEPVAdvRefEnum Type;
} McAGFPRGPEPVAdvRefType;

typedef struct McAGFPRGPEPVAdvType
{	plcstring Alias[251];
	struct McAGFPRGPEPVAdvSynType Synchronization;
	struct McAGFPRGPEPVAdvRefType Reference;
} McAGFPRGPEPVAdvType;

typedef struct McAGFPRGPEPVType
{	plcstring ProcessVariableName[251];
	struct McAGFPRGPEPVAdvType Advanced;
} McAGFPRGPEPVType;

typedef struct McAGFPRGPEPVSType
{	struct McCfgUnboundedArrayType ProcessVariable;
} McAGFPRGPEPVSType;

typedef struct McAGFPRGPEIVAdvArrDimType
{	struct McCfgUnboundedArrayType SizeOfArrayDimemsion;
} McAGFPRGPEIVAdvArrDimType;

typedef struct McAGFPRGPEIVAdvSynType
{	enum McAGFPRGPEIVAdvSynEnum Type;
} McAGFPRGPEIVAdvSynType;

typedef struct McAGFPRGPEIVAdvConstYesType
{	plcstring Value[251];
} McAGFPRGPEIVAdvConstYesType;

typedef struct McAGFPRGPEIVAdvConstType
{	enum McAGFPRGPEIVAdvConstEnum Type;
	struct McAGFPRGPEIVAdvConstYesType Yes;
} McAGFPRGPEIVAdvConstType;

typedef struct McAGFPRGPEIVAdvType
{	struct McAGFPRGPEIVAdvArrDimType ArrayDimensions;
	struct McAGFPRGPEIVAdvSynType Synchronization;
	struct McAGFPRGPEIVAdvConstType Constant;
} McAGFPRGPEIVAdvType;

typedef struct McAGFPRGPEIVType
{	plcstring VariableName[251];
	struct McCfgVarDatTypType DataType;
	struct McAGFPRGPEIVAdvType Advanced;
} McAGFPRGPEIVType;

typedef struct McAGFPRGPEIVSType
{	struct McCfgUnboundedArrayType InterpreterVariable;
} McAGFPRGPEIVSType;

typedef struct McAGFPRGPEFUNAdvSynType
{	enum McAGFPRGPEFUNAdvSynEnum Type;
} McAGFPRGPEFUNAdvSynType;

typedef struct McAGFPRGPEFUNAdvType
{	struct McAGFPRGPEFUNAdvSynType Synchronization;
	enum McAGFPRGPEFUNAdvExeInSimEnum ExecuteInSimulation;
	enum McAGFPRGPEFUNAdvReturnRefEnum ReturnReference;
} McAGFPRGPEFUNAdvType;

typedef struct McAGFPRGPEFUNArgType
{	plcstring Name[251];
	struct McCfgVarDatTypType DataType;
	enum McAGFPRGPEFUNArgRefEnum Reference;
} McAGFPRGPEFUNArgType;

typedef struct McAGFPRGPEFUNType
{	plcstring FunctionName[251];
	struct McCfgFunDatTypType FunctionReturnType;
	struct McAGFPRGPEFUNAdvType Advanced;
	struct McCfgUnboundedArrayType Argument;
} McAGFPRGPEFUNType;

typedef struct McAGFPRGPEFUNSType
{	struct McCfgUnboundedArrayType Function;
} McAGFPRGPEFUNSType;

typedef struct McAGFPRGPEFBIAdvSynType
{	enum McAGFPRGPEFBIAdvSynEnum Type;
} McAGFPRGPEFBIAdvSynType;

typedef struct McAGFPRGPEFBIAdvType
{	plcstring Alias[251];
	struct McAGFPRGPEFBIAdvSynType Synchronization;
	enum McAGFPRGPEFBIAdvBlkEnum Blocking;
} McAGFPRGPEFBIAdvType;

typedef struct McAGFPRGPEFBIType
{	plcstring ProcessVariableName[251];
	struct McAGFPRGPEFBIAdvType Advanced;
} McAGFPRGPEFBIType;

typedef struct McAGFPRGPEFBISType
{	struct McCfgUnboundedArrayType FunctionBlockInstance;
} McAGFPRGPEFBISType;

typedef struct McAGFPRGPEPPSRIsPatType
{	enum McAGFPRGPEPPSRIsPatEnum Type;
} McAGFPRGPEPPSRIsPatType;

typedef struct McAGFPRGPEPreProSubstRuleType
{	plcstring SearchString[251];
	struct McAGFPRGPEPPSRIsPatType IsPattern;
	plcstring ReplaceString[251];
} McAGFPRGPEPreProSubstRuleType;

typedef struct McAGFPRGPEPreProSubstType
{	struct McCfgUnboundedArrayType SubstitutionRule;
} McAGFPRGPEPreProSubstType;

typedef struct McAGFPRGPEAlsAxDefType
{	struct McCfgUnboundedArrayType AliasAxis;
} McAGFPRGPEAlsAxDefType;

typedef struct McAGFPRGPEType
{	struct McAGFPRGPEPVSType ProcessVariables;
	struct McAGFPRGPEIVSType InterpreterVariables;
	struct McAGFPRGPEFUNSType Functions;
	struct McAGFPRGPEFBISType FunctionBlockInstance;
	struct McAGFPRGPEPreProSubstType PreprocessorSubstitutions;
	struct McAGFPRGPEAlsAxDefType AliasAxesDefinitions;
} McAGFPRGPEType;

typedef struct McCfgAxGrpFeatPrgType
{	struct McAGFModalDatBxType ModalDataBehaviour;
	struct McAGFPRGIPSType InitialProgramSettings;
	struct McAGFPRGDLType DefaultLanguage;
	struct McAGFPRGLType Location;
	struct McAGFPRGPEType ProgramElements;
} McCfgAxGrpFeatPrgType;

typedef struct McAGFFFFwdModType
{	enum McAGFFFFwdModEnum Type;
} McAGFFFFwdModType;

typedef struct McAGFFExJntAxType
{	struct McCfgUnboundedArrayType JointAxisName;
} McAGFFExJntAxType;

typedef struct McAGFFParIdentUseInFType
{	plcstring TesttrajectoryData[251];
} McAGFFParIdentUseInFType;

typedef struct McAGFFParIdentUseOutFType
{	plcstring IdentificationResultData[251];
} McAGFFParIdentUseOutFType;

typedef struct McAGFFParIdentUseType
{	plcstring FileDevice[251];
	struct McAGFFParIdentUseInFType InputFiles;
	struct McAGFFParIdentUseOutFType OutputFiles;
} McAGFFParIdentUseType;

typedef struct McAGFFParIdentType
{	enum McAGFFParIdentEnum Type;
	struct McAGFFParIdentUseType Used;
} McAGFFParIdentType;

typedef struct McAGFFFFwdFltrType
{	enum McAGFFFFwdFltrEnum Type;
} McAGFFFFwdFltrType;

typedef struct McCfgAxGrpFeatFfType
{	struct McAGFFFFwdModType FeedForwardMode;
	float RiseTime;
	struct McAGFFExJntAxType ExcludedJointAxes;
	struct McAGFFParIdentType ParameterIdentification;
	struct McAGFFFFwdFltrType FeedForwardFilter;
} McCfgAxGrpFeatFfType;

typedef struct McAGFFHSProdFrmType
{	struct McCfgTransXYZType Translation;
	struct McCfgOrientType Orientation;
} McAGFFHSProdFrmType;

typedef struct McAGFFHSSysFrm5Type
{	struct McCfgTransXYZType Translation;
	struct McCfgOrientType Orientation;
	struct McAGFFHSProdFrmType ProductFrame;
} McAGFFHSSysFrm5Type;

typedef struct McAGFFHSSysFrm4Type
{	struct McCfgTransXYZType Translation;
	struct McCfgOrientType Orientation;
	struct McAGFFHSSysFrm5Type SystemFrame5;
} McAGFFHSSysFrm4Type;

typedef struct McAGFFHSSysFrm3Type
{	struct McCfgReferenceType FrameTable;
	unsigned short FrameIndex;
	struct McAGFFHSSysFrm4Type SystemFrame4;
} McAGFFHSSysFrm3Type;

typedef struct McAGFFHSSysFrm2Type
{	struct McCfgTransXYZType Translation;
	struct McCfgOrientType Orientation;
	struct McAGFFHSSysFrm3Type SystemFrame3;
} McAGFFHSSysFrm2Type;

typedef struct McAGFFHSSysFrm1Type
{	struct McCfgTransXYZType Translation;
	struct McCfgOrientType Orientation;
	struct McAGFFHSSysFrm2Type SystemFrame2;
} McAGFFHSSysFrm1Type;

typedef struct McAGFFHSBaseFrmType
{	struct McCfgTransXYZType Translation;
	struct McCfgOrientType Orientation;
} McAGFFHSBaseFrmType;

typedef struct McAGFFHSMachFrmType
{	struct McAGFFHSSysFrm1Type SystemFrame1;
	struct McAGFFHSBaseFrmType BaseFrame;
} McAGFFHSMachFrmType;

typedef struct McCfgAxGrpFeatFrmHierStdType
{	struct McAGFModalDatBxType ModalDataBehaviour;
	struct McAGFFHSMachFrmType MachineFrame;
} McCfgAxGrpFeatFrmHierStdType;

typedef struct McAGFFHCFrmPropMappType
{	plcstring BCS[251];
	plcstring PCS[251];
	plcstring SCS1[251];
	plcstring SCS2[251];
	plcstring SCS3[251];
	plcstring SCS4[251];
	plcstring SCS5[251];
} McAGFFHCFrmPropMappType;

typedef struct McAGFFHCFTStdFrmType
{	struct McCfgTransXYZType Translation;
	struct McCfgOrientType Orientation;
} McAGFFHCFTStdFrmType;

typedef struct McAGFFHCFTFrmTblFrmType
{	struct McCfgReferenceType FrameTable;
	unsigned short FrameIndex;
} McAGFFHCFTFrmTblFrmType;

typedef struct McAGFFHCFTPMFMoveTypType
{	enum McAGFFHCFTPMFMoveTypEnum Type;
} McAGFFHCFTPMFMoveTypType;

typedef struct McAGFFHCFTPMFType
{	struct McAGFFHCFTPMFMoveTypType MovementType;
	plcstring SlaveAxisName[251];
} McAGFFHCFTPMFType;

typedef struct McAGFFHCFTypeType
{	enum McAGFFHCFTypeEnum Type;
	struct McAGFFHCFTStdFrmType StandardFrame;
	struct McAGFFHCFTFrmTblFrmType FrameTableFrame;
	struct McAGFFHCFTPMFType ProgrammedMovingFrame;
} McAGFFHCFTypeType;

typedef struct McAGFFHCFramesType
{	plcstring ParentFrameName[251];
	plcstring Name[251];
	struct McAGFFHCFTypeType Type;
} McAGFFHCFramesType;

typedef struct McAGFFHCMachFrmType
{	plcstring Name[251];
	struct McCfgUnboundedArrayType Frame;
} McAGFFHCMachFrmType;

typedef struct McAGFFHCType
{	struct McAGFFHCFrmPropMappType FramePropertyMapping;
	struct McAGFFHCMachFrmType MachineFrame;
} McAGFFHCType;

typedef struct McCfgAxGrpFeatFrmHierCusType
{	struct McAGFModalDatBxType ModalDataBehaviour;
	struct McAGFFHCType CustomFrameHierarchy;
} McCfgAxGrpFeatFrmHierCusType;

typedef struct McAGFMFunIdxTypSngType
{	unsigned short Index;
} McAGFMFunIdxTypSngType;

typedef struct McAGFMFunIdxTypRngType
{	unsigned short IndexFrom;
	unsigned short IndexTo;
} McAGFMFunIdxTypRngType;

typedef struct McAGFMFunIdxTypType
{	enum McAGFMFunIdxTypEnum Type;
	struct McAGFMFunIdxTypSngType Single;
	struct McAGFMFunIdxTypRngType Range;
} McAGFMFunIdxTypType;

typedef struct McAGFMFunBlkType
{	enum McAGFMFunBlkEnum Type;
} McAGFMFunBlkType;

typedef struct McAGFMFunOutType
{	enum McAGFMFunOutEnum Type;
} McAGFMFunOutType;

typedef struct McAGFMFunInSimType
{	enum McAGFMFunInSimEnum Type;
} McAGFMFunInSimType;

typedef struct McAGFMFunType
{	struct McAGFMFunIdxTypType IndexType;
	struct McAGFMFunBlkType Blocking;
	struct McAGFMFunOutType Output;
	struct McAGFMFunInSimType InSimulation;
	plcstring PVMapping[251];
	plcstring Counter[251];
} McAGFMFunType;

typedef struct McCfgAxGrpFeatMFunType
{	struct McAGFModalDatBxType ModalDataBehaviour;
	struct McCfgUnboundedArrayType MFunction;
} McCfgAxGrpFeatMFunType;

typedef struct McAGFPDCalcInSelByNameType
{	plcstring FrameName[251];
} McAGFPDCalcInSelByNameType;

typedef struct McAGFPDCalcInType
{	enum McAGFPDCalcInEnum Type;
	struct McAGFPDCalcInSelByNameType SelectedByName;
} McAGFPDCalcInType;

typedef struct McAGFPDPathTypCartPathType
{	struct McAGFPDCalcInType CalculatedIn;
} McAGFPDPathTypCartPathType;

typedef struct McAGFPDPathTypOrientPathType
{	struct McAGFPDCalcInType CalculatedIn;
} McAGFPDPathTypOrientPathType;

typedef struct McAGFPDPathTypCusPhsAxPathType
{	struct McCfgUnboundedArrayType AxisName;
} McAGFPDPathTypCusPhsAxPathType;

typedef struct McAGFPDPathTypType
{	enum McAGFPDPathTypEnum Type;
	struct McAGFPDPathTypCartPathType CartesianPath;
	struct McAGFPDPathTypOrientPathType OrientationPath;
	struct McAGFPDPathTypCusPhsAxPathType CustomPhysicalAxesPath;
} McAGFPDPathTypType;

typedef struct McAGFPDPathLimIntVelType
{	enum McAGFPDPathLimIntVelEnum Type;
	struct McCfgLimVelBaseType Basic;
} McAGFPDPathLimIntVelType;

typedef struct McAGFPDPathLimIntAccType
{	enum McAGFPDPathLimIntAccEnum Type;
	struct McCfgLimAccBaseType Basic;
} McAGFPDPathLimIntAccType;

typedef struct McAGFPDPathLimIntDecType
{	enum McAGFPDPathLimIntDecEnum Type;
	struct McCfgLimDecBaseType Basic;
} McAGFPDPathLimIntDecType;

typedef struct McAGFPDPathLimIntJerkType
{	enum McAGFPDPathLimIntJerkEnum Type;
	struct McCfgLimJerkBaseType Basic;
} McAGFPDPathLimIntJerkType;

typedef struct McAGFPDPathLimIntType
{	struct McAGFPDPathLimIntVelType Velocity;
	struct McAGFPDPathLimIntAccType Acceleration;
	struct McAGFPDPathLimIntDecType Deceleration;
	struct McAGFPDPathLimIntJerkType Jerk;
} McAGFPDPathLimIntType;

typedef struct McAGFPDPathLimType
{	enum McAGFPDPathLimEnum Type;
	struct McAGFPDPathLimIntType Internal;
	struct McCfgExtLimRefType External;
} McAGFPDPathLimType;

typedef struct McAGFPDPathType
{	plcstring Name[251];
	struct McAGFPDPathTypType Type;
	struct McAGFPDPathLimType PathLimits;
} McAGFPDPathType;

typedef struct McCfgAxGrpFeatPathDefType
{	struct McAGFModalDatBxType ModalDataBehaviour;
	struct McCfgUnboundedArrayType Path;
} McCfgAxGrpFeatPathDefType;

typedef struct McAGFSSpdlType
{	plcstring SlaveAxisName[251];
} McAGFSSpdlType;

typedef struct McCfgAxGrpFeatSpindlesType
{	struct McAGFModalDatBxType ModalDataBehaviour;
	struct McCfgUnboundedArrayType Spindle;
} McCfgAxGrpFeatSpindlesType;

typedef struct McAGFTToolToolTblType
{	struct McCfgReferenceType ToolTable;
	plcstring ToolIdentifier[251];
} McAGFTToolToolTblType;

typedef struct McAGFTToolSngToolType
{	struct McCfgReferenceType Tool;
	struct McCfgReferenceType DynamicParameter;
} McAGFTToolSngToolType;

typedef struct McAGFTToolType
{	enum McAGFTToolEnum Type;
	struct McAGFTToolToolTblType ToolTable;
	struct McAGFTToolSngToolType SingleTool;
} McAGFTToolType;

typedef struct McCfgAxGrpFeatToolType
{	struct McAGFModalDatBxType ModalDataBehaviour;
	struct McAGFTToolType Tools;
} McCfgAxGrpFeatToolType;

typedef struct McAGFWSelfColDetectType
{	enum McAGFWSelfColDetectEnum Type;
} McAGFWSelfColDetectType;

typedef struct McAGFWFlgWsEnType
{	struct McCfgReferenceType WorkspaceReference;
} McAGFWFlgWsEnType;

typedef struct McAGFWFlgWsType
{	enum McAGFWFlgWsEnum Type;
	struct McAGFWFlgWsEnType Enabled;
} McAGFWFlgWsType;

typedef struct McCfgAxGrpFeatWsmType
{	struct McAGFModalDatBxType ModalDataBehaviour;
	struct McCfgReferenceType WorkspaceReference;
	struct McAGFWSelfColDetectType SelfCollisionDetection;
	struct McAGFWFlgWsType FlangeWorkspace;
} McCfgAxGrpFeatWsmType;

typedef struct McAGFEPCAGrpIntrplExType
{	struct McCfgUnboundedArrayType AxisName;
} McAGFEPCAGrpIntrplExType;

typedef struct McAGFEPCAGrpStopExType
{	struct McCfgUnboundedArrayType AxisReference;
} McAGFEPCAGrpStopExType;

typedef struct McAGFEPCAGrpOvrExType
{	struct McCfgUnboundedArrayType AxisReference;
} McAGFEPCAGrpOvrExType;

typedef struct McAGFEPCAGrpErrStopExType
{	struct McCfgUnboundedArrayType AxisReference;
} McAGFEPCAGrpErrStopExType;

typedef struct McCfgAxGrpFeatExPathAxType
{	struct McAGFModalDatBxType ModalDataBehaviour;
	struct McAGFEPCAGrpIntrplExType GroupInterpolationExclusion;
	struct McAGFEPCAGrpStopExType GroupStopExclusion;
	struct McAGFEPCAGrpOvrExType GroupOverrideExclusion;
	struct McAGFEPCAGrpErrStopExType GroupErrorStopExclusion;
} McCfgAxGrpFeatExPathAxType;

typedef struct McAGFPTrgTypAcpDigInType
{	enum McAGFPTrgTypAcpDigInEnum Type;
} McAGFPTrgTypAcpDigInType;

typedef struct McAGFPTrgTypAcpEdgType
{	enum McAGFPTrgTypAcpEdgEnum Type;
} McAGFPTrgTypAcpEdgType;

typedef struct McAGFPTrgTypAcpType
{	struct McCfgReferenceType AxisReference;
	struct McAGFPTrgTypAcpDigInType DigitalInput;
	struct McAGFPTrgTypAcpEdgType Edge;
} McAGFPTrgTypAcpType;

typedef struct McAGFPTrgTypVarEdgType
{	enum McAGFPTrgTypVarEdgEnum Type;
} McAGFPTrgTypVarEdgType;

typedef struct McAGFPTrgTypVarTimeStampUseType
{	plcstring PVMapping[251];
} McAGFPTrgTypVarTimeStampUseType;

typedef struct McAGFPTrgTypVarTimeStampType
{	enum McAGFPTrgTypVarTimeStampEnum Type;
	struct McAGFPTrgTypVarTimeStampUseType Used;
} McAGFPTrgTypVarTimeStampType;

typedef struct McAGFPTrgTypVarType
{	plcstring PVMapping[251];
	struct McAGFPTrgTypVarEdgType Edge;
	struct McAGFPTrgTypVarTimeStampType TimeStamp;
} McAGFPTrgTypVarType;

typedef struct McAGFPTrgTypType
{	enum McAGFPTrgTypEnum Type;
	struct McAGFPTrgTypAcpType ACOPOS;
	struct McAGFPTrgTypVarType Variable;
} McAGFPTrgTypType;

typedef struct McAGFPTrgType
{	plcstring Name[251];
	struct McAGFPTrgTypType Type;
} McAGFPTrgType;

typedef struct McAGFPTrgsType
{	struct McCfgUnboundedArrayType Trigger;
} McAGFPTrgsType;

typedef struct McCfgAxGrpFeatProbeType
{	struct McAGFPTrgsType Triggers;
} McCfgAxGrpFeatProbeType;

typedef struct McAGFSIGPredDistUseType
{	double Distance;
} McAGFSIGPredDistUseType;

typedef struct McAGFSIGPredDistType
{	enum McAGFSIGPredDistEnum Type;
	struct McAGFSIGPredDistUseType Used;
} McAGFSIGPredDistType;

typedef struct McAGFSIGPredTimeUseType
{	double Time;
} McAGFSIGPredTimeUseType;

typedef struct McAGFSIGPredTimeType
{	enum McAGFSIGPredTimeEnum Type;
	struct McAGFSIGPredTimeUseType Used;
} McAGFSIGPredTimeType;

typedef struct McAGFSIGPredType
{	struct McAGFSIGPredDistType Distance;
	struct McAGFSIGPredTimeType Time;
} McAGFSIGPredType;

typedef struct McAGFSIGAxDlyUsrDefTimeType
{	double Time;
} McAGFSIGAxDlyUsrDefTimeType;

typedef struct McAGFSIGAxDlyType
{	enum McAGFSIGAxDlyEnum Type;
	struct McAGFSIGAxDlyUsrDefTimeType UserDefinedTime;
} McAGFSIGAxDlyType;

typedef struct McAGFSIGSigMissedSigBxType
{	enum McAGFSIGSigMissedSigBxEnum Type;
} McAGFSIGSigMissedSigBxType;

typedef struct McAGFSIGSigsUnCfgSigType
{	struct McAGFSIGSigMissedSigBxType MissedSignalBehaviour;
} McAGFSIGSigsUnCfgSigType;

typedef struct McAGFSIGSigActMFunType
{	unsigned short Index;
} McAGFSIGSigActMFunType;

typedef struct McAGFSIGSigActType
{	enum McAGFSIGSigActEnum Type;
	struct McAGFSIGSigActMFunType MFunction;
} McAGFSIGSigActType;

typedef struct McAGFSIGSigReacTimeUseType
{	double Time;
} McAGFSIGSigReacTimeUseType;

typedef struct McAGFSIGSigReacTimeType
{	enum McAGFSIGSigReacTimeEnum Type;
	struct McAGFSIGSigReacTimeUseType Used;
} McAGFSIGSigReacTimeType;

typedef struct McAGFSIGSigMsPrcVarType
{	plcstring TimeStamp[251];
	plcstring TimeStampCounter[251];
} McAGFSIGSigMsPrcVarType;

typedef struct McAGFSIGSigMsPrcType
{	enum McAGFSIGSigMsPrcEnum Type;
	struct McAGFSIGSigMsPrcVarType Variable;
} McAGFSIGSigMsPrcType;

typedef struct McAGFSIGSigType
{	plcstring Name[251];
	struct McAGFSIGSigActType Action;
	struct McAGFSIGSigReacTimeType ReactionTime;
	struct McAGFSIGSigMsPrcType MicrosecondPrecision;
	unsigned short OutputShift;
	struct McAGFSIGSigMissedSigBxType MissedSignalBehaviour;
} McAGFSIGSigType;

typedef struct McAGFSIGSigsType
{	struct McAGFSIGSigsUnCfgSigType UnConfiguredSignals;
	struct McCfgUnboundedArrayType Signal;
} McAGFSIGSigsType;

typedef struct McCfgAxGrpFeatSigType
{	struct McAGFSIGPredType Prediction;
	struct McAGFSIGAxDlyType AxesDelay;
	struct McAGFSIGSigsType Signals;
} McCfgAxGrpFeatSigType;

typedef struct McAGF2DCCompTypJntAxType
{	struct McCfgReferenceType Source;
	struct McCfgReferenceType Compensated;
} McAGF2DCCompTypJntAxType;

typedef struct McAGF2DCCompTypType
{	enum McAGF2DCCompTypEnum Type;
	struct McAGF2DCCompTypJntAxType JointAxis;
} McAGF2DCCompTypType;

typedef struct McAGF2DCCompDatPtLstPtType
{	double Source;
	double Compensation;
} McAGF2DCCompDatPtLstPtType;

typedef struct McAGF2DCCompDatPtLstType
{	struct McCfgUnboundedArrayType Point;
} McAGF2DCCompDatPtLstType;

typedef struct McAGF2DCCompDatCSVFType
{	plcstring FileDevice[251];
	plcstring FileName[251];
} McAGF2DCCompDatCSVFType;

typedef struct McAGF2DCCompDatType
{	enum McAGF2DCCompDatEnum Type;
	struct McAGF2DCCompDatPtLstType PointsList;
	struct McAGF2DCCompDatCSVFType CSVFile;
} McAGF2DCCompDatType;

typedef struct McAGF2DCCompType
{	unsigned short ID;
	struct McAGF2DCCompTypType Type;
	struct McAGF2DCCompDatType Data;
} McAGF2DCCompType;

typedef struct McCfgAxGrpFeat2DCompType
{	struct McAGFModalDatBxType ModalDataBehaviour;
	struct McCfgUnboundedArrayType Compensation;
} McCfgAxGrpFeat2DCompType;

typedef struct McAGF3DCCompTypJntAxType
{	struct McCfgReferenceType Source1;
	struct McCfgReferenceType Source2;
	struct McCfgReferenceType Compensated;
} McAGF3DCCompTypJntAxType;

typedef struct McAGF3DCCompTypType
{	enum McAGF3DCCompTypEnum Type;
	struct McAGF3DCCompTypJntAxType JointAxis;
} McAGF3DCCompTypType;

typedef struct McAGF3DCCompDatPtLstPtType
{	double Source1;
	double Source2;
	double Compensation;
} McAGF3DCCompDatPtLstPtType;

typedef struct McAGF3DCCompDatPtLstType
{	struct McCfgUnboundedArrayType Point;
} McAGF3DCCompDatPtLstType;

typedef struct McAGF3DCCompDatCSVFType
{	plcstring FileDevice[251];
	plcstring FileName[251];
} McAGF3DCCompDatCSVFType;

typedef struct McAGF3DCCompDatType
{	enum McAGF3DCCompDatEnum Type;
	struct McAGF3DCCompDatPtLstType PointsList;
	struct McAGF3DCCompDatCSVFType CSVFile;
} McAGF3DCCompDatType;

typedef struct McAGF3DCCompType
{	unsigned short ID;
	struct McAGF3DCCompTypType Type;
	struct McAGF3DCCompDatType Data;
} McAGF3DCCompType;

typedef struct McCfgAxGrpFeat3DCompType
{	struct McAGFModalDatBxType ModalDataBehaviour;
	struct McCfgUnboundedArrayType Compensation;
} McCfgAxGrpFeat3DCompType;

typedef struct McAGFPPLDCnrType
{	double X;
	double Y;
} McAGFPPLDCnrType;

typedef struct McAGFPPRTCnrType
{	double X;
	double Y;
} McAGFPPRTCnrType;

typedef struct McAGFPPOFFmtSVGTrfWrkAreaType
{	struct McAGFPPLDCnrType LeftDownCorner;
	struct McAGFPPRTCnrType RightTopConner;
} McAGFPPOFFmtSVGTrfWrkAreaType;

typedef struct McAGFPPOFFmtSVGTrfType
{	enum McAGFPPOFFmtSVGTrfEnum Type;
	struct McAGFPPOFFmtSVGTrfWrkAreaType WorkingArea;
} McAGFPPOFFmtSVGTrfType;

typedef struct McAGFPPContSvgSupMfunType
{	unsigned long Enable;
	unsigned long Disable;
} McAGFPPContSvgSupMfunType;

typedef struct McAGFPPContSvgSupType
{	enum McAGFPPContSvgSupEnum Type;
	struct McAGFPPContSvgSupMfunType Mfunction;
} McAGFPPContSvgSupType;

typedef struct McAGFPPOFFmtSVGContMCSPathType
{	plcstring Color[251];
	unsigned long Width;
	plcstring GroupId[251];
	struct McAGFPPContSvgSupType Suppression;
} McAGFPPOFFmtSVGContMCSPathType;

typedef struct McAGFPPOFFmtSVGContType
{	enum McAGFPPOFFmtSVGContEnum Type;
	struct McAGFPPOFFmtSVGContMCSPathType MCSPath;
} McAGFPPOFFmtSVGContType;

typedef struct McAGFPPOFFmtSVGType
{	unsigned long Width;
	unsigned long Height;
	unsigned long Margin;
	struct McAGFPPOFFmtSVGTrfType Transformation;
	enum McAGFPPOFFmtSVGViewEnum View;
	struct McCfgUnboundedArrayType Content;
} McAGFPPOFFmtSVGType;

typedef struct McAGFPPOFFmtType
{	enum McAGFPPOFFmtEnum Type;
	struct McAGFPPOFFmtSVGType SVG;
} McAGFPPOFFmtType;

typedef struct McAGFPPOFType
{	plcstring FileDevice[251];
	plcstring FileName[251];
	plcstring FileStatus[251];
	plcstring Start[251];
	plcstring Stop[251];
	unsigned long FileSize;
	struct McAGFPPOFFmtType Format;
} McAGFPPOFType;

typedef struct McAGFPPOSFmtSVGPropAutType
{	unsigned short OutputIndex;
} McAGFPPOSFmtSVGPropAutType;

typedef struct McAGFPPOSFSVGPUTrfWrkAreaType
{	struct McAGFPPLDCnrType LeftDownCorner;
	struct McAGFPPRTCnrType RightTopConner;
} McAGFPPOSFSVGPUTrfWrkAreaType;

typedef struct McAGFPPOSFmtSVGPropUsrTrfType
{	enum McAGFPPOSFmtSVGPropUsrTrfEnum Type;
	struct McAGFPPOSFSVGPUTrfWrkAreaType WorkingArea;
} McAGFPPOSFmtSVGPropUsrTrfType;

typedef struct McAGFPPOSFmtSVGPropUsrType
{	unsigned long Width;
	unsigned long Height;
	unsigned long Margin;
	struct McAGFPPOSFmtSVGPropUsrTrfType Transformation;
} McAGFPPOSFmtSVGPropUsrType;

typedef struct McAGFPPOSFmtSVGPropType
{	enum McAGFPPOSFmtSVGPropEnum Type;
	struct McAGFPPOSFmtSVGPropAutType Automatic;
	struct McAGFPPOSFmtSVGPropUsrType User;
} McAGFPPOSFmtSVGPropType;

typedef struct McAGFPPOSFmtSVGContMCSPathType
{	plcstring Color[251];
	unsigned long Width;
	plcstring GroupId[251];
	struct McAGFPPContSvgSupType Suppression;
} McAGFPPOSFmtSVGContMCSPathType;

typedef struct McAGFPPShapeCirType
{	unsigned long Radius;
} McAGFPPShapeCirType;

typedef struct McAGFPPShapeSquareType
{	unsigned long Width;
} McAGFPPShapeSquareType;

typedef struct McAGFPPShapeType
{	enum McAGFPPShapeEnum Type;
	struct McAGFPPShapeCirType Circle;
	struct McAGFPPShapeSquareType Square;
} McAGFPPShapeType;

typedef struct McAGFPPOSFmtSVGContActPosType
{	plcstring Color[251];
	plcstring GroupId[251];
	struct McAGFPPShapeType Shape;
} McAGFPPOSFmtSVGContActPosType;

typedef struct McAGFPPOSFmtSVGContType
{	enum McAGFPPOSFmtSVGContEnum Type;
	struct McAGFPPOSFmtSVGContMCSPathType MCSPath;
	struct McAGFPPOSFmtSVGContActPosType ActualPosition;
} McAGFPPOSFmtSVGContType;

typedef struct McAGFPPOSFmtSVGType
{	struct McAGFPPOSFmtSVGPropType Properties;
	enum McAGFPPOSFmtSVGViewEnum View;
	struct McCfgUnboundedArrayType Content;
} McAGFPPOSFmtSVGType;

typedef struct McAGFPPOSFmtType
{	enum McAGFPPOSFmtEnum Type;
	struct McAGFPPOSFmtSVGType SVG;
} McAGFPPOSFmtType;

typedef struct McAGFPPOSType
{	plcstring StreamOutput[251];
	plcstring StreamReady[251];
	plcstring ClearStream[251];
	struct McAGFPPOSFmtType Format;
} McAGFPPOSType;

typedef struct McAGFPPOutType
{	enum McAGFPPOutEnum Type;
	struct McAGFPPOFType File;
	struct McAGFPPOSType Stream;
} McAGFPPOutType;

typedef struct McCfgAxGrpFeatPathPreviewType
{	struct McCfgUnboundedArrayType Output;
} McCfgAxGrpFeatPathPreviewType;

typedef struct McAGFTTAlignType
{	enum McAGFTTAlignNonRpdMoveEnum NonRapidMovements;
	enum McAGFTTAlignRpdMoveEnum RapidMovements;
} McAGFTTAlignType;

typedef struct McAGFTTFrmPCSType
{	enum McAGFTTFrmPCSPlEnum Plane;
} McAGFTTFrmPCSType;

typedef struct McAGFTTFrmSelByNameType
{	plcstring FrameName[251];
	enum McAGFTTFrmSelByNamePlEnum Plane;
} McAGFTTFrmSelByNameType;

typedef struct McAGFTTFrmType
{	enum McAGFTTFrmEnum Type;
	struct McAGFTTFrmPCSType PCS;
	struct McAGFTTFrmSelByNameType SelectedByName;
} McAGFTTFrmType;

typedef struct McAGFTTTPTTOOEReacMFunType
{	unsigned short Index1;
	unsigned short Index2;
} McAGFTTTPTTOOEReacMFunType;

typedef struct McAGFTTTPTTOOEReacToolLiftType
{	double FeedRate;
	double LoweringDistance;
} McAGFTTTPTTOOEReacToolLiftType;

typedef struct McAGFTTTPTTOOEReacType
{	enum McAGFTTTPTTOOEReacEnum Type;
	struct McAGFTTTPTTOOEReacMFunType MFunction;
	struct McAGFTTTPTTOOEReacToolLiftType ToolLift;
} McAGFTTTPTTOOEReacType;

typedef struct McAGFTTTPTanToolOnOffEnType
{	struct McAGFTTTPTTOOEReacType Reaction;
} McAGFTTTPTanToolOnOffEnType;

typedef struct McAGFTTTPTanToolOnOffType
{	enum McAGFTTTPTanToolOnOffEnum Type;
	struct McAGFTTTPTanToolOnOffEnType Enabled;
} McAGFTTTPTanToolOnOffType;

typedef struct McAGFTTTPCTEReacMFunType
{	unsigned short Index1;
	unsigned short Index2;
} McAGFTTTPCTEReacMFunType;

typedef struct McAGFTTTPCTEReacToolLiftType
{	double FeedRate;
	double LiftingDistance;
} McAGFTTTPCTEReacToolLiftType;

typedef struct McAGFTTTPCTEReacType
{	enum McAGFTTTPCTEReacEnum Type;
	struct McAGFTTTPCTEReacMFunType MFunction;
	struct McAGFTTTPCTEReacToolLiftType ToolLift;
} McAGFTTTPCTEReacType;

typedef struct McAGFTTTPCnrTransEnType
{	double Angle;
	struct McAGFTTTPCTEReacType Reaction;
} McAGFTTTPCnrTransEnType;

typedef struct McAGFTTTPCnrTransType
{	enum McAGFTTTPCnrTransEnum Type;
	struct McAGFTTTPCnrTransEnType Enabled;
} McAGFTTTPCnrTransType;

typedef struct McAGFTTTPType
{	struct McAGFTTTPTanToolOnOffType TangentialToolOnOff;
	struct McAGFTTTPCnrTransType CornerTransition;
} McAGFTTTPType;

typedef struct McCfgAxGrpFeatTanToolType
{	struct McAGFModalDatBxType ModalDataBehaviour;
	struct McAGFTTAlignType Alignment;
	struct McAGFTTFrmType Frame;
	double Offset;
	struct McAGFTTTPType ToolProtection;
} McCfgAxGrpFeatTanToolType;

typedef struct McAGFTrkSyncGeomBasicType
{	double CartesianRadius;
} McAGFTrkSyncGeomBasicType;

typedef struct McAGFTrkSyncGeomType
{	enum McAGFTrkSyncGeomEnum Type;
	struct McAGFTrkSyncGeomBasicType Basic;
} McAGFTrkSyncGeomType;

typedef struct McAGFTrkTrqLimConsAppxType
{	double StepSize;
} McAGFTrkTrqLimConsAppxType;

typedef struct McAGFTrkTrqLimConsType
{	enum McAGFTrkTrqLimConsEnum Type;
	struct McAGFTrkTrqLimConsAppxType Approximation;
} McAGFTrkTrqLimConsType;

typedef struct McCfgAxGrpFeatTrkType
{	struct McAGFModalDatBxType ModalDataBehaviour;
	struct McAGFTrkSyncGeomType SynchronisationGeometry;
	struct McAGFTrkTrqLimConsType TorqueLimitConsideration;
} McCfgAxGrpFeatTrkType;

typedef struct McAGFPCXCoorUseType
{	struct McCfgReferenceType AxisReference;
} McAGFPCXCoorUseType;

typedef struct McAGFPCXCoorType
{	enum McAGFPCXCoorEnum Type;
	struct McAGFPCXCoorUseType Used;
} McAGFPCXCoorType;

typedef struct McAGFPCYCoorUseType
{	struct McCfgReferenceType AxisReference;
} McAGFPCYCoorUseType;

typedef struct McAGFPCYCoorType
{	enum McAGFPCYCoorEnum Type;
	struct McAGFPCYCoorUseType Used;
} McAGFPCYCoorType;

typedef struct McCfgAxGrpPipeCutType
{	struct McAGFModalDatBxType ModalDataBehaviour;
	struct McAGFPCXCoorType XCoordinate;
	struct McAGFPCYCoorType YCoordinate;
} McCfgAxGrpPipeCutType;

typedef struct McMSCSDSType
{	plcstring Dimensions[251];
} McMSCSDSType;

typedef struct McMSCSDescType
{	enum McMSCSDescEnum Type;
	struct McMSCSDSType Standard;
} McMSCSDescType;

typedef struct McMSCSJntAxType
{	unsigned short JointAxesCount;
} McMSCSJntAxType;

typedef struct McMSCSCNCCXYZType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
} McMSCSCNCCXYZType;

typedef struct McMSCSCNCCXYType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
} McMSCSCNCCXYType;

typedef struct McMSCSCNCCXZType
{	plcstring XCoordinateName[251];
	plcstring ZCoordinateName[251];
} McMSCSCNCCXZType;

typedef struct McMSCSCNCCYZType
{	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
} McMSCSCNCCYZType;

typedef struct McMSCSCNCCType
{	enum McMSCSCNCCEnum Type;
	struct McMSCSCNCCXYZType XYZ;
	struct McMSCSCNCCXYType XY;
	struct McMSCSCNCCXZType XZ;
	struct McMSCSCNCCYZType YZ;
} McMSCSCNCCType;

typedef struct McMSCSCNOCAnglesCoorType
{	plcstring Name[251];
} McMSCSCNOCAnglesCoorType;

typedef struct McMSCSCNOCAnglesType
{	struct McCfgUnboundedArrayType Coordinate;
} McMSCSCNOCAnglesType;

typedef struct McMSCSCNOCType
{	enum McMSCSCNOCEnum Type;
	struct McMSCSCNOCAnglesType Angles;
} McMSCSCNOCType;

typedef struct McMSCSCoorNameType
{	struct McMSCSCNCCType CartesianCoordinates;
	struct McMSCSCNOCType OrientationCoordinates;
} McMSCSCoorNameType;

typedef struct McMSCSWFrmMdlType
{	plcstring Description[251];
} McMSCSWFrmMdlType;

typedef struct McMSCSFunTrfStdDerType
{	plcstring DirectDerivative[251];
	plcstring InverseDerivative[251];
} McMSCSFunTrfStdDerType;

typedef struct McMSCSFunTrfStdType
{	plcstring Direct[251];
	plcstring Inverse[251];
	struct McMSCSFunTrfStdDerType Derivatives;
} McMSCSFunTrfStdType;

typedef struct McMSCSFunTrfType
{	enum McMSCSFunTrfEnum Type;
	struct McMSCSFunTrfStdType Standard;
} McMSCSFunTrfType;

typedef struct McMSCSFunWsMonType
{	plcstring WireFrameModel[251];
} McMSCSFunWsMonType;

typedef struct McMSCSFunType
{	struct McMSCSFunTrfType Transformations;
	struct McMSCSFunWsMonType WorkspaceMonitoring;
} McMSCSFunType;

typedef struct McMSCplgCLinCplgType
{	unsigned short SourceAxis;
	double SourceAxisUnits;
	unsigned short TargetJointAxis;
	double TargetJointAxisUnits;
} McMSCplgCLinCplgType;

typedef struct McMSCSCplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMSCSCplgType;

typedef struct McMSJntAxPosLimCfgJntAxLimType
{	double LowerLimit;
	double UpperLimit;
} McMSJntAxPosLimCfgJntAxLimType;

typedef struct McMSJntAxPosLimType
{	enum McMSJntAxPosLimEnum Type;
	struct McMSJntAxPosLimCfgJntAxLimType ConfigureJointAxesLimits;
} McMSJntAxPosLimType;

typedef struct McMSJnt15AxPosLimType
{	struct McMSJntAxPosLimType JointAxis[15];
} McMSJnt15AxPosLimType;

typedef struct McCfgMSCusStdType
{	struct McMSCSDescType Description;
	struct McMSCSJntAxType JointAxes;
	struct McMSCSCoorNameType CoordinateNames;
	struct McMSCSWFrmMdlType WireFrameModel;
	struct McMSCSFunType Functions;
	struct McMSCSCplgType Couplings;
	struct McMSJnt15AxPosLimType JointAxesPositionLimits;
} McCfgMSCusStdType;

typedef struct McMS2ACXYCoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
} McMS2ACXYCoorNameCmnType;

typedef struct McMS2ACXYCoorNameType
{	enum McMSCNEnum Type;
	struct McMS2ACXYCoorNameCmnType Common;
} McMS2ACXYCoorNameType;

typedef struct McMSFrmMdlStdEdgeCxnLinType
{	double Distance;
} McMSFrmMdlStdEdgeCxnLinType;

typedef struct McMSFrmMdlStdEdgePtType
{	double Distance;
} McMSFrmMdlStdEdgePtType;

typedef struct McMSFrmMdlStdEdgeType
{	enum McMSFrmMdlStdEdgeEnum Type;
	struct McMSFrmMdlStdEdgeCxnLinType ConnectionLine;
	struct McMSFrmMdlStdEdgePtType Point;
} McMSFrmMdlStdEdgeType;

typedef struct McMS2ACXYWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS2ACXYWFrmMdlStdType;

typedef struct McMS2ACXYWFrmMdlType
{	enum McMS2ACXYWFrmMdlEnum Type;
	struct McMS2ACXYWFrmMdlStdType Standard;
} McMS2ACXYWFrmMdlType;

typedef struct McMSCplg2LinCplgType
{	enum McMSCplg2LinCplgSrcAxEnum SourceAxis;
	double SourceAxisUnits;
	enum McMSCplg2LinCplgTgtJntAxEnum TargetJointAxis;
	double TargetJointAxisUnits;
} McMSCplg2LinCplgType;

typedef struct McMS2ACXYCplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS2ACXYCplgType;

typedef struct McMSJnt2AxPosLimType
{	struct McMSJntAxPosLimType JointAxis[2];
} McMSJnt2AxPosLimType;

typedef struct McCfgMS2AxCncXYType
{	struct McMS2ACXYCoorNameType CoordinatesNames;
	struct McMS2ACXYWFrmMdlType WireFrameModel;
	struct McMS2ACXYCplgType Couplings;
	struct McMSJnt2AxPosLimType JointAxesPositionLimits;
} McCfgMS2AxCncXYType;

typedef struct McMS2ACXZCoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring ZCoordinateName[251];
} McMS2ACXZCoorNameCmnType;

typedef struct McMS2ACXZCoorNameType
{	enum McMSCNEnum Type;
	struct McMS2ACXZCoorNameCmnType Common;
} McMS2ACXZCoorNameType;

typedef struct McMS2ACXZWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS2ACXZWFrmMdlStdType;

typedef struct McMS2ACXZWFrmMdlType
{	enum McMS2ACXZWFrmMdlEnum Type;
	struct McMS2ACXZWFrmMdlStdType Standard;
} McMS2ACXZWFrmMdlType;

typedef struct McMS2ACXZCplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS2ACXZCplgType;

typedef struct McCfgMS2AxCncXZType
{	struct McMS2ACXZCoorNameType CoordinatesNames;
	struct McMS2ACXZWFrmMdlType WireFrameModel;
	struct McMS2ACXZCplgType Couplings;
	struct McMSJnt2AxPosLimType JointAxesPositionLimits;
} McCfgMS2AxCncXZType;

typedef struct McMS2ACYZCoorNameCmnType
{	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
} McMS2ACYZCoorNameCmnType;

typedef struct McMS2ACYZCoorNameType
{	enum McMSCNEnum Type;
	struct McMS2ACYZCoorNameCmnType Common;
} McMS2ACYZCoorNameType;

typedef struct McMS2ACYZWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS2ACYZWFrmMdlStdType;

typedef struct McMS2ACYZWFrmMdlType
{	enum McMS2ACYZWFrmMdlEnum Type;
	struct McMS2ACYZWFrmMdlStdType Standard;
} McMS2ACYZWFrmMdlType;

typedef struct McMS2ACYZCplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS2ACYZCplgType;

typedef struct McCfgMS2AxCncYZType
{	struct McMS2ACYZCoorNameType CoordinatesNames;
	struct McMS2ACYZWFrmMdlType WireFrameModel;
	struct McMS2ACYZCplgType Couplings;
	struct McMSJnt2AxPosLimType JointAxesPositionLimits;
} McCfgMS2AxCncYZType;

typedef struct McMS3ACXYZCoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
} McMS3ACXYZCoorNameCmnType;

typedef struct McMS3ACXYZCoorNameType
{	enum McMSCNEnum Type;
	struct McMS3ACXYZCoorNameCmnType Common;
} McMS3ACXYZCoorNameType;

typedef struct McMS3ACXYZWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS3ACXYZWFrmMdlStdType;

typedef struct McMS3ACXYZWFrmMdlType
{	enum McMS3ACXYZWFrmMdlEnum Type;
	struct McMS3ACXYZWFrmMdlStdType Standard;
} McMS3ACXYZWFrmMdlType;

typedef struct McMSCplg3LinCplgType
{	enum McMSCplg3LinCplgSrcAxEnum SourceAxis;
	double SourceAxisUnits;
	enum McMSCplg3LinCplgTgtJntAxEnum TargetJointAxis;
	double TargetJointAxisUnits;
} McMSCplg3LinCplgType;

typedef struct McMS3ACXYZCplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS3ACXYZCplgType;

typedef struct McMSJnt3AxPosLimType
{	struct McMSJntAxPosLimType JointAxis[3];
} McMSJnt3AxPosLimType;

typedef struct McCfgMS3AxCncXYZType
{	struct McMS3ACXYZCoorNameType CoordinatesNames;
	struct McMS3ACXYZWFrmMdlType WireFrameModel;
	struct McMS3ACXYZCplgType Couplings;
	struct McMSJnt3AxPosLimType JointAxesPositionLimits;
} McCfgMS3AxCncXYZType;

typedef struct McMS3ACXZCDSDimType
{	struct McCfgTransXType TranslationFromBaseToQX;
	struct McCfgTransZType TranslationFromQXToQZ;
	struct McCfgTransXYZType TranslationFromQZToQC;
	struct McCfgTransXYZType TranslationFromQCToFlange;
} McMS3ACXZCDSDimType;

typedef struct McMSMdl3ZeroPosOffType
{	double JointAxis[3];
} McMSMdl3ZeroPosOffType;

typedef struct McMSMdl3CntDirType
{	enum McMSMdl3CntDirJntAxEnum JointAxis[3];
} McMSMdl3CntDirType;

typedef struct McMS3ACXZCDSType
{	struct McMS3ACXZCDSDimType Dimensions;
	struct McMSMdl3ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl3CntDirType ModelCountDirections;
} McMS3ACXZCDSType;

typedef struct McMS3ACXZCDescType
{	enum McMS3ACXZCDescEnum Type;
	struct McMS3ACXZCDSType Standard;
} McMS3ACXZCDescType;

typedef struct McMS3ACXZCCoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
} McMS3ACXZCCoorNameCmnType;

typedef struct McMS3ACXZCCoorNameType
{	enum McMSCNEnum Type;
	struct McMS3ACXZCCoorNameCmnType Common;
} McMS3ACXZCCoorNameType;

typedef struct McMS3ACXZCWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType QZToQC;
	struct McMSFrmMdlStdEdgeType QCToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS3ACXZCWFrmMdlStdType;

typedef struct McMS3ACXZCWFrmMdlType
{	enum McMS3ACXZCWFrmMdlEnum Type;
	struct McMS3ACXZCWFrmMdlStdType Standard;
} McMS3ACXZCWFrmMdlType;

typedef struct McMS3ACXZCCplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS3ACXZCCplgType;

typedef struct McCfgMS3AxCncXZCType
{	struct McMS3ACXZCDescType Description;
	struct McMS3ACXZCCoorNameType CoordinatesNames;
	struct McMS3ACXZCWFrmMdlType WireFrameModel;
	struct McMS3ACXZCCplgType Couplings;
	struct McMSJnt3AxPosLimType JointAxesPositionLimits;
} McCfgMS3AxCncXZCType;

typedef struct McMS3ACXZBDSDimType
{	struct McCfgTransXType TranslationFromBaseToQX;
	struct McCfgTransZType TranslationFromQXToQZ;
	struct McCfgTransXZType TranslationFromQZToQB;
	struct McCfgTransXZType TranslationFromQBToFlange;
} McMS3ACXZBDSDimType;

typedef struct McMS3ACXZBDSType
{	struct McMS3ACXZBDSDimType Dimensions;
	struct McMSMdl3ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl3CntDirType ModelCountDirections;
} McMS3ACXZBDSType;

typedef struct McMS3ACXZBDescType
{	enum McMS3ACXZBDescEnum Type;
	struct McMS3ACXZBDSType Standard;
} McMS3ACXZBDescType;

typedef struct McMS3ACXZBCoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring BCoordinateName[251];
} McMS3ACXZBCoorNameCmnType;

typedef struct McMS3ACXZBCoorNameType
{	enum McMSCNEnum Type;
	struct McMS3ACXZBCoorNameCmnType Common;
} McMS3ACXZBCoorNameType;

typedef struct McMSTCPOFrmType
{	enum McMSTCPOFrmEnum Type;
} McMSTCPOFrmType;

typedef struct McMSTCPOType
{	struct McMSTCPOFrmType Frames;
} McMSTCPOType;

typedef struct McMS3ACXZBWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType QZToQB;
	struct McMSFrmMdlStdEdgeType QBToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS3ACXZBWFrmMdlStdType;

typedef struct McMS3ACXZBWFrmMdlType
{	enum McMS3ACXZBWFrmMdlEnum Type;
	struct McMS3ACXZBWFrmMdlStdType Standard;
} McMS3ACXZBWFrmMdlType;

typedef struct McMS3ACXZBCplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS3ACXZBCplgType;

typedef struct McCfgMS3AxCncXZBType
{	struct McMS3ACXZBDescType Description;
	struct McMS3ACXZBCoorNameType CoordinatesNames;
	struct McMSTCPOType TCPOrientation;
	struct McMS3ACXZBWFrmMdlType WireFrameModel;
	struct McMS3ACXZBCplgType Couplings;
	struct McMSJnt3AxPosLimType JointAxesPositionLimits;
} McCfgMS3AxCncXZBType;

typedef struct McMS4ACXYZBDSDimType
{	struct McCfgTransXType TranslationFromBaseToQX;
	struct McCfgTransYType TranslationFromQXToQY;
	struct McCfgTransZType TranslationFromQYToQZ;
	struct McCfgTransXYZType TranslationFromQZToQB;
	struct McCfgTransXYZType TranslationFromQBToFlange;
} McMS4ACXYZBDSDimType;

typedef struct McMSMdl4ZeroPosOffType
{	double JointAxis[4];
} McMSMdl4ZeroPosOffType;

typedef struct McMSMdl4CntDirType
{	enum McMSMdl4CntDirJntAxEnum JointAxis[4];
} McMSMdl4CntDirType;

typedef struct McMS4ACXYZBDSType
{	struct McMS4ACXYZBDSDimType Dimensions;
	struct McMSMdl4ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl4CntDirType ModelCountDirections;
} McMS4ACXYZBDSType;

typedef struct McMS4ACXYZBDescType
{	enum McMS4ACXYZBDescEnum Type;
	struct McMS4ACXYZBDSType Standard;
} McMS4ACXYZBDescType;

typedef struct McMS4ACXYZBCoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring BCoordinateName[251];
} McMS4ACXYZBCoorNameCmnType;

typedef struct McMS4ACXYZBCoorNameType
{	enum McMSCNEnum Type;
	struct McMS4ACXYZBCoorNameCmnType Common;
} McMS4ACXYZBCoorNameType;

typedef struct McMS4ACXYZBWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType QZToQB;
	struct McMSFrmMdlStdEdgeType QBToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS4ACXYZBWFrmMdlStdType;

typedef struct McMS4ACXYZBWFrmMdlType
{	enum McMS4ACXYZBWFrmMdlEnum Type;
	struct McMS4ACXYZBWFrmMdlStdType Standard;
} McMS4ACXYZBWFrmMdlType;

typedef struct McMSCplg4LinCplgType
{	enum McMSCplg4LinCplgSrcAxEnum SourceAxis;
	double SourceAxisUnits;
	enum McMSCplg4LinCplgTgtJntAxEnum TargetJointAxis;
	double TargetJointAxisUnits;
} McMSCplg4LinCplgType;

typedef struct McMS4ACXYZBCplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS4ACXYZBCplgType;

typedef struct McMSJnt4AxPosLimType
{	struct McMSJntAxPosLimType JointAxis[4];
} McMSJnt4AxPosLimType;

typedef struct McCfgMS4AxCncXYZBType
{	struct McMS4ACXYZBDescType Description;
	struct McMS4ACXYZBCoorNameType CoordinatesNames;
	struct McMSTCPOType TCPOrientation;
	struct McMS4ACXYZBWFrmMdlType WireFrameModel;
	struct McMS4ACXYZBCplgType Couplings;
	struct McMSJnt4AxPosLimType JointAxesPositionLimits;
} McCfgMS4AxCncXYZBType;

typedef struct McMS4ACXYZCDSDimType
{	struct McCfgTransXType TranslationFromBaseToQX;
	struct McCfgTransYType TranslationFromQXToQY;
	struct McCfgTransZType TranslationFromQYToQZ;
	struct McCfgTransXYZType TranslationFromQZToQC;
	struct McCfgTransXYZType TranslationFromQCToFlange;
} McMS4ACXYZCDSDimType;

typedef struct McMS4ACXYZCDSType
{	struct McMS4ACXYZCDSDimType Dimensions;
	struct McMSMdl4ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl4CntDirType ModelCountDirections;
} McMS4ACXYZCDSType;

typedef struct McMS4ACXYZCDescType
{	enum McMS4ACXYZCDescEnum Type;
	struct McMS4ACXYZCDSType Standard;
} McMS4ACXYZCDescType;

typedef struct McMS4ACXYZCCoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring CCoordinateName[251];
} McMS4ACXYZCCoorNameCmnType;

typedef struct McMS4ACXYZCCoorNameType
{	enum McMSCNEnum Type;
	struct McMS4ACXYZCCoorNameCmnType Common;
} McMS4ACXYZCCoorNameType;

typedef struct McMS4ACXYZCWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType QZToQC;
	struct McMSFrmMdlStdEdgeType QCToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS4ACXYZCWFrmMdlStdType;

typedef struct McMS4ACXYZCWFrmMdlType
{	enum McMS4ACXYZCWFrmMdlEnum Type;
	struct McMS4ACXYZCWFrmMdlStdType Standard;
} McMS4ACXYZCWFrmMdlType;

typedef struct McMS4ACXYZCCplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS4ACXYZCCplgType;

typedef struct McCfgMS4AxCncXYZCType
{	struct McMS4ACXYZCDescType Description;
	struct McMS4ACXYZCCoorNameType CoordinatesNames;
	struct McMSTCPOType TCPOrientation;
	struct McMS4ACXYZCWFrmMdlType WireFrameModel;
	struct McMS4ACXYZCCplgType Couplings;
	struct McMSJnt4AxPosLimType JointAxesPositionLimits;
} McCfgMS4AxCncXYZCType;

typedef struct McMS5ACXYZBADSDimType
{	struct McCfgTransXType TranslationFromBaseToQX;
	struct McCfgTransYType TranslationFromQXToQY;
	struct McCfgTransZType TranslationFromQYToQZ;
	struct McCfgTransXYZType TranslationFromQZToQB;
	struct McCfgTransXYZType TranslationFromQBToQA;
	struct McCfgTransXYZType TranslationFromQAToFlange;
} McMS5ACXYZBADSDimType;

typedef struct McMSMdl5ZeroPosOffType
{	double JointAxis[5];
} McMSMdl5ZeroPosOffType;

typedef struct McMSMdl5CntDirType
{	enum McMSMdl5CntDirJntAxEnum JointAxis[5];
} McMSMdl5CntDirType;

typedef struct McMS5ACXYZBADSType
{	struct McMS5ACXYZBADSDimType Dimensions;
	struct McMSMdl5ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl5CntDirType ModelCountDirections;
} McMS5ACXYZBADSType;

typedef struct McMS5ACXYZBADescType
{	enum McMS5ACXYZBADescEnum Type;
	struct McMS5ACXYZBADSType Standard;
} McMS5ACXYZBADescType;

typedef struct McMS5ACXYZBACoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring CCoordinateName[251];
	plcstring ACoordinateName[251];
} McMS5ACXYZBACoorNameCmnType;

typedef struct McMS5ACXYZBACoorNameType
{	enum McMSCNEnum Type;
	struct McMS5ACXYZBACoorNameCmnType Common;
} McMS5ACXYZBACoorNameType;

typedef struct McMS5ACXYZBAWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType QZToQB;
	struct McMSFrmMdlStdEdgeType QBToQA;
	struct McMSFrmMdlStdEdgeType QAToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS5ACXYZBAWFrmMdlStdType;

typedef struct McMS5ACXYZBAWFrmMdlType
{	enum McMS5ACXYZBAWFrmMdlEnum Type;
	struct McMS5ACXYZBAWFrmMdlStdType Standard;
} McMS5ACXYZBAWFrmMdlType;

typedef struct McMSCplg5LinCplgType
{	enum McMSCplg5LinCplgSrcAxEnum SourceAxis;
	double SourceAxisUnits;
	enum McMSCplg5LinCplgTgtJntAxEnum TargetJointAxis;
	double TargetJointAxisUnits;
} McMSCplg5LinCplgType;

typedef struct McMS5ACXYZBACplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS5ACXYZBACplgType;

typedef struct McMSJnt5AxPosLimType
{	struct McMSJntAxPosLimType JointAxis[5];
} McMSJnt5AxPosLimType;

typedef struct McCfgMS5AxCncXYZBAType
{	struct McMS5ACXYZBADescType Description;
	struct McMS5ACXYZBACoorNameType CoordinatesNames;
	struct McMSTCPOType TCPOrientation;
	struct McMS5ACXYZBAWFrmMdlType WireFrameModel;
	struct McMS5ACXYZBACplgType Couplings;
	struct McMSJnt5AxPosLimType JointAxesPositionLimits;
} McCfgMS5AxCncXYZBAType;

typedef struct McMS5ACXYZCADSDimType
{	struct McCfgTransXType TranslationFromBaseToQX;
	struct McCfgTransYType TranslationFromQXToQY;
	struct McCfgTransZType TranslationFromQYToQZ;
	struct McCfgTransXYZType TranslationFromQZToQC;
	struct McCfgTransXYZType TranslationFromQCToQA;
	struct McCfgTransXYZType TranslationFromQAToFlange;
} McMS5ACXYZCADSDimType;

typedef struct McMS5ACXYZCADSType
{	struct McMS5ACXYZCADSDimType Dimensions;
	struct McMSMdl5ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl5CntDirType ModelCountDirections;
} McMS5ACXYZCADSType;

typedef struct McMS5ACXYZCADescType
{	enum McMS5ACXYZCADescEnum Type;
	struct McMS5ACXYZCADSType Standard;
} McMS5ACXYZCADescType;

typedef struct McMS5ACXYZCACoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring CCoordinateName[251];
	plcstring ACoordinateName[251];
} McMS5ACXYZCACoorNameCmnType;

typedef struct McMS5ACXYZCACoorNameType
{	enum McMSCNEnum Type;
	struct McMS5ACXYZCACoorNameCmnType Common;
} McMS5ACXYZCACoorNameType;

typedef struct McMS5ACXYZCAWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType QZToQC;
	struct McMSFrmMdlStdEdgeType QCToQA;
	struct McMSFrmMdlStdEdgeType QAToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS5ACXYZCAWFrmMdlStdType;

typedef struct McMS5ACXYZCAWFrmMdlType
{	enum McMS5ACXYZCAWFrmMdlEnum Type;
	struct McMS5ACXYZCAWFrmMdlStdType Standard;
} McMS5ACXYZCAWFrmMdlType;

typedef struct McMS5ACXYZCACplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS5ACXYZCACplgType;

typedef struct McCfgMS5AxCncXYZCAType
{	struct McMS5ACXYZCADescType Description;
	struct McMS5ACXYZCACoorNameType CoordinatesNames;
	struct McMS5ACXYZCAWFrmMdlType WireFrameModel;
	struct McMS5ACXYZCACplgType Couplings;
	struct McMSJnt5AxPosLimType JointAxesPositionLimits;
} McCfgMS5AxCncXYZCAType;

typedef struct McMS6ACZXYBCADSDimType
{	struct McCfgTransZType TranslationFromBaseToQZ;
	struct McCfgTransXType TranslationFromQZToQX;
	struct McCfgTransYType TranslationFromQXToQY;
	struct McCfgTransXYZType TranslationFromQYToQB;
	struct McCfgTransXYZType TranslationFromQBToQC;
	struct McCfgTransXYZType TranslationFromQCToQA;
	struct McCfgTransXYZType TranslationFromQAToFlange;
} McMS6ACZXYBCADSDimType;

typedef struct McMSMdl6ZeroPosOffType
{	double JointAxis[6];
} McMSMdl6ZeroPosOffType;

typedef struct McMSMdl6CntDirType
{	enum McMSMdl6CntDirJntAxEnum JointAxis[6];
} McMSMdl6CntDirType;

typedef struct McMS6ACZXYBCADSType
{	struct McMS6ACZXYBCADSDimType Dimensions;
	struct McMSMdl6ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl6CntDirType ModelCountDirections;
} McMS6ACZXYBCADSType;

typedef struct McMS6ACZXYBCADescType
{	enum McMS6ACZXYBCADescEnum Type;
	struct McMS6ACZXYBCADSType Standard;
} McMS6ACZXYBCADescType;

typedef struct McMS6ACZXYBCACoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring ACoordinateName[251];
	plcstring BCoordinateName[251];
	plcstring CCoordinateName[251];
} McMS6ACZXYBCACoorNameCmnType;

typedef struct McMS6ACZXYBCACoorNameType
{	enum McMSCNEnum Type;
	struct McMS6ACZXYBCACoorNameCmnType Common;
} McMS6ACZXYBCACoorNameType;

typedef struct McMS6ACZXYBCAWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType QYToQB;
	struct McMSFrmMdlStdEdgeType QBToQC;
	struct McMSFrmMdlStdEdgeType QCToQA;
	struct McMSFrmMdlStdEdgeType QAToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS6ACZXYBCAWFrmMdlStdType;

typedef struct McMS6ACZXYBCAWFrmMdlType
{	enum McMS6ACZXYBCAWFrmMdlEnum Type;
	struct McMS6ACZXYBCAWFrmMdlStdType Standard;
} McMS6ACZXYBCAWFrmMdlType;

typedef struct McMSCplg6LinCplgType
{	enum McMSCplg6LinCplgSrcAxEnum SourceAxis;
	double SourceAxisUnits;
	enum McMSCplg6LinCplgTgtJntAxEnum TargetJointAxis;
	double TargetJointAxisUnits;
} McMSCplg6LinCplgType;

typedef struct McMS6ACZXYBCACplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS6ACZXYBCACplgType;

typedef struct McMSJnt6AxPosLimType
{	struct McMSJntAxPosLimType JointAxis[6];
} McMSJnt6AxPosLimType;

typedef struct McCfgMS6AxCncZXYBCAType
{	struct McMS6ACZXYBCADescType Description;
	struct McMS6ACZXYBCACoorNameType CoordinatesNames;
	struct McMS6ACZXYBCAWFrmMdlType WireFrameModel;
	struct McMS6ACZXYBCACplgType Couplings;
	struct McMSJnt6AxPosLimType JointAxesPositionLimits;
} McCfgMS6AxCncZXYBCAType;

typedef struct McMS4ASADSDimTransFromQ1ToQ2Type
{	double XY;
	double Z;
} McMS4ASADSDimTransFromQ1ToQ2Type;

typedef struct McMS4ASADSDimTransFromQ2ToQZType
{	double XY;
	double Z;
} McMS4ASADSDimTransFromQ2ToQZType;

typedef struct McMS4ASADSDimType
{	struct McCfgTransXYZType TranslationFromBaseToQ1;
	struct McMS4ASADSDimTransFromQ1ToQ2Type TranslationFromQ1ToQ2;
	struct McMS4ASADSDimTransFromQ2ToQZType TranslationFromQ2ToQZ;
	struct McCfgTransZType TranslationFromQZToQC;
	struct McCfgTransXYZType TranslationFromQCToFlange;
} McMS4ASADSDimType;

typedef struct McMS4ASADSType
{	struct McMS4ASADSDimType Dimensions;
	struct McMSMdl4ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl4CntDirType ModelCountDirections;
} McMS4ASADSType;

typedef struct McMS4ASADescType
{	enum McMS4ASADescEnum Type;
	struct McMS4ASADSType Standard;
} McMS4ASADescType;

typedef struct McMS4ASACoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring CCoordinateName[251];
} McMS4ASACoorNameCmnType;

typedef struct McMS4ASACoorNameType
{	enum McMSCNEnum Type;
	struct McMS4ASACoorNameCmnType Common;
} McMS4ASACoorNameType;

typedef struct McMS4ASAWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType Q1ToQ2;
	struct McMSFrmMdlStdEdgeType Q2ToQZ;
	struct McMSFrmMdlStdEdgeType QZToQC;
	struct McMSFrmMdlStdEdgeType QCToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS4ASAWFrmMdlStdType;

typedef struct McMS4ASAWFrmMdlType
{	enum McMS4ASAWFrmMdlEnum Type;
	struct McMS4ASAWFrmMdlStdType Standard;
} McMS4ASAWFrmMdlType;

typedef struct McMSDynMdlDynParTableType
{	struct McCfgReferenceType TableReference;
} McMSDynMdlDynParTableType;

typedef struct McMSDynMdlType
{	enum McMSDynMdlEnum Type;
	struct McMSDynMdlDynParTableType DynParTable;
} McMSDynMdlType;

typedef struct McMS4ASACplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS4ASACplgType;

typedef struct McMS4ASAMonPtType
{	enum McMS4ASAMonPtEnum Type;
} McMS4ASAMonPtType;

typedef struct McCfgMS4AxScaraAType
{	enum McMS4ASASceneViewerObjEnum SceneViewerObject;
	struct McMS4ASADescType Description;
	struct McMS4ASACoorNameType CoordinatesNames;
	struct McMSTCPOType TCPOrientation;
	struct McMS4ASAWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMS4ASACplgType Couplings;
	struct McMSJnt4AxPosLimType JointAxesPositionLimits;
	struct McMS4ASAMonPtType MonitoringPoints;
} McCfgMS4AxScaraAType;

typedef struct McMS2ADADSDBPltArmLinkPtType
{	double X;
	double Z;
} McMS2ADADSDBPltArmLinkPtType;

typedef struct McMS2ADADSDBPltType
{	struct McCfgTransXZType Center;
	struct McMS2ADADSDBPltArmLinkPtType ArmLinkPoint[2];
} McMS2ADADSDBPltType;

typedef struct McMSDeltaDSDArmType
{	double UpperArmLength;
	double LowerArmLength;
} McMSDeltaDSDArmType;

typedef struct McMS2ADADSDimArmType
{	struct McMSDeltaDSDArmType Arm[2];
} McMS2ADADSDimArmType;

typedef struct McMS2ADADSDEEPltArmLinkPtType
{	double X;
	double Z;
} McMS2ADADSDEEPltArmLinkPtType;

typedef struct McMS2ADADSDEEPltType
{	struct McMS2ADADSDEEPltArmLinkPtType ArmLinkPoint[2];
	struct McCfgTransXZType TranslationToFlange;
} McMS2ADADSDEEPltType;

typedef struct McMS2ADADSDimType
{	struct McMS2ADADSDBPltType BasePlatform;
	struct McMS2ADADSDimArmType Arms;
	struct McMS2ADADSDEEPltType EndEffectorPlatform;
} McMS2ADADSDimType;

typedef struct McMSMdl2ZeroPosOffType
{	double JointAxis[2];
} McMSMdl2ZeroPosOffType;

typedef struct McMSMdl2CntDirType
{	enum McMSMdl2CntDirJntAxEnum JointAxis[2];
} McMSMdl2CntDirType;

typedef struct McMS2ADADSType
{	struct McMS2ADADSDimType Dimensions;
	struct McMSMdl2ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl2CntDirType ModelCountDirections;
} McMS2ADADSType;

typedef struct McMS2ADADescType
{	enum McMS2ADADescEnum Type;
	struct McMS2ADADSType Standard;
} McMS2ADADescType;

typedef struct McMS2ADACoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring ZCoordinateName[251];
} McMS2ADACoorNameCmnType;

typedef struct McMS2ADACoorNameType
{	enum McMSCNEnum Type;
	struct McMS2ADACoorNameCmnType Common;
} McMS2ADACoorNameType;

typedef struct McMS2ADAWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType UpperArm1;
	struct McMSFrmMdlStdEdgeType LowerArm1;
	struct McMSFrmMdlStdEdgeType UpperArm2;
	struct McMSFrmMdlStdEdgeType LowerArm2;
	struct McMSFrmMdlStdEdgeType EndEffectorPlatformToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS2ADAWFrmMdlStdType;

typedef struct McMS2ADAWFrmMdlType
{	enum McMS2ADAWFrmMdlEnum Type;
	struct McMS2ADAWFrmMdlStdType Standard;
} McMS2ADAWFrmMdlType;

typedef struct McMS2ADACplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS2ADACplgType;

typedef struct McCfgMS2AxDeltaAType
{	enum McMS2ADASceneViewerObjEnum SceneViewerObject;
	struct McMS2ADADescType Description;
	struct McMS2ADACoorNameType CoordinatesNames;
	struct McMS2ADAWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMS2ADACplgType Couplings;
	struct McMSJnt2AxPosLimType JointAxesPositionLimits;
} McCfgMS2AxDeltaAType;

typedef struct McMS2ADBDSDimReacShtMntType
{	double PrimaryAngle;
	double PrimaryLength;
	double SecondaryAngle;
	double SecondaryLength;
} McMS2ADBDSDimReacShtMntType;

typedef struct McMS2ADBDSDimType
{	struct McCfgTransXZType BasePlatformCenter;
	double MotorMountRadius;
	double ToolConnectionPlatformRadius;
	double PrimaryArmLength;
	double SecondaryArmLength;
	struct McMS2ADBDSDimReacShtMntType ReactionShaftMounts;
	struct McCfgTransXZType TranslationToFlange;
} McMS2ADBDSDimType;

typedef struct McMS2ADBDSType
{	struct McMS2ADBDSDimType Dimensions;
	struct McMSMdl2ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl2CntDirType ModelCountDirections;
} McMS2ADBDSType;

typedef struct McMS2ADBDescType
{	enum McMS2ADBDescEnum Type;
	struct McMS2ADBDSType Standard;
} McMS2ADBDescType;

typedef struct McMS2ADBCoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring ZCoordinateName[251];
} McMS2ADBCoorNameCmnType;

typedef struct McMS2ADBCoorNameType
{	enum McMSCNEnum Type;
	struct McMS2ADBCoorNameCmnType Common;
} McMS2ADBCoorNameType;

typedef struct McMS2ADBWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType PrimaryArm;
	struct McMSFrmMdlStdEdgeType SecondaryArm;
	struct McMSFrmMdlStdEdgeType ToolConnectionPlatformToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS2ADBWFrmMdlStdType;

typedef struct McMS2ADBWFrmMdlType
{	enum McMS2ADBWFrmMdlEnum Type;
	struct McMS2ADBWFrmMdlStdType Standard;
} McMS2ADBWFrmMdlType;

typedef struct McMSDynLimDynParTablesType
{	struct McCfgReferenceType GearboxLimitsTableReference;
	struct McCfgReferenceType CrossSecLimTableReference;
} McMSDynLimDynParTablesType;

typedef struct McMSDynLimType
{	enum McMSDynLimEnum Type;
	struct McMSDynLimDynParTablesType DynParTables;
} McMSDynLimType;

typedef struct McMSLDJLPDJRJerkRedType
{	double Payloadkg;
	double JerkLimitReduction;
} McMSLDJLPDJRJerkRedType;

typedef struct McMSLDJLPDJRType
{	struct McCfgUnboundedArrayType JerkReduction;
} McMSLDJLPDJRType;

typedef struct McMSLoadDepJerkLimType
{	enum McMSLoadDepJerkLimEnum Type;
	struct McMSLDJLPDJRType PayloadDependentJerkReduction;
} McMSLoadDepJerkLimType;

typedef struct McMS2ADBCplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS2ADBCplgType;

typedef struct McMSDelta2DWrkRngStdType
{	double BaseToTop;
	double TopHeight;
	double MiddleHeight;
	double BottomHeight;
	double TopRadius;
	double MiddleRadius;
	double BottomRadius;
} McMSDelta2DWrkRngStdType;

typedef struct McMSD2DWRMAWEZZone1UseType
{	double Z1;
} McMSD2DWRMAWEZZone1UseType;

typedef struct McMSD2DWRMAWEZZone1Type
{	enum McMSD2DWRMAWEZZone1Enum Type;
	struct McMSD2DWRMAWEZZone1UseType Used;
} McMSD2DWRMAWEZZone1Type;

typedef struct McMSD2DWRMAWEZZone2UseType
{	double X2;
} McMSD2DWRMAWEZZone2UseType;

typedef struct McMSD2DWRMAWEZZone2Type
{	enum McMSD2DWRMAWEZZone2Enum Type;
	struct McMSD2DWRMAWEZZone2UseType Used;
} McMSD2DWRMAWEZZone2Type;

typedef struct McMSD2DWRMAWEZZone3UseType
{	double Z3;
	double R3;
} McMSD2DWRMAWEZZone3UseType;

typedef struct McMSD2DWRMAWEZZone3Type
{	enum McMSD2DWRMAWEZZone3Enum Type;
	struct McMSD2DWRMAWEZZone3UseType Used;
} McMSD2DWRMAWEZZone3Type;

typedef struct McMSD2DWRMainAreaWExZonesType
{	double MinimumAnglePrimaryArm;
	double MaximumAnglePrimaryArm;
	struct McMSD2DWRMAWEZZone1Type ExclusionZone1;
	struct McMSD2DWRMAWEZZone2Type ExclusionZone2;
	struct McMSD2DWRMAWEZZone3Type ExclusionZone3;
} McMSD2DWRMainAreaWExZonesType;

typedef struct McMSDelta2DWrkRngType
{	enum McMSDelta2DWrkRngEnum Type;
	struct McMSDelta2DWrkRngStdType Standard;
	struct McMSD2DWRMainAreaWExZonesType MainAreaWithExclusionZones;
} McMSDelta2DWrkRngType;

typedef struct McMS2ADBMonPtType
{	enum McMS2ADBMonPtEnum Type;
} McMS2ADBMonPtType;

typedef struct McCfgMS2AxDeltaBType
{	enum McMS2ADBSceneViewerObjEnum SceneViewerObject;
	struct McMS2ADBDescType Description;
	struct McMS2ADBCoorNameType CoordinatesNames;
	struct McMS2ADBWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMSDynLimType DynamicLimits;
	struct McMSLoadDepJerkLimType LoadDependentJerkLimits;
	struct McMS2ADBCplgType Couplings;
	struct McMSJnt2AxPosLimType JointAxesPositionLimits;
	struct McMSDelta2DWrkRngType WorkingRange;
	struct McMS2ADBMonPtType MonitoringPoints;
} McCfgMS2AxDeltaBType;

typedef struct McMSDeltaDSDBPArmLinkPtType
{	double Angle;
	double Radius;
	double Z;
} McMSDeltaDSDBPArmLinkPtType;

typedef struct McMS3ADADSDBPltType
{	struct McCfgTransXYZType Center;
	struct McMSDeltaDSDBPArmLinkPtType ArmLinkPoint[3];
} McMS3ADADSDBPltType;

typedef struct McMS3ADADSDimArmType
{	struct McMSDeltaDSDArmType Arm[3];
	double LowerArmPairDistance;
} McMS3ADADSDimArmType;

typedef struct McMSDeltaDSDEEPArmLinkPtType
{	double Radius;
	double Z;
} McMSDeltaDSDEEPArmLinkPtType;

typedef struct McMS3ADADSDEEPltType
{	struct McMSDeltaDSDEEPArmLinkPtType ArmLinkPoint[3];
	struct McCfgTransXYZType TranslationToFlange;
} McMS3ADADSDEEPltType;

typedef struct McMS3ADADSDimType
{	struct McMS3ADADSDBPltType BasePlatform;
	struct McMS3ADADSDimArmType Arms;
	struct McMS3ADADSDEEPltType EndEffectorPlatform;
} McMS3ADADSDimType;

typedef struct McMS3ADADSType
{	struct McMS3ADADSDimType Dimensions;
	struct McMSMdl3ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl3CntDirType ModelCountDirections;
} McMS3ADADSType;

typedef struct McMS3ADADescType
{	enum McMS3ADADescEnum Type;
	struct McMS3ADADSType Standard;
} McMS3ADADescType;

typedef struct McMS3ADACoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
} McMS3ADACoorNameCmnType;

typedef struct McMS3ADACoorNameType
{	enum McMSCNEnum Type;
	struct McMS3ADACoorNameCmnType Common;
} McMS3ADACoorNameType;

typedef struct McMS3ADAWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType UpperArm1;
	struct McMSFrmMdlStdEdgeType LowerArm1;
	struct McMSFrmMdlStdEdgeType UpperArm2;
	struct McMSFrmMdlStdEdgeType LowerArm2;
	struct McMSFrmMdlStdEdgeType UpperArm3;
	struct McMSFrmMdlStdEdgeType LowerArm3;
	struct McMSFrmMdlStdEdgeType EndEffectorPlatformToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS3ADAWFrmMdlStdType;

typedef struct McMS3ADAWFrmMdlType
{	enum McMS3ADAWFrmMdlEnum Type;
	struct McMS3ADAWFrmMdlStdType Standard;
} McMS3ADAWFrmMdlType;

typedef struct McMS3ADACplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS3ADACplgType;

typedef struct McCfgMS3AxDeltaAType
{	enum McMS3ADASceneViewerObjEnum SceneViewerObject;
	struct McMS3ADADescType Description;
	struct McMS3ADACoorNameType CoordinatesNames;
	struct McMS3ADAWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMSDynLimType DynamicLimits;
	struct McMSLoadDepJerkLimType LoadDependentJerkLimits;
	struct McMS3ADACplgType Couplings;
	struct McMSJnt3AxPosLimType JointAxesPositionLimits;
} McCfgMS3AxDeltaAType;

typedef struct McMS3ADXZBDSDBPltArmLinkPtType
{	double X;
	double Z;
} McMS3ADXZBDSDBPltArmLinkPtType;

typedef struct McMS3ADXZBDSDBPltType
{	struct McCfgTransXZType Center;
	struct McMS3ADXZBDSDBPltArmLinkPtType ArmLinkPoint[2];
} McMS3ADXZBDSDBPltType;

typedef struct McMS3ADXZBDSDimArmType
{	struct McMSDeltaDSDArmType Arm[2];
} McMS3ADXZBDSDimArmType;

typedef struct McMS3ADXZBDSDEEPltType
{	struct McCfgTransXZType TranslationToFlange;
} McMS3ADXZBDSDEEPltType;

typedef struct McMS3ADXZBDSDPPMType
{	struct McCfgTransXZType TranslationFromBaseToQ3;
	double Q3Radius;
	double BracketLength;
	enum McMS3ADXZBDSDPPMBrktMntArmEnum BracketMountingArm;
	enum McMS3ADXZBDSDPPMQ3ZeroPosEnum Q3ZeroPosition;
} McMS3ADXZBDSDPPMType;

typedef struct McMS3ADXZBDSDimType
{	struct McMS3ADXZBDSDBPltType BasePlatform;
	struct McMS3ADXZBDSDimArmType Arms;
	struct McMS3ADXZBDSDEEPltType EndEffectorPlatform;
	struct McMS3ADXZBDSDPPMType PassiveParallelMechanism;
} McMS3ADXZBDSDimType;

typedef struct McMS3ADXZBDSType
{	struct McMS3ADXZBDSDimType Dimensions;
	struct McMSMdl3ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl3CntDirType ModelCountDirections;
} McMS3ADXZBDSType;

typedef struct McMS3ADXZBDescType
{	enum McMS3ADXZBDescEnum Type;
	struct McMS3ADXZBDSType Standard;
} McMS3ADXZBDescType;

typedef struct McMS3ADXZBCoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring BCoordinateName[251];
} McMS3ADXZBCoorNameCmnType;

typedef struct McMS3ADXZBCoorNameType
{	enum McMSCNEnum Type;
	struct McMS3ADXZBCoorNameCmnType Common;
} McMS3ADXZBCoorNameType;

typedef struct McMS3ADXZBWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType UpperArm1;
	struct McMSFrmMdlStdEdgeType LowerArm1;
	struct McMSFrmMdlStdEdgeType UpperArm2;
	struct McMSFrmMdlStdEdgeType LowerArm2;
	struct McMSFrmMdlStdEdgeType EndEffectorPlatformToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
	struct McMSFrmMdlStdEdgeType Q3ToBracket;
	struct McMSFrmMdlStdEdgeType BracketToArm;
} McMS3ADXZBWFrmMdlStdType;

typedef struct McMS3ADXZBWFrmMdlType
{	enum McMS3ADXZBWFrmMdlEnum Type;
	struct McMS3ADXZBWFrmMdlStdType Standard;
} McMS3ADXZBWFrmMdlType;

typedef struct McMS3ADXZBCplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS3ADXZBCplgType;

typedef struct McCfgMS3AxDeltaXZBType
{	enum McMS3ADXZBSceneViewerObjEnum SceneViewerObject;
	struct McMS3ADXZBDescType Description;
	struct McMS3ADXZBCoorNameType CoordinatesNames;
	struct McMSTCPOType TCPOrientation;
	struct McMS3ADXZBWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMS3ADXZBCplgType Couplings;
	struct McMSJnt3AxPosLimType JointAxesPositionLimits;
} McCfgMS3AxDeltaXZBType;

typedef struct McMS3ADBDSDBPltType
{	struct McCfgTransXYZType Center;
	struct McMSDeltaDSDBPArmLinkPtType ArmLinkPoint[3];
} McMS3ADBDSDBPltType;

typedef struct McMS3ADBDSDAArmType
{	double ArmLength;
	double ArmOffset;
	double ArmAngle;
} McMS3ADBDSDAArmType;

typedef struct McMS3ADBDSDimArmType
{	struct McMS3ADBDSDAArmType Arm[3];
} McMS3ADBDSDimArmType;

typedef struct McMS3ADBDSDEEPltType
{	struct McMSDeltaDSDEEPArmLinkPtType ArmLinkPoint[3];
	struct McCfgTransXYZType TranslationToFlange;
} McMS3ADBDSDEEPltType;

typedef struct McMS3ADBDSDimType
{	struct McMS3ADBDSDBPltType BasePlatform;
	struct McMS3ADBDSDimArmType Arms;
	struct McMS3ADBDSDEEPltType EndEffectorPlatform;
} McMS3ADBDSDimType;

typedef struct McMS3ADBDSType
{	struct McMS3ADBDSDimType Dimensions;
	struct McMSMdl3ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl3CntDirType ModelCountDirections;
} McMS3ADBDSType;

typedef struct McMS3ADBDescType
{	enum McMS3ADBDescEnum Type;
	struct McMS3ADBDSType Standard;
} McMS3ADBDescType;

typedef struct McMS3ADBCoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
} McMS3ADBCoorNameCmnType;

typedef struct McMS3ADBCoorNameType
{	enum McMSCNEnum Type;
	struct McMS3ADBCoorNameCmnType Common;
} McMS3ADBCoorNameType;

typedef struct McMS3ADBWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType LinkPointToArm1;
	struct McMSFrmMdlStdEdgeType Arm1;
	struct McMSFrmMdlStdEdgeType LinkPointToArm2;
	struct McMSFrmMdlStdEdgeType Arm2;
	struct McMSFrmMdlStdEdgeType LinkPointToArm3;
	struct McMSFrmMdlStdEdgeType Arm3;
	struct McMSFrmMdlStdEdgeType EndEffectorPlatformToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS3ADBWFrmMdlStdType;

typedef struct McMS3ADBWFrmMdlType
{	enum McMS3ADBWFrmMdlEnum Type;
	struct McMS3ADBWFrmMdlStdType Standard;
} McMS3ADBWFrmMdlType;

typedef struct McMS3ADBCplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS3ADBCplgType;

typedef struct McCfgMS3AxDeltaBType
{	enum McMS3ADBSceneViewerObjEnum SceneViewerObject;
	struct McMS3ADBDescType Description;
	struct McMS3ADBCoorNameType CoordinatesNames;
	struct McMS3ADBWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMS3ADBCplgType Couplings;
	struct McMSJnt3AxPosLimType JointAxesPositionLimits;
} McCfgMS3AxDeltaBType;

typedef struct McMS3ADXZCDSDimReacShtMntType
{	double PrimaryAngle;
	double PrimaryLength;
	double SecondaryAngle;
	double SecondaryLength;
} McMS3ADXZCDSDimReacShtMntType;

typedef struct McMS3ADXZCDSDimType
{	struct McCfgTransXZType BasePlatformCenter;
	double MotorMountRadius;
	double ToolConnectionPlatformRadius;
	double PrimaryArmLength;
	double SecondaryArmLength;
	struct McMS3ADXZCDSDimReacShtMntType ReactionShaftMounts;
	struct McCfgTransXZType TranslationToFlange;
} McMS3ADXZCDSDimType;

typedef struct McMS3ADXZCDSType
{	struct McMS3ADXZCDSDimType Dimensions;
	struct McMSMdl3ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl3CntDirType ModelCountDirections;
} McMS3ADXZCDSType;

typedef struct McMS3ADXZCDescType
{	enum McMS3ADXZCDescEnum Type;
	struct McMS3ADXZCDSType Standard;
} McMS3ADXZCDescType;

typedef struct McMS3ADXZCCoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring CCoordinateName[251];
} McMS3ADXZCCoorNameCmnType;

typedef struct McMS3ADXZCCoorNameType
{	enum McMSCNEnum Type;
	struct McMS3ADXZCCoorNameCmnType Common;
} McMS3ADXZCCoorNameType;

typedef struct McMS3ADXZCWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType PrimaryArm;
	struct McMSFrmMdlStdEdgeType SecondaryArm;
	struct McMSFrmMdlStdEdgeType ToolConnectionPlatformToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS3ADXZCWFrmMdlStdType;

typedef struct McMS3ADXZCWFrmMdlType
{	enum McMS3ADXZCWFrmMdlEnum Type;
	struct McMS3ADXZCWFrmMdlStdType Standard;
} McMS3ADXZCWFrmMdlType;

typedef struct McMS3ADXZCCplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS3ADXZCCplgType;

typedef struct McMS3ADXZCMonPtType
{	enum McMS3ADXZCMonPtEnum Type;
} McMS3ADXZCMonPtType;

typedef struct McCfgMS3AxDeltaXZCType
{	enum McMS3ADXZCSceneViewerObjEnum SceneViewerObject;
	struct McMS3ADXZCDescType Description;
	struct McMS3ADXZCCoorNameType CoordinatesNames;
	struct McMS3ADXZCWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMSDynLimType DynamicLimits;
	struct McMSLoadDepJerkLimType LoadDependentJerkLimits;
	struct McMS3ADXZCCplgType Couplings;
	struct McMSJnt3AxPosLimType JointAxesPositionLimits;
	struct McMSDelta2DWrkRngType WorkingRange;
	struct McMS3ADXZCMonPtType MonitoringPoints;
} McCfgMS3AxDeltaXZCType;

typedef struct McMS4ADADSDBPltType
{	struct McCfgTransXYZType Center;
	struct McMSDeltaDSDBPArmLinkPtType ArmLinkPoint[3];
} McMS4ADADSDBPltType;

typedef struct McMS4ADADSDimArmType
{	struct McMSDeltaDSDArmType Arm[3];
	double LowerArmPairDistance;
} McMS4ADADSDimArmType;

typedef struct McMS4ADADSDEEPltType
{	struct McMSDeltaDSDEEPArmLinkPtType ArmLinkPoint[3];
	struct McCfgTransXYZType TranslationToFlange;
} McMS4ADADSDEEPltType;

typedef struct McMS4ADADSDimType
{	struct McMS4ADADSDBPltType BasePlatform;
	struct McMS4ADADSDimArmType Arms;
	struct McMS4ADADSDEEPltType EndEffectorPlatform;
} McMS4ADADSDimType;

typedef struct McMS4ADADSType
{	struct McMS4ADADSDimType Dimensions;
	struct McMSMdl4ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl4CntDirType ModelCountDirections;
} McMS4ADADSType;

typedef struct McMS4ADADescType
{	enum McMS4ADADescEnum Type;
	struct McMS4ADADSType Standard;
} McMS4ADADescType;

typedef struct McMS4ADACoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring CCoordinateName[251];
} McMS4ADACoorNameCmnType;

typedef struct McMS4ADACoorNameType
{	enum McMSCNEnum Type;
	struct McMS4ADACoorNameCmnType Common;
} McMS4ADACoorNameType;

typedef struct McMS4ADAWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType UpperArm1;
	struct McMSFrmMdlStdEdgeType LowerArm1;
	struct McMSFrmMdlStdEdgeType UpperArm2;
	struct McMSFrmMdlStdEdgeType LowerArm2;
	struct McMSFrmMdlStdEdgeType UpperArm3;
	struct McMSFrmMdlStdEdgeType LowerArm3;
	struct McMSFrmMdlStdEdgeType EndEffectorPlatformToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS4ADAWFrmMdlStdType;

typedef struct McMS4ADAWFrmMdlType
{	enum McMS4ADAWFrmMdlEnum Type;
	struct McMS4ADAWFrmMdlStdType Standard;
} McMS4ADAWFrmMdlType;

typedef struct McMS4ADACplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS4ADACplgType;

typedef struct McMSDeltaWrkRngStdType
{	double BaseToTop;
	double TopHeight;
	double MiddleHeight;
	double BottomHeight;
	double TopRadius;
	double MiddleRadius;
	double BottomRadius;
} McMSDeltaWrkRngStdType;

typedef struct McMSDeltaWrkRngType
{	enum McMSDeltaWrkRngEnum Type;
	struct McMSDeltaWrkRngStdType Standard;
} McMSDeltaWrkRngType;

typedef struct McCfgMS4AxDeltaAType
{	enum McMS4ADASceneViewerObjEnum SceneViewerObject;
	struct McMS4ADADescType Description;
	struct McMS4ADACoorNameType CoordinatesNames;
	struct McMSTCPOType TCPOrientation;
	struct McMS4ADAWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMSDynLimType DynamicLimits;
	struct McMSLoadDepJerkLimType LoadDependentJerkLimits;
	struct McMS4ADACplgType Couplings;
	struct McMSJnt4AxPosLimType JointAxesPositionLimits;
	struct McMSDeltaWrkRngType WorkingRange;
} McCfgMS4AxDeltaAType;

typedef struct McMS4ADBDSDBPltType
{	struct McCfgTransXYZType Center;
	struct McMSDeltaDSDBPArmLinkPtType ArmLinkPoint[3];
} McMS4ADBDSDBPltType;

typedef struct McMSDeltaDSDArmLinType
{	double ArmLength;
	double Z;
} McMSDeltaDSDArmLinType;

typedef struct McMS4ADBDSDimArmType
{	struct McMSDeltaDSDArmLinType Arm[3];
} McMS4ADBDSDimArmType;

typedef struct McMS4ADBDSDEEPltType
{	struct McMSDeltaDSDEEPArmLinkPtType ArmLinkPoint[3];
	struct McCfgTransXYZType TranslationToFlange;
} McMS4ADBDSDEEPltType;

typedef struct McMS4ADBDSDimType
{	struct McMS4ADBDSDBPltType BasePlatform;
	struct McMS4ADBDSDimArmType Arms;
	struct McMS4ADBDSDEEPltType EndEffectorPlatform;
} McMS4ADBDSDimType;

typedef struct McMS4ADBDSType
{	struct McMS4ADBDSDimType Dimensions;
	struct McMSMdl4ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl4CntDirType ModelCountDirections;
} McMS4ADBDSType;

typedef struct McMS4ADBDescType
{	enum McMS4ADBDescEnum Type;
	struct McMS4ADBDSType Standard;
} McMS4ADBDescType;

typedef struct McMS4ADBCoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring CCoordinateName[251];
} McMS4ADBCoorNameCmnType;

typedef struct McMS4ADBCoorNameType
{	enum McMSCNEnum Type;
	struct McMS4ADBCoorNameCmnType Common;
} McMS4ADBCoorNameType;

typedef struct McMS4ADBWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType LinkPointToArm1;
	struct McMSFrmMdlStdEdgeType Arm1;
	struct McMSFrmMdlStdEdgeType LinkPointToArm2;
	struct McMSFrmMdlStdEdgeType Arm2;
	struct McMSFrmMdlStdEdgeType LinkPointToArm3;
	struct McMSFrmMdlStdEdgeType Arm3;
	struct McMSFrmMdlStdEdgeType EndEffectorPlatformToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS4ADBWFrmMdlStdType;

typedef struct McMS4ADBWFrmMdlType
{	enum McMS4ADBWFrmMdlEnum Type;
	struct McMS4ADBWFrmMdlStdType Standard;
} McMS4ADBWFrmMdlType;

typedef struct McMS4ADBCplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS4ADBCplgType;

typedef struct McCfgMS4AxDeltaBType
{	enum McMS4ADBSceneViewerObjEnum SceneViewerObject;
	struct McMS4ADBDescType Description;
	struct McMS4ADBCoorNameType CoordinatesNames;
	struct McMSTCPOType TCPOrientation;
	struct McMS4ADBWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMS4ADBCplgType Couplings;
	struct McMSJnt4AxPosLimType JointAxesPositionLimits;
	struct McMSDeltaWrkRngType WorkingRange;
} McCfgMS4AxDeltaBType;

typedef struct McMS4ADCDSDBPArmLinkPtType
{	double Angle;
	double X;
	double Y;
	double Z;
} McMS4ADCDSDBPArmLinkPtType;

typedef struct McMS4ADCDSDBPltType
{	struct McCfgTransXYZType Center;
	struct McMS4ADCDSDBPArmLinkPtType ArmLinkPoint[3];
} McMS4ADCDSDBPltType;

typedef struct McMS4ADCDSDimArmType
{	struct McMSDeltaDSDArmType Arm[3];
} McMS4ADCDSDimArmType;

typedef struct McMS4ADCDSDEEPArmLinkPtType
{	double X;
	double Z;
} McMS4ADCDSDEEPArmLinkPtType;

typedef struct McMS4ADCDSDEEPltType
{	struct McMS4ADCDSDEEPArmLinkPtType ArmLinkPoint[3];
	struct McCfgTransXYZType TranslationToFlange;
} McMS4ADCDSDEEPltType;

typedef struct McMS4ADCDSDimType
{	struct McMS4ADCDSDBPltType BasePlatform;
	struct McMS4ADCDSDimArmType Arms;
	struct McMS4ADCDSDEEPltType EndEffectorPlatform;
} McMS4ADCDSDimType;

typedef struct McMS4ADCDSType
{	struct McMS4ADCDSDimType Dimensions;
	struct McMSMdl4ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl4CntDirType ModelCountDirections;
} McMS4ADCDSType;

typedef struct McMS4ADCDescType
{	enum McMS4ADCDescEnum Type;
	struct McMS4ADCDSType Standard;
} McMS4ADCDescType;

typedef struct McMS4ADCCoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring CCoordinateName[251];
} McMS4ADCCoorNameCmnType;

typedef struct McMS4ADCCoorNameType
{	enum McMSCNEnum Type;
	struct McMS4ADCCoorNameCmnType Common;
} McMS4ADCCoorNameType;

typedef struct McMS4ADCWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType UpperArm1;
	struct McMSFrmMdlStdEdgeType LowerArm1;
	struct McMSFrmMdlStdEdgeType UpperArm2;
	struct McMSFrmMdlStdEdgeType LowerArm2;
	struct McMSFrmMdlStdEdgeType UpperArm3;
	struct McMSFrmMdlStdEdgeType LowerArm3;
	struct McMSFrmMdlStdEdgeType EndEffectorPlatformToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS4ADCWFrmMdlStdType;

typedef struct McMS4ADCWFrmMdlType
{	enum McMS4ADCWFrmMdlEnum Type;
	struct McMS4ADCWFrmMdlStdType Standard;
} McMS4ADCWFrmMdlType;

typedef struct McMS4ADCCplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS4ADCCplgType;

typedef struct McCfgMS4AxDeltaCType
{	enum McMS4ADCSceneViewerObjEnum SceneViewerObject;
	struct McMS4ADCDescType Description;
	struct McMS4ADCCoorNameType CoordinatesNames;
	struct McMSTCPOType TCPOrientation;
	struct McMS4ADCWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMS4ADCCplgType Couplings;
	struct McMSJnt4AxPosLimType JointAxesPositionLimits;
	struct McMSDeltaWrkRngType WorkingRange;
} McCfgMS4AxDeltaCType;

typedef struct McMS5ADADSDimBasePltType
{	struct McCfgTransXYZType Center;
	struct McMSDeltaDSDBPArmLinkPtType ArmLinkPoint[3];
} McMS5ADADSDimBasePltType;

typedef struct McMS5ADADSDimArmType
{	struct McMSDeltaDSDArmType Arm[3];
	double LowerArmPairDistance;
} McMS5ADADSDimArmType;

typedef struct McMS5ADADSDimEndEffPltType
{	struct McMSDeltaDSDEEPArmLinkPtType ArmLinkPoint[3];
	struct McCfgTransXYZType TranslationToQC;
	struct McCfgTransXYZType TranslationFromQCToQA;
	struct McCfgTransXYZType TranslationFromQAToFlange;
} McMS5ADADSDimEndEffPltType;

typedef struct McMS5ADADSDimType
{	struct McMS5ADADSDimBasePltType BasePlatform;
	struct McMS5ADADSDimArmType Arms;
	struct McMS5ADADSDimEndEffPltType EndEffectorPlatform;
} McMS5ADADSDimType;

typedef struct McMS5ADADSType
{	struct McMS5ADADSDimType Dimensions;
	struct McMSMdl5ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl5CntDirType ModelCountDirections;
} McMS5ADADSType;

typedef struct McMS5ADADescType
{	enum McMS5ADADescEnum Type;
	struct McMS5ADADSType Standard;
} McMS5ADADescType;

typedef struct McMS5ADACoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring CCoordinateName[251];
	plcstring ACoordinateName[251];
} McMS5ADACoorNameCmnType;

typedef struct McMS5ADACoorNameType
{	enum McMSCNEnum Type;
	struct McMS5ADACoorNameCmnType Common;
} McMS5ADACoorNameType;

typedef struct McMS5ADAWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType UpperArm1;
	struct McMSFrmMdlStdEdgeType LowerArm1;
	struct McMSFrmMdlStdEdgeType UpperArm2;
	struct McMSFrmMdlStdEdgeType LowerArm2;
	struct McMSFrmMdlStdEdgeType UpperArm3;
	struct McMSFrmMdlStdEdgeType LowerArm3;
	struct McMSFrmMdlStdEdgeType EndEffectorPlatformToQC;
	struct McMSFrmMdlStdEdgeType QCToQA;
	struct McMSFrmMdlStdEdgeType QAToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS5ADAWFrmMdlStdType;

typedef struct McMS5ADAWFrmMdlType
{	enum McMS5ADAWFrmMdlEnum Type;
	struct McMS5ADAWFrmMdlStdType Standard;
} McMS5ADAWFrmMdlType;

typedef struct McMS5ADACplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS5ADACplgType;

typedef struct McCfgMS5AxDeltaAType
{	enum McMS5ADASceneViewerObjEnum SceneViewerObject;
	struct McMS5ADADescType Description;
	struct McMS5ADACoorNameType CoordinatesNames;
	struct McMSTCPOType TCPOrientation;
	struct McMS5ADAWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMSDynLimType DynamicLimits;
	struct McMSLoadDepJerkLimType LoadDependentJerkLimits;
	struct McMS5ADACplgType Couplings;
	struct McMSJnt5AxPosLimType JointAxesPositionLimits;
	struct McMSDeltaWrkRngType WorkingRange;
} McCfgMS5AxDeltaAType;

typedef struct McMS3ARADSDimType
{	struct McCfgTransXYZType TranslationFromBaseToQ1;
	struct McCfgTransXYZType TranslationFromQ1ToQ2;
	struct McCfgTransXYZType TranslationFromQ2ToQ3;
	struct McCfgTransXYZType TranslationFromQ3ToFlange;
} McMS3ARADSDimType;

typedef struct McMS3ARADSType
{	struct McMS3ARADSDimType Dimensions;
	struct McMSMdl3ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl3CntDirType ModelCountDirections;
} McMS3ARADSType;

typedef struct McMS3ARADescType
{	enum McMS3ARADescEnum Type;
	struct McMS3ARADSType Standard;
} McMS3ARADescType;

typedef struct McMS3ARACoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
} McMS3ARACoorNameCmnType;

typedef struct McMS3ARACoorNameType
{	enum McMSCNEnum Type;
	struct McMS3ARACoorNameCmnType Common;
} McMS3ARACoorNameType;

typedef struct McMS3ARAWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType Q1ToQ2;
	struct McMSFrmMdlStdEdgeType Q2ToQ3;
	struct McMSFrmMdlStdEdgeType Q3ToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS3ARAWFrmMdlStdType;

typedef struct McMS3ARAWFrmMdlType
{	enum McMS3ARAWFrmMdlEnum Type;
	struct McMS3ARAWFrmMdlStdType Standard;
} McMS3ARAWFrmMdlType;

typedef struct McMS3ARACplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS3ARACplgType;

typedef struct McCfgMS3AxRobAType
{	struct McMS3ARADescType Description;
	struct McMS3ARACoorNameType CoordinatesNames;
	struct McMS3ARAWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMS3ARACplgType Couplings;
	struct McMSJnt3AxPosLimType JointAxesPositionLimits;
} McCfgMS3AxRobAType;

typedef struct McMS4ARADSDimType
{	struct McCfgTransXYZType TranslationFromBaseToQ1;
	struct McCfgTransXYZType TranslationFromQ1ToQ2;
	struct McCfgTransXYZType TranslationFromQ2ToQ3;
	struct McCfgTransXYZType TranslationFromQ3ToPQ1;
	struct McCfgTransXYZType TranslationFromPQ1ToQ4;
	struct McCfgTransXYZType TranslationFromQ4ToFlange;
} McMS4ARADSDimType;

typedef struct McMS4ARADSType
{	struct McMS4ARADSDimType Dimensions;
	struct McMSMdl4ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl4CntDirType ModelCountDirections;
} McMS4ARADSType;

typedef struct McMS4ARADescType
{	enum McMS4ARADescEnum Type;
	struct McMS4ARADSType Standard;
} McMS4ARADescType;

typedef struct McMS4ARACoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring CCoordinateName[251];
} McMS4ARACoorNameCmnType;

typedef struct McMS4ARACoorNameType
{	enum McMSCNEnum Type;
	struct McMS4ARACoorNameCmnType Common;
} McMS4ARACoorNameType;

typedef struct McMS4ARAWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType Q1ToQ2;
	struct McMSFrmMdlStdEdgeType Q2ToQ3;
	struct McMSFrmMdlStdEdgeType Q3ToPQ1;
	struct McMSFrmMdlStdEdgeType PQ1ToQ4;
	struct McMSFrmMdlStdEdgeType Q4ToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS4ARAWFrmMdlStdType;

typedef struct McMS4ARAWFrmMdlType
{	enum McMS4ARAWFrmMdlEnum Type;
	struct McMS4ARAWFrmMdlStdType Standard;
} McMS4ARAWFrmMdlType;

typedef struct McMS4ARACplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS4ARACplgType;

typedef struct McCfgMS4AxRobAType
{	enum McMS4ARASceneViewerObjEnum SceneViewerObject;
	struct McMS4ARADescType Description;
	struct McMS4ARACoorNameType CoordinatesNames;
	struct McMSTCPOType TCPOrientation;
	struct McMS4ARAWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMSDynLimType DynamicLimits;
	struct McMS4ARACplgType Couplings;
	struct McMSJnt4AxPosLimType JointAxesPositionLimits;
} McCfgMS4AxRobAType;

typedef struct McMS4ARBDSDimQ2CylinderType
{	struct McCfgTransXYZType TranslationFromQ1ToAnchor;
	struct McCfgTransXYZType TranslationFromQ2ToActuator;
} McMS4ARBDSDimQ2CylinderType;

typedef struct McMS4ARBDSDimQ3CylinderType
{	struct McCfgTransXYZType TranslationFromQ2ToAnchor;
	struct McCfgTransXYZType TranslationFromQ3ToActuator;
} McMS4ARBDSDimQ3CylinderType;

typedef struct McMS4ARBDSDimType
{	struct McCfgTransXYZType TranslationFromBaseToQ1;
	struct McCfgTransXYZType TranslationFromQ1ToQ2;
	struct McCfgTransXYZType TranslationFromQ2ToQ3;
	struct McCfgTransXYZType TranslationFromQ3ToPQ1;
	struct McCfgTransXYZType TranslationFromPQ1ToQ4;
	struct McCfgTransXYZType TranslationFromQ4ToFlange;
	struct McMS4ARBDSDimQ2CylinderType Q2Cylinder;
	struct McMS4ARBDSDimQ3CylinderType Q3Cylinder;
} McMS4ARBDSDimType;

typedef struct McMS4ARBDSType
{	struct McMS4ARBDSDimType Dimensions;
} McMS4ARBDSType;

typedef struct McMS4ARBDescType
{	enum McMS4ARBDescEnum Type;
	struct McMS4ARBDSType Standard;
} McMS4ARBDescType;

typedef struct McMS4ARBCoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring CCoordinateName[251];
} McMS4ARBCoorNameCmnType;

typedef struct McMS4ARBCoorNameType
{	enum McMSCNEnum Type;
	struct McMS4ARBCoorNameCmnType Common;
} McMS4ARBCoorNameType;

typedef struct McMS4ARBWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType Q1ToQ2;
	struct McMSFrmMdlStdEdgeType Q2ToQ3;
	struct McMSFrmMdlStdEdgeType Q3ToPQ1;
	struct McMSFrmMdlStdEdgeType PQ1ToQ4;
	struct McMSFrmMdlStdEdgeType Q4ToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
	struct McMSFrmMdlStdEdgeType Q2AnchorToQ2Actuator;
	struct McMSFrmMdlStdEdgeType Q3AnchorToQ3Actuator;
} McMS4ARBWFrmMdlStdType;

typedef struct McMS4ARBWFrmMdlType
{	enum McMS4ARBWFrmMdlEnum Type;
	struct McMS4ARBWFrmMdlStdType Standard;
} McMS4ARBWFrmMdlType;

typedef struct McCfgMS4AxRobBType
{	struct McMS4ARBDescType Description;
	struct McMS4ARBCoorNameType CoordinatesNames;
	struct McMSTCPOType TCPOrientation;
	struct McMS4ARBWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMSJnt4AxPosLimType JointAxesPositionLimits;
} McCfgMS4AxRobBType;

typedef struct McMS5ARADSDimType
{	struct McCfgTransXYZType TranslationFromBaseToQ1;
	struct McCfgTransXYZType TranslationFromQ1ToQ2;
	struct McCfgTransXYZType TranslationFromQ2ToQ3;
	struct McCfgTransXYZType TranslationFromQ3ToQ4;
	struct McCfgTransXYZType TranslationFromQ4ToQ5;
	struct McCfgTransXYZType TranslationFromQ5ToFlange;
} McMS5ARADSDimType;

typedef struct McMS5ARADSType
{	struct McMS5ARADSDimType Dimensions;
	struct McMSMdl5ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl5CntDirType ModelCountDirections;
} McMS5ARADSType;

typedef struct McMS5ARADescType
{	enum McMS5ARADescEnum Type;
	struct McMS5ARADSType Standard;
} McMS5ARADescType;

typedef struct McMS5ARACoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring BCoordinateName[251];
	plcstring CCoordinateName[251];
} McMS5ARACoorNameCmnType;

typedef struct McMS5ARACoorNameType
{	enum McMSCNEnum Type;
	struct McMS5ARACoorNameCmnType Common;
} McMS5ARACoorNameType;

typedef struct McMS5ARAWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType Q1ToQ2;
	struct McMSFrmMdlStdEdgeType Q2ToQ3;
	struct McMSFrmMdlStdEdgeType Q3ToQ4;
	struct McMSFrmMdlStdEdgeType Q4ToQ5;
	struct McMSFrmMdlStdEdgeType Q5ToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS5ARAWFrmMdlStdType;

typedef struct McMS5ARAWFrmMdlType
{	enum McMS5ARAWFrmMdlEnum Type;
	struct McMS5ARAWFrmMdlStdType Standard;
} McMS5ARAWFrmMdlType;

typedef struct McMS5ARACplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS5ARACplgType;

typedef struct McCfgMS5AxRobAType
{	struct McMS5ARADescType Description;
	struct McMS5ARACoorNameType CoordinatesNames;
	struct McMS5ARAWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMS5ARACplgType Couplings;
	struct McMSJnt5AxPosLimType JointAxesPositionLimits;
} McCfgMS5AxRobAType;

typedef struct McMS5ARBDSDimType
{	struct McCfgTransXYZType TranslationFromBaseToQ1;
	struct McCfgTransXYZType TranslationFromQ1ToQ2;
	struct McCfgTransXYZType TranslationFromQ2ToQ3;
	struct McCfgTransXYZType TranslationFromQ3ToQ4;
	struct McCfgTransXYZType TranslationFromQ4ToQ5;
	struct McCfgTransXYZType TranslationFromQ5ToFlange;
} McMS5ARBDSDimType;

typedef struct McMS5ARBDSType
{	struct McMS5ARBDSDimType Dimensions;
	struct McMSMdl5ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl5CntDirType ModelCountDirections;
} McMS5ARBDSType;

typedef struct McMS5ARBDescType
{	enum McMS5ARBDescEnum Type;
	struct McMS5ARBDSType Standard;
} McMS5ARBDescType;

typedef struct McMS5ARBCoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring BCoordinateName[251];
	plcstring CCoordinateName[251];
} McMS5ARBCoorNameCmnType;

typedef struct McMS5ARBCoorNameType
{	enum McMSCNEnum Type;
	struct McMS5ARBCoorNameCmnType Common;
} McMS5ARBCoorNameType;

typedef struct McMS5ARBWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType Q1ToQ2;
	struct McMSFrmMdlStdEdgeType Q2ToQ3;
	struct McMSFrmMdlStdEdgeType Q3ToQ4;
	struct McMSFrmMdlStdEdgeType Q4ToQ5;
	struct McMSFrmMdlStdEdgeType Q5ToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS5ARBWFrmMdlStdType;

typedef struct McMS5ARBWFrmMdlType
{	enum McMS5ARBWFrmMdlEnum Type;
	struct McMS5ARBWFrmMdlStdType Standard;
} McMS5ARBWFrmMdlType;

typedef struct McMS5ARBCplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS5ARBCplgType;

typedef struct McCfgMS5AxRobBType
{	struct McMS5ARBDescType Description;
	struct McMS5ARBCoorNameType CoordinatesNames;
	struct McMS5ARBWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMS5ARBCplgType Couplings;
	struct McMSJnt5AxPosLimType JointAxesPositionLimits;
} McCfgMS5AxRobBType;

typedef struct McMS6ARADSDimType
{	struct McCfgTransXYZType TranslationFromBaseToQ1;
	struct McCfgTransXYZType TranslationFromQ1ToQ2;
	struct McCfgTransXYZType TranslationFromQ2ToQ3;
	struct McCfgTransXYZType TranslationFromQ3ToQ4;
	struct McCfgTransXType TranslationFromQ4ToQ5;
	struct McCfgTransXType TranslationFromQ5ToQ6;
	struct McCfgTransXYZType TranslationFromQ6ToFlange;
} McMS6ARADSDimType;

typedef struct McMS6ARADSType
{	struct McMS6ARADSDimType Dimensions;
	struct McMSMdl6ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl6CntDirType ModelCountDirections;
} McMS6ARADSType;

typedef struct McMS6ARADescType
{	enum McMS6ARADescEnum Type;
	struct McMS6ARADSType Standard;
} McMS6ARADescType;

typedef struct McMS6ARACoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring ACoordinateName[251];
	plcstring BCoordinateName[251];
	plcstring CCoordinateName[251];
} McMS6ARACoorNameCmnType;

typedef struct McMS6ARACoorNameType
{	enum McMSCNEnum Type;
	struct McMS6ARACoorNameCmnType Common;
} McMS6ARACoorNameType;

typedef struct McMS6ARAWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType Q1ToQ2;
	struct McMSFrmMdlStdEdgeType Q2ToQ3;
	struct McMSFrmMdlStdEdgeType Q3ToQ4;
	struct McMSFrmMdlStdEdgeType Q4ToQ5;
	struct McMSFrmMdlStdEdgeType Q5ToQ6;
	struct McMSFrmMdlStdEdgeType Q6ToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS6ARAWFrmMdlStdType;

typedef struct McMS6ARAWFrmMdlType
{	enum McMS6ARAWFrmMdlEnum Type;
	struct McMS6ARAWFrmMdlStdType Standard;
} McMS6ARAWFrmMdlType;

typedef struct McMS6ARACplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS6ARACplgType;

typedef struct McCfgMS6AxRobAType
{	enum McMS6ARASceneViewerObjEnum SceneViewerObject;
	struct McMS6ARADescType Description;
	struct McMS6ARACoorNameType CoordinatesNames;
	struct McMS6ARAWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMSDynLimType DynamicLimits;
	struct McMS6ARACplgType Couplings;
	struct McMSJnt6AxPosLimType JointAxesPositionLimits;
} McCfgMS6AxRobAType;

typedef struct McMS6ARBDSDimType
{	struct McCfgTransXYZType TranslationFromBaseToQ1;
	struct McCfgTransXYZType TranslationFromQ1ToQ2;
	struct McCfgTransXYZType TranslationFromQ2ToQ3;
	struct McCfgTransXYZType TranslationFromQ3ToQ4;
	struct McCfgTransZType TranslationFromQ4ToQ5;
	struct McCfgTransZType TranslationFromQ5ToQ6;
	struct McCfgTransXYZType TranslationFromQ6ToFlange;
} McMS6ARBDSDimType;

typedef struct McMS6ARBDSType
{	struct McMS6ARBDSDimType Dimensions;
	struct McMSMdl6ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl6CntDirType ModelCountDirections;
} McMS6ARBDSType;

typedef struct McMS6ARBDescType
{	enum McMS6ARBDescEnum Type;
	struct McMS6ARBDSType Standard;
} McMS6ARBDescType;

typedef struct McMS6ARBCoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring ACoordinateName[251];
	plcstring BCoordinateName[251];
	plcstring CCoordinateName[251];
} McMS6ARBCoorNameCmnType;

typedef struct McMS6ARBCoorNameType
{	enum McMSCNEnum Type;
	struct McMS6ARBCoorNameCmnType Common;
} McMS6ARBCoorNameType;

typedef struct McMS6ARBWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType Q1ToQ2;
	struct McMSFrmMdlStdEdgeType Q2ToQ3;
	struct McMSFrmMdlStdEdgeType Q3ToQ4;
	struct McMSFrmMdlStdEdgeType Q4ToQ5;
	struct McMSFrmMdlStdEdgeType Q5ToQ6;
	struct McMSFrmMdlStdEdgeType Q6ToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS6ARBWFrmMdlStdType;

typedef struct McMS6ARBWFrmMdlType
{	enum McMS6ARBWFrmMdlEnum Type;
	struct McMS6ARBWFrmMdlStdType Standard;
} McMS6ARBWFrmMdlType;

typedef struct McMS6ARBCplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS6ARBCplgType;

typedef struct McCfgMS6AxRobBType
{	enum McMS6ARBSceneViewerObjEnum SceneViewerObject;
	struct McMS6ARBDescType Description;
	struct McMS6ARBCoorNameType CoordinatesNames;
	struct McMS6ARBWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMS6ARBCplgType Couplings;
	struct McMSJnt6AxPosLimType JointAxesPositionLimits;
} McCfgMS6AxRobBType;

typedef struct McMS6ARCDSDTFQ4ToQ5Type
{	double YZ;
	double Angle;
} McMS6ARCDSDTFQ4ToQ5Type;

typedef struct McMS6ARCDSDTFQ5ToPQ1Type
{	double YZ;
	double Angle;
} McMS6ARCDSDTFQ5ToPQ1Type;

typedef struct McMS6ARCDSDimType
{	struct McCfgTransXYZType TranslationFromBaseToQ1;
	struct McCfgTransXYZType TranslationFromQ1ToQ2;
	struct McCfgTransXYZType TranslationFromQ2ToQ3;
	struct McCfgTransXYZType TranslationFromQ3ToQ4;
	struct McMS6ARCDSDTFQ4ToQ5Type TranslationFromQ4ToQ5;
	struct McMS6ARCDSDTFQ5ToPQ1Type TranslationFromQ5ToPQ1;
	struct McCfgTransYType TranslationFromPQ1ToQ6;
	struct McCfgTransXYZType TranslationFromQ6ToFlange;
} McMS6ARCDSDimType;

typedef struct McMS6ARCDSType
{	struct McMS6ARCDSDimType Dimensions;
	struct McMSMdl6ZeroPosOffType ModelZeroPositionOffsets;
	struct McMSMdl6CntDirType ModelCountDirections;
} McMS6ARCDSType;

typedef struct McMS6ARCDescType
{	enum McMS6ARCDescEnum Type;
	struct McMS6ARCDSType Standard;
} McMS6ARCDescType;

typedef struct McMS6ARCCoorNameCmnType
{	plcstring XCoordinateName[251];
	plcstring YCoordinateName[251];
	plcstring ZCoordinateName[251];
	plcstring ACoordinateName[251];
	plcstring BCoordinateName[251];
	plcstring CCoordinateName[251];
} McMS6ARCCoorNameCmnType;

typedef struct McMS6ARCCoorNameType
{	enum McMSCNEnum Type;
	struct McMS6ARCCoorNameCmnType Common;
} McMS6ARCCoorNameType;

typedef struct McMS6ARCSingHndlgOrientCompType
{	double AngleTolerance;
	double OrientationStiffness;
} McMS6ARCSingHndlgOrientCompType;

typedef struct McMS6ARCSingHndlgType
{	enum McMS6ARCSingHndlgEnum Type;
	struct McMS6ARCSingHndlgOrientCompType OrientationCompliance;
} McMS6ARCSingHndlgType;

typedef struct McMS6ARCWFrmMdlStdType
{	struct McMSFrmMdlStdEdgeType Q1ToQ2;
	struct McMSFrmMdlStdEdgeType Q2ToQ3;
	struct McMSFrmMdlStdEdgeType Q3ToP1;
	struct McMSFrmMdlStdEdgeType P1ToQ4;
	struct McMSFrmMdlStdEdgeType Q4ToQ5;
	struct McMSFrmMdlStdEdgeType Q5ToPQ1;
	struct McMSFrmMdlStdEdgeType PQ1ToQ6;
	struct McMSFrmMdlStdEdgeType Q6ToFlange;
	struct McMSFrmMdlStdEdgeType FlangeToTCP;
} McMS6ARCWFrmMdlStdType;

typedef struct McMS6ARCWFrmMdlType
{	enum McMS6ARCWFrmMdlEnum Type;
	struct McMS6ARCWFrmMdlStdType Standard;
} McMS6ARCWFrmMdlType;

typedef struct McMS6ARCCplgType
{	struct McCfgUnboundedArrayType LinearCoupling;
} McMS6ARCCplgType;

typedef struct McMS6ARCMonPtType
{	enum McMS6ARCMonPtEnum Type;
} McMS6ARCMonPtType;

typedef struct McCfgMS6AxRobCType
{	enum McMS6ARCSceneViewerObjEnum SceneViewerObject;
	struct McMS6ARCDescType Description;
	struct McMS6ARCCoorNameType CoordinatesNames;
	struct McMS6ARCSingHndlgType SingularityHandling;
	struct McMS6ARCWFrmMdlType WireFrameModel;
	struct McMSDynMdlType DynamicModel;
	struct McMS6ARCCplgType Couplings;
	struct McMSJnt6AxPosLimType JointAxesPositionLimits;
	struct McMS6ARCMonPtType MonitoringPoints;
} McCfgMS6AxRobCType;

typedef struct MC_BR_GroupDynModIdent_PathGen
{
	/* VAR_INPUT (analog) */
	struct McAxesGroupType* AxesGroup;
	enum McPathGenDynModIdentModeEnum Mode;
	struct McPathGenDynModIdentSpParType StartpointParameters;
	struct McPathGenDynModIdentAdvParType AdvancedParameters;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	enum McPathGenDynModIdentPhaseEnum Phase;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Execute;
	/* VAR_OUTPUT (digital) */
	plcbit Done;
	plcbit Busy;
	plcbit Active;
	plcbit CommandAborted;
	plcbit Error;
} MC_BR_GroupDynModIdent_PathGen_typ;

typedef struct MC_BR_TrackingStatus_PathGen
{
	/* VAR_INPUT (analog) */
	struct McAxesGroupType* AxesGroup;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	enum McPathGenTrackingStateEnum TrackingState;
	struct McPathGenTrackingInfoType TrackingAdditionalInfo;
	/* VAR (analog) */
	struct McInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} MC_BR_TrackingStatus_PathGen_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void MC_BR_GroupDynModIdent_PathGen(struct MC_BR_GroupDynModIdent_PathGen* inst);
_BUR_PUBLIC void MC_BR_TrackingStatus_PathGen(struct MC_BR_TrackingStatus_PathGen* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MCPATHGEN_ */

