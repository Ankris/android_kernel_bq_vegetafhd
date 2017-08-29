#include "ddp_drv.h"

DISPLAY_TDSHP_T tdshpindex = 
{
entry:
{

{//0
        0x10, //TDS_COR_GAIN       1500B000[07:00]
        0x20, //TDS_GAIN_HIGH      1500B000[15:08]
        0x10, //TDS_GAIN_MID       1500B000[23:16]
        0x0, //TDS_INK_SEL        1500B000[25:24]
        0x0, //TDS_BYPASS_HIGH    1500B000[29:29]
        0x0, //TDS_BYPASS_MID     1500B000[30:30]
        0x0, //TDS_EN             1500B000[31:31]
        0x8, //TDS_LIMIT_RATIO    1500B004[03:00]
        0x20, //TDS_GAIN           1500B004[11:04]
        0x2, //TDS_COR_ZERO       1500B004[23:16]
        0x4, //TDS_COR_THR        1500B004[31:24]
        0x3, //TDS_COR_VALUE      1500B008[15:08]
        0x30, //TDS_BOUND          1500B008[23:16]
        0x20, //TDS_LIMIT          1500B008[31:24]
        0xA,  //TDS_SAT_PROC       1500B00C[05:00]
        0x2, //TDS_AC_LPF_COE     1500B00C[11:08]
        0x2, //TDS_CLIP_THR       1500B00C[23:16]
        0x8, //TDS_CLIP_RATIO     1500B00C[28:24]
        0x1, //TDS_CLIP_EN        1500B00C[31:31]
        0x48, //TDS_YLEV_P048      1500B014[07:00]
        0x30, //TDS_YLEV_P032      1500B014[15:08]
        0x18, //TDS_YLEV_P016      1500B014[23:16]
        0x0, //TDS_YLEV_P000      1500B014[31:24]
        0x78, //TDS_YLEV_P112      1500B018[07:00]
        0x70, //TDS_YLEV_P096      1500B018[15:08]
        0x68, //TDS_YLEV_P080      1500B018[23:16]
        0x60, //TDS_YLEV_P064      1500B018[31:24]
        0x70, //TDS_YLEV_P176      1500B01C[07:00]
        0x76, //TDS_YLEV_P160      1500B01C[15:08]
        0x7B, //TDS_YLEV_P144      1500B01C[23:16]
        0x80, //TDS_YLEV_P128      1500B01C[31:24]
        0x5B, //TDS_YLEV_P240      1500B020[07:00]
        0x60, //TDS_YLEV_P224      1500B020[15:08]
        0x66, //TDS_YLEV_P208      1500B020[23:16]
        0x6B, //TDS_YLEV_P192      1500B020[31:24]
        0x1, //TDS_YLEV_EN        1500B024[14:14]
        0x10, //TDS_YLEV_ALPHA     1500B024[21:16]
        0x56, //TDS_YLEV_P256      1500B024[31:24]
        0x18, //PBC1_RADIUS_R      1500B040[05:00]
        0x18, //PBC1_THETA_R       1500B040[11:06]
        0x20, //PBC1_RSLOPE_1      1500B040[21:12]
        0x10, //PBC1_GAIN          1500B040[29:22]
        0x0, //PBC1_LPF_EN        1500B040[30:30]
        0x0, //PBC1_EN            1500B040[31:31]
        0x2B, //PBC1_TSLOPE        1500B044[15:06]
        0x20, //PBC1_RADIUS_C      1500B044[23:16]
        0x60, //PBC1_THETA_C       1500B044[31:24]
        0x20, //PBC1_EDGE_SLOPE    1500B048[05:00]
        0xC, //PBC1_EDGE_THR      1500B048[13:08]
        0x1, //PBC1_EDGE_EN       1500B048[14:14]
        0x5, //PBC1_CONF_GAIN     1500B048[19:16]
        0x2B  //PBC1_RSLOPE        1500B048[31:22]
}
,
{//1  
        0x10, //TDS_COR_GAIN       1500B000[07:00]
        0x20, //TDS_GAIN_HIGH      1500B000[15:08]
        0x10, //TDS_GAIN_MID       1500B000[23:16]
        0x0, //TDS_INK_SEL        1500B000[25:24]
        0x0, //TDS_BYPASS_HIGH    1500B000[29:29]
        0x0, //TDS_BYPASS_MID     1500B000[30:30]
        0x1, //TDS_EN             1500B000[31:31]
        0x8, //TDS_LIMIT_RATIO    1500B004[03:00]
        0x20, //TDS_GAIN           1500B004[11:04]
        0x2, //TDS_COR_ZERO       1500B004[23:16]
        0x4, //TDS_COR_THR        1500B004[31:24]
        0x3, //TDS_COR_VALUE      1500B008[15:08]
        0x30, //TDS_BOUND          1500B008[23:16]
        0x20, //TDS_LIMIT          1500B008[31:24]
        0xA,  //TDS_SAT_PROC       1500B00C[05:00]
        0x2, //TDS_AC_LPF_COE     1500B00C[11:08]
        0x2, //TDS_CLIP_THR       1500B00C[23:16]
        0x8, //TDS_CLIP_RATIO     1500B00C[28:24]
        0x1, //TDS_CLIP_EN        1500B00C[31:31]
        0x48, //TDS_YLEV_P048      1500B014[07:00]
        0x30, //TDS_YLEV_P032      1500B014[15:08]
        0x18, //TDS_YLEV_P016      1500B014[23:16]
        0x0, //TDS_YLEV_P000      1500B014[31:24]
        0x78, //TDS_YLEV_P112      1500B018[07:00]
        0x70, //TDS_YLEV_P096      1500B018[15:08]
        0x68, //TDS_YLEV_P080      1500B018[23:16]
        0x60, //TDS_YLEV_P064      1500B018[31:24]
        0x70, //TDS_YLEV_P176      1500B01C[07:00]
        0x76, //TDS_YLEV_P160      1500B01C[15:08]
        0x7B, //TDS_YLEV_P144      1500B01C[23:16]
        0x80, //TDS_YLEV_P128      1500B01C[31:24]
        0x5B, //TDS_YLEV_P240      1500B020[07:00]
        0x60, //TDS_YLEV_P224      1500B020[15:08]
        0x66, //TDS_YLEV_P208      1500B020[23:16]
        0x6B, //TDS_YLEV_P192      1500B020[31:24]
        0x1, //TDS_YLEV_EN        1500B024[14:14]
        0x10, //TDS_YLEV_ALPHA     1500B024[21:16]
        0x56, //TDS_YLEV_P256      1500B024[31:24]
        0x18, //PBC1_RADIUS_R      1500B040[05:00]
        0x18, //PBC1_THETA_R       1500B040[11:06]
        0x20, //PBC1_RSLOPE_1      1500B040[21:12]
        0x10, //PBC1_GAIN          1500B040[29:22]
        0x0, //PBC1_LPF_EN        1500B040[30:30]
        0x1, //PBC1_EN            1500B040[31:31]
        0x2B, //PBC1_TSLOPE        1500B044[15:06]
        0x20, //PBC1_RADIUS_C      1500B044[23:16]
        0x60, //PBC1_THETA_C       1500B044[31:24]
        0x20, //PBC1_EDGE_SLOPE    1500B048[05:00]
        0xC, //PBC1_EDGE_THR      1500B048[13:08]
        0x1, //PBC1_EDGE_EN       1500B048[14:14]
        0x5, //PBC1_CONF_GAIN     1500B048[19:16]
        0x2B  //PBC1_RSLOPE        1500B048[31:22]

},
{//2         
        0x10, //TDS_COR_GAIN       1500B000[07:00]
        0x28, //TDS_GAIN_HIGH      1500B000[15:08]
        0x18, //TDS_GAIN_MID       1500B000[23:16]
        0x0, //TDS_INK_SEL        1500B000[25:24]
        0x0, //TDS_BYPASS_HIGH    1500B000[29:29]
        0x0, //TDS_BYPASS_MID     1500B000[30:30]
        0x1, //TDS_EN             1500B000[31:31]
        0x8, //TDS_LIMIT_RATIO    1500B004[03:00]
        0x20, //TDS_GAIN           1500B004[11:04]
        0x2, //TDS_COR_ZERO       1500B004[23:16]
        0x4, //TDS_COR_THR        1500B004[31:24]
        0x3, //TDS_COR_VALUE      1500B008[15:08]
        0x30, //TDS_BOUND          1500B008[23:16]
        0x20, //TDS_LIMIT          1500B008[31:24]
        0xA,  //TDS_SAT_PROC       1500B00C[05:00]
        0x2, //TDS_AC_LPF_COE     1500B00C[11:08]
        0x2, //TDS_CLIP_THR       1500B00C[23:16]
        0x8, //TDS_CLIP_RATIO     1500B00C[28:24]
        0x1, //TDS_CLIP_EN        1500B00C[31:31]
        0x48, //TDS_YLEV_P048      1500B014[07:00]
        0x30, //TDS_YLEV_P032      1500B014[15:08]
        0x18, //TDS_YLEV_P016      1500B014[23:16]
        0x0, //TDS_YLEV_P000      1500B014[31:24]
        0x78, //TDS_YLEV_P112      1500B018[07:00]
        0x70, //TDS_YLEV_P096      1500B018[15:08]
        0x68, //TDS_YLEV_P080      1500B018[23:16]
        0x60, //TDS_YLEV_P064      1500B018[31:24]
        0x70, //TDS_YLEV_P176      1500B01C[07:00]
        0x76, //TDS_YLEV_P160      1500B01C[15:08]
        0x7B, //TDS_YLEV_P144      1500B01C[23:16]
        0x80, //TDS_YLEV_P128      1500B01C[31:24]
        0x5B, //TDS_YLEV_P240      1500B020[07:00]
        0x60, //TDS_YLEV_P224      1500B020[15:08]
        0x66, //TDS_YLEV_P208      1500B020[23:16]
        0x6B, //TDS_YLEV_P192      1500B020[31:24]
        0x1, //TDS_YLEV_EN        1500B024[14:14]
        0x10, //TDS_YLEV_ALPHA     1500B024[21:16]
        0x56, //TDS_YLEV_P256      1500B024[31:24]
        0x18, //PBC1_RADIUS_R      1500B040[05:00]
        0x18, //PBC1_THETA_R       1500B040[11:06]
        0x20, //PBC1_RSLOPE_1      1500B040[21:12]
        0x10, //PBC1_GAIN          1500B040[29:22]
        0x0, //PBC1_LPF_EN        1500B040[30:30]
        0x1, //PBC1_EN            1500B040[31:31]
        0x2B, //PBC1_TSLOPE        1500B044[15:06]
        0x20, //PBC1_RADIUS_C      1500B044[23:16]
        0x60, //PBC1_THETA_C       1500B044[31:24]
        0x20, //PBC1_EDGE_SLOPE    1500B048[05:00]
        0xC, //PBC1_EDGE_THR      1500B048[13:08]
        0x1, //PBC1_EDGE_EN       1500B048[14:14]
        0x5, //PBC1_CONF_GAIN     1500B048[19:16]
        0x2B  //PBC1_RSLOPE        1500B048[31:22]
}
,
{//3
        0x10, //TDS_COR_GAIN       1500B000[07:00]
        0x30, //TDS_GAIN_HIGH      1500B000[15:08]
        0x20, //TDS_GAIN_MID       1500B000[23:16]
        0x0, //TDS_INK_SEL        1500B000[25:24]
        0x0, //TDS_BYPASS_HIGH    1500B000[29:29]
        0x0, //TDS_BYPASS_MID     1500B000[30:30]
        0x1, //TDS_EN             1500B000[31:31]
        0x8, //TDS_LIMIT_RATIO    1500B004[03:00]
        0x20, //TDS_GAIN           1500B004[11:04]
        0x2, //TDS_COR_ZERO       1500B004[23:16]
        0x4, //TDS_COR_THR        1500B004[31:24]
        0x3, //TDS_COR_VALUE      1500B008[15:08]
        0x30, //TDS_BOUND          1500B008[23:16]
        0x20, //TDS_LIMIT          1500B008[31:24]
        0xA,  //TDS_SAT_PROC       1500B00C[05:00]
        0x2, //TDS_AC_LPF_COE     1500B00C[11:08]
        0x2, //TDS_CLIP_THR       1500B00C[23:16]
        0x8, //TDS_CLIP_RATIO     1500B00C[28:24]
        0x1, //TDS_CLIP_EN        1500B00C[31:31]
        0x48, //TDS_YLEV_P048      1500B014[07:00]
        0x30, //TDS_YLEV_P032      1500B014[15:08]
        0x18, //TDS_YLEV_P016      1500B014[23:16]
        0x0, //TDS_YLEV_P000      1500B014[31:24]
        0x78, //TDS_YLEV_P112      1500B018[07:00]
        0x70, //TDS_YLEV_P096      1500B018[15:08]
        0x68, //TDS_YLEV_P080      1500B018[23:16]
        0x60, //TDS_YLEV_P064      1500B018[31:24]
        0x70, //TDS_YLEV_P176      1500B01C[07:00]
        0x76, //TDS_YLEV_P160      1500B01C[15:08]
        0x7B, //TDS_YLEV_P144      1500B01C[23:16]
        0x80, //TDS_YLEV_P128      1500B01C[31:24]
        0x5B, //TDS_YLEV_P240      1500B020[07:00]
        0x60, //TDS_YLEV_P224      1500B020[15:08]
        0x66, //TDS_YLEV_P208      1500B020[23:16]
        0x6B, //TDS_YLEV_P192      1500B020[31:24]
        0x1, //TDS_YLEV_EN        1500B024[14:14]
        0x10, //TDS_YLEV_ALPHA     1500B024[21:16]
        0x56, //TDS_YLEV_P256      1500B024[31:24]
        0x18, //PBC1_RADIUS_R      1500B040[05:00]
        0x18, //PBC1_THETA_R       1500B040[11:06]
        0x20, //PBC1_RSLOPE_1      1500B040[21:12]
        0x10, //PBC1_GAIN          1500B040[29:22]
        0x0, //PBC1_LPF_EN        1500B040[30:30]
        0x1, //PBC1_EN            1500B040[31:31]
        0x2B, //PBC1_TSLOPE        1500B044[15:06]
        0x20, //PBC1_RADIUS_C      1500B044[23:16]
        0x60, //PBC1_THETA_C       1500B044[31:24]
        0x20, //PBC1_EDGE_SLOPE    1500B048[05:00]
        0xC, //PBC1_EDGE_THR      1500B048[13:08]
        0x1, //PBC1_EDGE_EN       1500B048[14:14]
        0x5, //PBC1_CONF_GAIN     1500B048[19:16]
        0x2B  //PBC1_RSLOPE        1500B048[31:22]
}  
,
{//4
        0x12, //TDS_COR_GAIN       1500B000[07:00]
        0x30, //TDS_GAIN_HIGH      1500B000[15:08]
        0x20, //TDS_GAIN_MID       1500B000[23:16]
        0x0, //TDS_INK_SEL        1500B000[25:24]
        0x0, //TDS_BYPASS_HIGH    1500B000[29:29]
        0x0, //TDS_BYPASS_MID     1500B000[30:30]
        0x1, //TDS_EN             1500B000[31:31]
        0x8, //TDS_LIMIT_RATIO    1500B004[03:00]
        0x24, //TDS_GAIN           1500B004[11:04]
        0x2, //TDS_COR_ZERO       1500B004[23:16]
        0x4, //TDS_COR_THR        1500B004[31:24]
        0x3, //TDS_COR_VALUE      1500B008[15:08]
        0x30, //TDS_BOUND          1500B008[23:16]
        0x20, //TDS_LIMIT          1500B008[31:24]
        0xA,  //TDS_SAT_PROC       1500B00C[05:00]
        0x2, //TDS_AC_LPF_COE     1500B00C[11:08]
        0x2, //TDS_CLIP_THR       1500B00C[23:16]
        0x8, //TDS_CLIP_RATIO     1500B00C[28:24]
        0x1, //TDS_CLIP_EN        1500B00C[31:31]
        0x48, //TDS_YLEV_P048      1500B014[07:00]
        0x30, //TDS_YLEV_P032      1500B014[15:08]
        0x18, //TDS_YLEV_P016      1500B014[23:16]
        0x0, //TDS_YLEV_P000      1500B014[31:24]
        0x78, //TDS_YLEV_P112      1500B018[07:00]
        0x70, //TDS_YLEV_P096      1500B018[15:08]
        0x68, //TDS_YLEV_P080      1500B018[23:16]
        0x60, //TDS_YLEV_P064      1500B018[31:24]
        0x70, //TDS_YLEV_P176      1500B01C[07:00]
        0x76, //TDS_YLEV_P160      1500B01C[15:08]
        0x7B, //TDS_YLEV_P144      1500B01C[23:16]
        0x80, //TDS_YLEV_P128      1500B01C[31:24]
        0x5B, //TDS_YLEV_P240      1500B020[07:00]
        0x60, //TDS_YLEV_P224      1500B020[15:08]
        0x66, //TDS_YLEV_P208      1500B020[23:16]
        0x6B, //TDS_YLEV_P192      1500B020[31:24]
        0x1, //TDS_YLEV_EN        1500B024[14:14]
        0x10, //TDS_YLEV_ALPHA     1500B024[21:16]
        0x56, //TDS_YLEV_P256      1500B024[31:24]
        0x18, //PBC1_RADIUS_R      1500B040[05:00]
        0x18, //PBC1_THETA_R       1500B040[11:06]
        0x20, //PBC1_RSLOPE_1      1500B040[21:12]
        0x10, //PBC1_GAIN          1500B040[29:22]
        0x0, //PBC1_LPF_EN        1500B040[30:30]
        0x1, //PBC1_EN            1500B040[31:31]
        0x2B, //PBC1_TSLOPE        1500B044[15:06]
        0x20, //PBC1_RADIUS_C      1500B044[23:16]
        0x60, //PBC1_THETA_C       1500B044[31:24]
        0x20, //PBC1_EDGE_SLOPE    1500B048[05:00]
        0xC, //PBC1_EDGE_THR      1500B048[13:08]
        0x1, //PBC1_EDGE_EN       1500B048[14:14]
        0x5, //PBC1_CONF_GAIN     1500B048[19:16]
        0x2B  //PBC1_RSLOPE        1500B048[31:22]      
}        
,        
{//5     
        0x14, //TDS_COR_GAIN       1500B000[07:00]
        0x30, //TDS_GAIN_HIGH      1500B000[15:08]
        0x20, //TDS_GAIN_MID       1500B000[23:16]
        0x0, //TDS_INK_SEL        1500B000[25:24]
        0x0, //TDS_BYPASS_HIGH    1500B000[29:29]
        0x0, //TDS_BYPASS_MID     1500B000[30:30]
        0x1, //TDS_EN             1500B000[31:31]
        0x8, //TDS_LIMIT_RATIO    1500B004[03:00]
        0x28, //TDS_GAIN           1500B004[11:04]
        0x2, //TDS_COR_ZERO       1500B004[23:16]
        0x4, //TDS_COR_THR        1500B004[31:24]
        0x3, //TDS_COR_VALUE      1500B008[15:08]
        0x30, //TDS_BOUND          1500B008[23:16]
        0x20, //TDS_LIMIT          1500B008[31:24]
        0xA,  //TDS_SAT_PROC       1500B00C[05:00]
        0x2, //TDS_AC_LPF_COE     1500B00C[11:08]
        0x2, //TDS_CLIP_THR       1500B00C[23:16]
        0x8, //TDS_CLIP_RATIO     1500B00C[28:24]
        0x1, //TDS_CLIP_EN        1500B00C[31:31]
        0x48, //TDS_YLEV_P048      1500B014[07:00]
        0x30, //TDS_YLEV_P032      1500B014[15:08]
        0x18, //TDS_YLEV_P016      1500B014[23:16]
        0x0, //TDS_YLEV_P000      1500B014[31:24]
        0x78, //TDS_YLEV_P112      1500B018[07:00]
        0x70, //TDS_YLEV_P096      1500B018[15:08]
        0x68, //TDS_YLEV_P080      1500B018[23:16]
        0x60, //TDS_YLEV_P064      1500B018[31:24]
        0x70, //TDS_YLEV_P176      1500B01C[07:00]
        0x76, //TDS_YLEV_P160      1500B01C[15:08]
        0x7B, //TDS_YLEV_P144      1500B01C[23:16]
        0x80, //TDS_YLEV_P128      1500B01C[31:24]
        0x5B, //TDS_YLEV_P240      1500B020[07:00]
        0x60, //TDS_YLEV_P224      1500B020[15:08]
        0x66, //TDS_YLEV_P208      1500B020[23:16]
        0x6B, //TDS_YLEV_P192      1500B020[31:24]
        0x1, //TDS_YLEV_EN        1500B024[14:14]
        0x10, //TDS_YLEV_ALPHA     1500B024[21:16]
        0x56, //TDS_YLEV_P256      1500B024[31:24]
        0x18, //PBC1_RADIUS_R      1500B040[05:00]
        0x18, //PBC1_THETA_R       1500B040[11:06]
        0x20, //PBC1_RSLOPE_1      1500B040[21:12]
        0x10, //PBC1_GAIN          1500B040[29:22]
        0x0, //PBC1_LPF_EN        1500B040[30:30]
        0x1, //PBC1_EN            1500B040[31:31]
        0x2B, //PBC1_TSLOPE        1500B044[15:06]
        0x20, //PBC1_RADIUS_C      1500B044[23:16]
        0x60, //PBC1_THETA_C       1500B044[31:24]
        0x20, //PBC1_EDGE_SLOPE    1500B048[05:00]
        0xC, //PBC1_EDGE_THR      1500B048[13:08]
        0x1, //PBC1_EDGE_EN       1500B048[14:14]
        0x5, //PBC1_CONF_GAIN     1500B048[19:16]
        0x2B  //PBC1_RSLOPE        1500B048[31:22]      
}        
,        
{//6     
        0x16, //TDS_COR_GAIN       1500B000[07:00]
        0x30, //TDS_GAIN_HIGH      1500B000[15:08]
        0x20, //TDS_GAIN_MID       1500B000[23:16]
        0x0, //TDS_INK_SEL        1500B000[25:24]
        0x0, //TDS_BYPASS_HIGH    1500B000[29:29]
        0x0, //TDS_BYPASS_MID     1500B000[30:30]
        0x1, //TDS_EN             1500B000[31:31]
        0x8, //TDS_LIMIT_RATIO    1500B004[03:00]
        0x2c, //TDS_GAIN           1500B004[11:04]
        0x2, //TDS_COR_ZERO       1500B004[23:16]
        0x4, //TDS_COR_THR        1500B004[31:24]
        0x3, //TDS_COR_VALUE      1500B008[15:08]
        0x30, //TDS_BOUND          1500B008[23:16]
        0x20, //TDS_LIMIT          1500B008[31:24]
        0xA,  //TDS_SAT_PROC       1500B00C[05:00]
        0x2, //TDS_AC_LPF_COE     1500B00C[11:08]
        0x2, //TDS_CLIP_THR       1500B00C[23:16]
        0x8, //TDS_CLIP_RATIO     1500B00C[28:24]
        0x1, //TDS_CLIP_EN        1500B00C[31:31]
        0x48, //TDS_YLEV_P048      1500B014[07:00]
        0x30, //TDS_YLEV_P032      1500B014[15:08]
        0x18, //TDS_YLEV_P016      1500B014[23:16]
        0x0, //TDS_YLEV_P000      1500B014[31:24]
        0x78, //TDS_YLEV_P112      1500B018[07:00]
        0x70, //TDS_YLEV_P096      1500B018[15:08]
        0x68, //TDS_YLEV_P080      1500B018[23:16]
        0x60, //TDS_YLEV_P064      1500B018[31:24]
        0x70, //TDS_YLEV_P176      1500B01C[07:00]
        0x76, //TDS_YLEV_P160      1500B01C[15:08]
        0x7B, //TDS_YLEV_P144      1500B01C[23:16]
        0x80, //TDS_YLEV_P128      1500B01C[31:24]
        0x5B, //TDS_YLEV_P240      1500B020[07:00]
        0x60, //TDS_YLEV_P224      1500B020[15:08]
        0x66, //TDS_YLEV_P208      1500B020[23:16]
        0x6B, //TDS_YLEV_P192      1500B020[31:24]
        0x1, //TDS_YLEV_EN        1500B024[14:14]
        0x10, //TDS_YLEV_ALPHA     1500B024[21:16]
        0x56, //TDS_YLEV_P256      1500B024[31:24]
        0x18, //PBC1_RADIUS_R      1500B040[05:00]
        0x18, //PBC1_THETA_R       1500B040[11:06]
        0x20, //PBC1_RSLOPE_1      1500B040[21:12]
        0x10, //PBC1_GAIN          1500B040[29:22]
        0x0, //PBC1_LPF_EN        1500B040[30:30]
        0x1, //PBC1_EN            1500B040[31:31]
        0x2B, //PBC1_TSLOPE        1500B044[15:06]
        0x20, //PBC1_RADIUS_C      1500B044[23:16]
        0x60, //PBC1_THETA_C       1500B044[31:24]
        0x20, //PBC1_EDGE_SLOPE    1500B048[05:00]
        0xC, //PBC1_EDGE_THR      1500B048[13:08]
        0x1, //PBC1_EDGE_EN       1500B048[14:14]
        0x5, //PBC1_CONF_GAIN     1500B048[19:16]
        0x2B  //PBC1_RSLOPE        1500B048[31:22]      
}        
,        
{//7     
        0x18, //TDS_COR_GAIN       1500B000[07:00]
        0x30, //TDS_GAIN_HIGH      1500B000[15:08]
        0x20, //TDS_GAIN_MID       1500B000[23:16]
        0x0, //TDS_INK_SEL        1500B000[25:24]
        0x0, //TDS_BYPASS_HIGH    1500B000[29:29]
        0x0, //TDS_BYPASS_MID     1500B000[30:30]
        0x1, //TDS_EN             1500B000[31:31]
        0x8, //TDS_LIMIT_RATIO    1500B004[03:00]
        0x30, //TDS_GAIN           1500B004[11:04]
        0x2, //TDS_COR_ZERO       1500B004[23:16]
        0x4, //TDS_COR_THR        1500B004[31:24]
        0x3, //TDS_COR_VALUE      1500B008[15:08]
        0x30, //TDS_BOUND          1500B008[23:16]
        0x20, //TDS_LIMIT          1500B008[31:24]
        0xA,  //TDS_SAT_PROC       1500B00C[05:00]
        0x2, //TDS_AC_LPF_COE     1500B00C[11:08]
        0x2, //TDS_CLIP_THR       1500B00C[23:16]
        0x8, //TDS_CLIP_RATIO     1500B00C[28:24]
        0x1, //TDS_CLIP_EN        1500B00C[31:31]
        0x48, //TDS_YLEV_P048      1500B014[07:00]
        0x30, //TDS_YLEV_P032      1500B014[15:08]
        0x18, //TDS_YLEV_P016      1500B014[23:16]
        0x0, //TDS_YLEV_P000      1500B014[31:24]
        0x78, //TDS_YLEV_P112      1500B018[07:00]
        0x70, //TDS_YLEV_P096      1500B018[15:08]
        0x68, //TDS_YLEV_P080      1500B018[23:16]
        0x60, //TDS_YLEV_P064      1500B018[31:24]
        0x70, //TDS_YLEV_P176      1500B01C[07:00]
        0x76, //TDS_YLEV_P160      1500B01C[15:08]
        0x7B, //TDS_YLEV_P144      1500B01C[23:16]
        0x80, //TDS_YLEV_P128      1500B01C[31:24]
        0x5B, //TDS_YLEV_P240      1500B020[07:00]
        0x60, //TDS_YLEV_P224      1500B020[15:08]
        0x66, //TDS_YLEV_P208      1500B020[23:16]
        0x6B, //TDS_YLEV_P192      1500B020[31:24]
        0x1, //TDS_YLEV_EN        1500B024[14:14]
        0x10, //TDS_YLEV_ALPHA     1500B024[21:16]
        0x56, //TDS_YLEV_P256      1500B024[31:24]
        0x18, //PBC1_RADIUS_R      1500B040[05:00]
        0x18, //PBC1_THETA_R       1500B040[11:06]
        0x20, //PBC1_RSLOPE_1      1500B040[21:12]
        0x10, //PBC1_GAIN          1500B040[29:22]
        0x0, //PBC1_LPF_EN        1500B040[30:30]
        0x1, //PBC1_EN            1500B040[31:31]
        0x2B, //PBC1_TSLOPE        1500B044[15:06]
        0x20, //PBC1_RADIUS_C      1500B044[23:16]
        0x60, //PBC1_THETA_C       1500B044[31:24]
        0x20, //PBC1_EDGE_SLOPE    1500B048[05:00]
        0xC, //PBC1_EDGE_THR      1500B048[13:08]
        0x1, //PBC1_EDGE_EN       1500B048[14:14]
        0x5, //PBC1_CONF_GAIN     1500B048[19:16]
        0x2B  //PBC1_RSLOPE        1500B048[31:22]      
}        
,        
{//8     
        0x1c, //TDS_COR_GAIN       1500B000[07:00]
        0x30, //TDS_GAIN_HIGH      1500B000[15:08]
        0x20, //TDS_GAIN_MID       1500B000[23:16]
        0x0, //TDS_INK_SEL        1500B000[25:24]
        0x0, //TDS_BYPASS_HIGH    1500B000[29:29]
        0x0, //TDS_BYPASS_MID     1500B000[30:30]
        0x1, //TDS_EN             1500B000[31:31]
        0x8, //TDS_LIMIT_RATIO    1500B004[03:00]
        0x38, //TDS_GAIN           1500B004[11:04]
        0x2, //TDS_COR_ZERO       1500B004[23:16]
        0x4, //TDS_COR_THR        1500B004[31:24]
        0x3, //TDS_COR_VALUE      1500B008[15:08]
        0x30, //TDS_BOUND          1500B008[23:16]
        0x20, //TDS_LIMIT          1500B008[31:24]
        0xA,  //TDS_SAT_PROC       1500B00C[05:00]
        0x2, //TDS_AC_LPF_COE     1500B00C[11:08]
        0x2, //TDS_CLIP_THR       1500B00C[23:16]
        0x8, //TDS_CLIP_RATIO     1500B00C[28:24]
        0x1, //TDS_CLIP_EN        1500B00C[31:31]
        0x48, //TDS_YLEV_P048      1500B014[07:00]
        0x30, //TDS_YLEV_P032      1500B014[15:08]
        0x18, //TDS_YLEV_P016      1500B014[23:16]
        0x0, //TDS_YLEV_P000      1500B014[31:24]
        0x78, //TDS_YLEV_P112      1500B018[07:00]
        0x70, //TDS_YLEV_P096      1500B018[15:08]
        0x68, //TDS_YLEV_P080      1500B018[23:16]
        0x60, //TDS_YLEV_P064      1500B018[31:24]
        0x70, //TDS_YLEV_P176      1500B01C[07:00]
        0x76, //TDS_YLEV_P160      1500B01C[15:08]
        0x7B, //TDS_YLEV_P144      1500B01C[23:16]
        0x80, //TDS_YLEV_P128      1500B01C[31:24]
        0x5B, //TDS_YLEV_P240      1500B020[07:00]
        0x60, //TDS_YLEV_P224      1500B020[15:08]
        0x66, //TDS_YLEV_P208      1500B020[23:16]
        0x6B, //TDS_YLEV_P192      1500B020[31:24]
        0x1, //TDS_YLEV_EN        1500B024[14:14]
        0x10, //TDS_YLEV_ALPHA     1500B024[21:16]
        0x56, //TDS_YLEV_P256      1500B024[31:24]
        0x18, //PBC1_RADIUS_R      1500B040[05:00]
        0x18, //PBC1_THETA_R       1500B040[11:06]
        0x20, //PBC1_RSLOPE_1      1500B040[21:12]
        0x10, //PBC1_GAIN          1500B040[29:22]
        0x0, //PBC1_LPF_EN        1500B040[30:30]
        0x1, //PBC1_EN            1500B040[31:31]
        0x2B, //PBC1_TSLOPE        1500B044[15:06]
        0x20, //PBC1_RADIUS_C      1500B044[23:16]
        0x60, //PBC1_THETA_C       1500B044[31:24]
        0x20, //PBC1_EDGE_SLOPE    1500B048[05:00]
        0xC, //PBC1_EDGE_THR      1500B048[13:08]
        0x1, //PBC1_EDGE_EN       1500B048[14:14]
        0x5, //PBC1_CONF_GAIN     1500B048[19:16]
        0x2B  //PBC1_RSLOPE        1500B048[31:22]      
}        
,        
{//9     
        0x20, //TDS_COR_GAIN       1500B000[07:00]
        0x40, //TDS_GAIN_HIGH      1500B000[15:08]
        0x20, //TDS_GAIN_MID       1500B000[23:16]
        0x0, //TDS_INK_SEL        1500B000[25:24]
        0x0, //TDS_BYPASS_HIGH    1500B000[29:29]
        0x0, //TDS_BYPASS_MID     1500B000[30:30]
        0x1, //TDS_EN             1500B000[31:31]
        0x8, //TDS_LIMIT_RATIO    1500B004[03:00]
        0x40, //TDS_GAIN           1500B004[11:04]
        0x2, //TDS_COR_ZERO       1500B004[23:16]
        0x4, //TDS_COR_THR        1500B004[31:24]
        0x3, //TDS_COR_VALUE      1500B008[15:08]
        0x40, //TDS_BOUND          1500B008[23:16]
        0x20, //TDS_LIMIT          1500B008[31:24]
        0xA,  //TDS_SAT_PROC       1500B00C[05:00]
        0x2, //TDS_AC_LPF_COE     1500B00C[11:08]
        0x2, //TDS_CLIP_THR       1500B00C[23:16]
        0x8, //TDS_CLIP_RATIO     1500B00C[28:24]
        0x1, //TDS_CLIP_EN        1500B00C[31:31]
        0x48, //TDS_YLEV_P048      1500B014[07:00]
        0x30, //TDS_YLEV_P032      1500B014[15:08]
        0x18, //TDS_YLEV_P016      1500B014[23:16]
        0x0, //TDS_YLEV_P000      1500B014[31:24]
        0x78, //TDS_YLEV_P112      1500B018[07:00]
        0x70, //TDS_YLEV_P096      1500B018[15:08]
        0x68, //TDS_YLEV_P080      1500B018[23:16]
        0x60, //TDS_YLEV_P064      1500B018[31:24]
        0x70, //TDS_YLEV_P176      1500B01C[07:00]
        0x76, //TDS_YLEV_P160      1500B01C[15:08]
        0x7B, //TDS_YLEV_P144      1500B01C[23:16]
        0x80, //TDS_YLEV_P128      1500B01C[31:24]
        0x5B, //TDS_YLEV_P240      1500B020[07:00]
        0x60, //TDS_YLEV_P224      1500B020[15:08]
        0x66, //TDS_YLEV_P208      1500B020[23:16]
        0x6B, //TDS_YLEV_P192      1500B020[31:24]
        0x1, //TDS_YLEV_EN        1500B024[14:14]
        0x10, //TDS_YLEV_ALPHA     1500B024[21:16]
        0x56, //TDS_YLEV_P256      1500B024[31:24]
        0x18, //PBC1_RADIUS_R      1500B040[05:00]
        0x18, //PBC1_THETA_R       1500B040[11:06]
        0x20, //PBC1_RSLOPE_1      1500B040[21:12]
        0x10, //PBC1_GAIN          1500B040[29:22]
        0x0, //PBC1_LPF_EN        1500B040[30:30]
        0x1, //PBC1_EN            1500B040[31:31]
        0x2B, //PBC1_TSLOPE        1500B044[15:06]
        0x20, //PBC1_RADIUS_C      1500B044[23:16]
        0x60, //PBC1_THETA_C       1500B044[31:24]
        0x20, //PBC1_EDGE_SLOPE    1500B048[05:00]
        0xC, //PBC1_EDGE_THR      1500B048[13:08]
        0x1, //PBC1_EDGE_EN       1500B048[14:14]
        0x5, //PBC1_CONF_GAIN     1500B048[19:16]
        0x2B  //PBC1_RSLOPE        1500B048[31:22]      
}      
,        
{//10     
        0x10, //TDS_COR_GAIN       1500B000[07:00]
        0x20, //TDS_GAIN_HIGH      1500B000[15:08]
        0x10, //TDS_GAIN_MID       1500B000[23:16]
        0x0, //TDS_INK_SEL        1500B000[25:24]
        0x0, //TDS_BYPASS_HIGH    1500B000[29:29]
        0x0, //TDS_BYPASS_MID     1500B000[30:30]
        0x1, //TDS_EN             1500B000[31:31]
        0x8, //TDS_LIMIT_RATIO    1500B004[03:00]
        0x20, //TDS_GAIN           1500B004[11:04]
        0x2, //TDS_COR_ZERO       1500B004[23:16]
        0x4, //TDS_COR_THR        1500B004[31:24]
        0x3, //TDS_COR_VALUE      1500B008[15:08]
        0x30, //TDS_BOUND          1500B008[23:16]
        0x20, //TDS_LIMIT          1500B008[31:24]
        0xA,  //TDS_SAT_PROC       1500B00C[05:00]
        0x2, //TDS_AC_LPF_COE     1500B00C[11:08]
        0x2, //TDS_CLIP_THR       1500B00C[23:16]
        0x8, //TDS_CLIP_RATIO     1500B00C[28:24]
        0x1, //TDS_CLIP_EN        1500B00C[31:31]
        0x48, //TDS_YLEV_P048      1500B014[07:00]
        0x30, //TDS_YLEV_P032      1500B014[15:08]
        0x18, //TDS_YLEV_P016      1500B014[23:16]
        0x0, //TDS_YLEV_P000      1500B014[31:24]
        0x78, //TDS_YLEV_P112      1500B018[07:00]
        0x70, //TDS_YLEV_P096      1500B018[15:08]
        0x68, //TDS_YLEV_P080      1500B018[23:16]
        0x60, //TDS_YLEV_P064      1500B018[31:24]
        0x70, //TDS_YLEV_P176      1500B01C[07:00]
        0x76, //TDS_YLEV_P160      1500B01C[15:08]
        0x7B, //TDS_YLEV_P144      1500B01C[23:16]
        0x80, //TDS_YLEV_P128      1500B01C[31:24]
        0x5B, //TDS_YLEV_P240      1500B020[07:00]
        0x60, //TDS_YLEV_P224      1500B020[15:08]
        0x66, //TDS_YLEV_P208      1500B020[23:16]
        0x6B, //TDS_YLEV_P192      1500B020[31:24]
        0x1, //TDS_YLEV_EN        1500B024[14:14]
        0x10, //TDS_YLEV_ALPHA     1500B024[21:16]
        0x56, //TDS_YLEV_P256      1500B024[31:24]
        0x18, //PBC1_RADIUS_R      1500B040[05:00]
        0x18, //PBC1_THETA_R       1500B040[11:06]
        0x20, //PBC1_RSLOPE_1      1500B040[21:12]
        0x10, //PBC1_GAIN          1500B040[29:22]
        0x0, //PBC1_LPF_EN        1500B040[30:30]
        0x1, //PBC1_EN            1500B040[31:31]
        0x2B, //PBC1_TSLOPE        1500B044[15:06]
        0x20, //PBC1_RADIUS_C      1500B044[23:16]
        0x60, //PBC1_THETA_C       1500B044[31:24]
        0x20, //PBC1_EDGE_SLOPE    1500B048[05:00]
        0xC, //PBC1_EDGE_THR      1500B048[13:08]
        0x1, //PBC1_EDGE_EN       1500B048[14:14]
        0x5, //PBC1_CONF_GAIN     1500B048[19:16]
        0x2B  //PBC1_RSLOPE        1500B048[31:22]
}  
,        
{//11     
        0x10, //TDS_COR_GAIN       1500B000[07:00]
        0x20, //TDS_GAIN_HIGH      1500B000[15:08]
        0x10, //TDS_GAIN_MID       1500B000[23:16]
        0x0, //TDS_INK_SEL        1500B000[25:24]
        0x0, //TDS_BYPASS_HIGH    1500B000[29:29]
        0x0, //TDS_BYPASS_MID     1500B000[30:30]
        0x1, //TDS_EN             1500B000[31:31]
        0x8, //TDS_LIMIT_RATIO    1500B004[03:00]
        0x20, //TDS_GAIN           1500B004[11:04]
        0x2, //TDS_COR_ZERO       1500B004[23:16]
        0x4, //TDS_COR_THR        1500B004[31:24]
        0x3, //TDS_COR_VALUE      1500B008[15:08]
        0x30, //TDS_BOUND          1500B008[23:16]
        0x20, //TDS_LIMIT          1500B008[31:24]
        0xA,  //TDS_SAT_PROC       1500B00C[05:00]
        0x2, //TDS_AC_LPF_COE     1500B00C[11:08]
        0x2, //TDS_CLIP_THR       1500B00C[23:16]
        0x8, //TDS_CLIP_RATIO     1500B00C[28:24]
        0x1, //TDS_CLIP_EN        1500B00C[31:31]
        0x48, //TDS_YLEV_P048      1500B014[07:00]
        0x30, //TDS_YLEV_P032      1500B014[15:08]
        0x18, //TDS_YLEV_P016      1500B014[23:16]
        0x0, //TDS_YLEV_P000      1500B014[31:24]
        0x78, //TDS_YLEV_P112      1500B018[07:00]
        0x70, //TDS_YLEV_P096      1500B018[15:08]
        0x68, //TDS_YLEV_P080      1500B018[23:16]
        0x60, //TDS_YLEV_P064      1500B018[31:24]
        0x70, //TDS_YLEV_P176      1500B01C[07:00]
        0x76, //TDS_YLEV_P160      1500B01C[15:08]
        0x7B, //TDS_YLEV_P144      1500B01C[23:16]
        0x80, //TDS_YLEV_P128      1500B01C[31:24]
        0x5B, //TDS_YLEV_P240      1500B020[07:00]
        0x60, //TDS_YLEV_P224      1500B020[15:08]
        0x66, //TDS_YLEV_P208      1500B020[23:16]
        0x6B, //TDS_YLEV_P192      1500B020[31:24]
        0x1, //TDS_YLEV_EN        1500B024[14:14]
        0x10, //TDS_YLEV_ALPHA     1500B024[21:16]
        0x56, //TDS_YLEV_P256      1500B024[31:24]
        0x18, //PBC1_RADIUS_R      1500B040[05:00]
        0x18, //PBC1_THETA_R       1500B040[11:06]
        0x20, //PBC1_RSLOPE_1      1500B040[21:12]
        0x10, //PBC1_GAIN          1500B040[29:22]
        0x0, //PBC1_LPF_EN        1500B040[30:30]
        0x1, //PBC1_EN            1500B040[31:31]
        0x2B, //PBC1_TSLOPE        1500B044[15:06]
        0x20, //PBC1_RADIUS_C      1500B044[23:16]
        0x60, //PBC1_THETA_C       1500B044[31:24]
        0x20, //PBC1_EDGE_SLOPE    1500B048[05:00]
        0xC, //PBC1_EDGE_THR      1500B048[13:08]
        0x1, //PBC1_EDGE_EN       1500B048[14:14]
        0x5, //PBC1_CONF_GAIN     1500B048[19:16]
        0x2B  //PBC1_RSLOPE        1500B048[31:22]
}  
}        
};       
  