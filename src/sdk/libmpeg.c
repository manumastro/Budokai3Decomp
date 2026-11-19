#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_001020B0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_00102238);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_00102940);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_00102B90);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_00103018);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_00103238);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_00103478);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_001037A8);
typedef struct sceIpuDmaEnv_x00103BD0 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x00103BD0;
typedef struct sceMpeg_x00103BD0 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x00103BD0 *sys;
} sceMpeg_x00103BD0;
typedef enum {
    sceMpegCbError_x00103BD0,
    sceMpegCbNodata_x00103BD0,
    sceMpegCbStopDMA_x00103BD0,
    sceMpegCbRestartDMA_x00103BD0,
    sceMpegCbBackground_x00103BD0,
    sceMpegCbTimeStamp_x00103BD0,
    sceMpegCbStr_x00103BD0,
    sceMpegCbNum_x00103BD0
} sceMpegCbType_x00103BD0;
typedef struct {
    sceMpegCbType_x00103BD0 type;
    char *errMessage;
} sceMpegCbDataError_x00103BD0;
typedef struct {
    sceMpegCbType_x00103BD0 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x00103BD0;
typedef struct {
    sceMpegCbType_x00103BD0 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x00103BD0;
typedef union {
    sceMpegCbType_x00103BD0 type;
    sceMpegCbDataError_x00103BD0 error;
    sceMpegCbDataTimeStamp_x00103BD0 ts;
    sceMpegCbDataStr_x00103BD0 str;
} sceMpegCbData_x00103BD0;
typedef int (*sceMpegCallback_x00103BD0)(sceMpeg_x00103BD0 *mp, sceMpegCbData_x00103BD0 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x00103BD0 func;
    void *data;
    void *gp;  
} _sceMpegCallbackSlot_x00103BD0;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;  
} _sceMpegAlalc_x00103BD0;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;                               
    long dts;
    int decoded;                            
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;                 
    int center_offsets[6];                  
    int disp_width;                         
    int disp_height;
} _sceMpegPicture_x00103BD0;
typedef struct {
    _sceMpegPicture_x00103BD0 *ref_image;
    _sceMpegPicture_x00103BD0 *prev_image;
    _sceMpegPicture_x00103BD0 *decode;
    _sceMpegPicture_x00103BD0 *image;
} _sceMpegPictureSlot_x00103BD0;
typedef struct {
    short *dst;                             
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x00103BD0;
typedef void (*_sceMpegMcKernel_x00103BD0)(_sceMpegMcFetch_x00103BD0 *fetch);
typedef struct {
    unsigned int src;                       
    unsigned int dst;                       
    unsigned char *block[4];                
    unsigned char *block_right[4];          
    _sceMpegMcKernel_x00103BD0 luma_kernel[4];        
    _sceMpegMcKernel_x00103BD0 chroma_kernel[4];      
    _sceMpegMcFetch_x00103BD0 luma[4];                
    _sceMpegMcFetch_x00103BD0 chroma[4];              
    char *dest;                             
    int pred_count;                         
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x00103BD0;
typedef struct _sceMpegDecoder_x00103BD0 {
    int is_end;                             
    int ref_count;                          
    int seq_state;
    _sceMpegCallbackSlot_x00103BD0 callbacks[sceMpegCbNum_x00103BD0];
    char *spare_buffer;                     
    int spare;
    sceIpuDmaEnv_x00103BD0 ipu_dma_env;               
    int has_pts_gap;                        
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;                       
    int half_field;
    int ni;                                 
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;                     
    int rgb32;                              
    int center_offsets[6];
    int disp_width;                         
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;                        
    int image_height;
    int image_size;                         
    int set_broken_link;                    
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];                 
    _sceMpegAlalc_x00103BD0 alalc;                    
    int frame_no;                           
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;                           
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;                      
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;                
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];                       
    int picture_structure;                  
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;                  
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;                         
    int broken_link;
    int temporal_order;
    int dc_reset;                           
    int quantiser_scale_code;
    _sceMpegPictureSlot_x00103BD0 slots[3];           
    _sceMpegPicture_x00103BD0 pictures[9];            
    _sceMpegSprBuffer_x00103BD0 spr[2];               
    int mb_buffer;                          
    int mb_count;
    int ipu_cmd_pending;                    
    unsigned int mc_work;                   
    int stopped;                            
    int pad_2108;
    long pts;                               
    long dts;
    unsigned int bits;                      
    int bit_count;
    int load_intra_quantiser_matrix;        
    int load_non_intra_quantiser_matrix;
    int mpeg2;                              
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x00103BD0 *mp;                            
    char pad_2164[12];
    unsigned long long ipu_tags[260];       
    int abort;                              
    char pad_4260[28];
} _sceMpegDecoder_x00103BD0;
unsigned int _ipuGetBits_x00103BD0(_sceMpegDecoder_x00103BD0 *dec, int n) __asm__("func_00104728");
void _motionVector_x00103BD0(_sceMpegDecoder_x00103BD0 *dec, int *PMV, int *dmvector, int h_r_size, int v_r_size, int dmv, int mvscale, int full_pel_vector) __asm__("func_001037A8");
void _motionVector_x00103BD0(_sceMpegDecoder_x00103BD0 *dec, int *PMV, int *dmvector, int h_r_size, int v_r_size, int dmv, int mvscale,
                   int full_pel_vector) __asm__("func_001037A8");
unsigned int _ipuGetBits_x00103BD0(_sceMpegDecoder_x00103BD0 *dec, int n) __asm__("func_00104728");
void func_00103BD0_x00103BD0(_sceMpegDecoder_x00103BD0 *dec, int PMV[2][2][2], int *dmvector, int mv_field_sel[2][2], int s,
                    int motion_vector_count, int mv_format, int h_r_size, int v_r_size, int dmv, int mvscale) __asm__("func_00103BD0");
/* _motionVectors: from https://github.com/crashbashash/DW4_Decomp (src/sony/libmpeg/mpc.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00103BD0_x00103BD0(_sceMpegDecoder_x00103BD0 *dec, int PMV[2][2][2], int *dmvector, int mv_field_sel[2][2], int s,
                    int motion_vector_count, int mv_format, int h_r_size, int v_r_size, int dmv, int mvscale)
{
    if (motion_vector_count == 1) {
        if (mv_format == 0 && !dmv) {
            mv_field_sel[1][s] = mv_field_sel[0][s] = _ipuGetBits_x00103BD0(dec, 1);
        }
        _motionVector_x00103BD0(dec, PMV[0][s], dmvector, h_r_size, v_r_size, dmv, mvscale, 0);
        PMV[1][s][0] = PMV[0][s][0];
        PMV[1][s][1] = PMV[0][s][1];
    } else {
        mv_field_sel[0][s] = _ipuGetBits_x00103BD0(dec, 1);
        _motionVector_x00103BD0(dec, PMV[0][s], dmvector, h_r_size, v_r_size, dmv, mvscale, 0);
        mv_field_sel[1][s] = _ipuGetBits_x00103BD0(dec, 1);
        _motionVector_x00103BD0(dec, PMV[1][s], dmvector, h_r_size, v_r_size, dmv, mvscale, 0);
    }
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_00103D70);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_001042C8);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_00104440);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_001045A8);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_00104728);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_00104810);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_001048A0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_00104938);
s32 func_001048A0_x00104970() __asm__("func_001048A0");
void func_00104970_x00104970(s32 arg0, s32 arg1) __asm__("func_00104970");
void func_00104970_x00104970(s32 arg0, s32 arg1) {
    func_001048A0_x00104970(arg0, arg1);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_00104978);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg", func_00104A38);
