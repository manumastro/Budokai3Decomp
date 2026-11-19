#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sdk/libm", func_0011B4E8);
INCLUDE_ASM("asm/nonmatchings/sdk/libm", func_0011B828);
typedef union {
    float value;
    unsigned int word;
} ieee_float_shape_type_x0011BE30;
extern float __ieee754_sqrtf_x0011BE30(float x) __asm__("func_0011D730");
float func_0011BE30_x0011BE30(float x) __asm__("func_0011BE30");
/* __ieee754_acosf: from https://github.com/TheRealestNwah/sotc-decomp (src/xff/KERNEL/__ieee754_acosf.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
float func_0011BE30_x0011BE30(float x)
{
    float z, p, q, r, w, s, c, df;
    int hx, ix;
    do { ieee_float_shape_type_x0011BE30 gf_u; gf_u.value = (x); (hx) = gf_u.word; } while (0);
    ix = hx & 0x7fffffff;
    if (ix == 0x3f800000) {
        if (hx > 0) {
            return 0.0f;
        } else {
            return (3.1415925026e+00f) + (float)2.0 * (7.5497894159e-08f);
        }
    } else if (ix > 0x3f800000) {
        return (x - x) / (x - x);
    }
    if (ix < 0x3f000000) {
        if (ix <= 0x23000000) {
            return (1.5707962513e+00f) + (7.5497894159e-08f);
        }
        z = x * x;
        p = z * ((1.6666667163e-01f) + z * ((-3.2556581497e-01f) + z * ((2.0121252537e-01f) + z * ((-4.0055535734e-02f) + z * ((7.9153501429e-04f) + z * (3.4793309169e-05f))))));
        q = (1.0000000000e+00f) + z * ((-2.4033949375e+00f) + z * ((2.0209457874e+00f) + z * ((-6.8828397989e-01f) + z * (7.7038154006e-02f))));
        r = p / q;
        return (1.5707962513e+00f) - (x - ((7.5497894159e-08f) - x * r));
    } else if (hx < 0) {
        z = ((1.0000000000e+00f) + x) * (float)0.5;
        p = z * ((1.6666667163e-01f) + z * ((-3.2556581497e-01f) + z * ((2.0121252537e-01f) + z * ((-4.0055535734e-02f) + z * ((7.9153501429e-04f) + z * (3.4793309169e-05f))))));
        q = (1.0000000000e+00f) + z * ((-2.4033949375e+00f) + z * ((2.0209457874e+00f) + z * ((-6.8828397989e-01f) + z * (7.7038154006e-02f))));
        s = __ieee754_sqrtf_x0011BE30(z);
        r = p / q;
        w = r * s - (7.5497894159e-08f);
        return (3.1415925026e+00f) - (float)2.0 * (s + w);
    } else {
        int idf;
        z = ((1.0000000000e+00f) - x) * (float)0.5;
        s = __ieee754_sqrtf_x0011BE30(z);
        df = s;
        do { ieee_float_shape_type_x0011BE30 gf_u; gf_u.value = (df); (idf) = gf_u.word; } while (0);
        do { ieee_float_shape_type_x0011BE30 sf_u; sf_u.word = (idf & 0xfffff000); (df) = sf_u.value; } while (0);
        c = (z - df * df) / (s + df);
        p = z * ((1.6666667163e-01f) + z * ((-3.2556581497e-01f) + z * ((2.0121252537e-01f) + z * ((-4.0055535734e-02f) + z * ((7.9153501429e-04f) + z * (3.4793309169e-05f))))));
        q = (1.0000000000e+00f) + z * ((-2.4033949375e+00f) + z * ((2.0209457874e+00f) + z * ((-6.8828397989e-01f) + z * (7.7038154006e-02f))));
        r = p / q;
        w = r * s + c;
        return (float)2.0 * (df + w);
    }
}
INCLUDE_ASM("asm/nonmatchings/sdk/libm", func_0011C258);
INCLUDE_ASM("asm/nonmatchings/sdk/libm", func_0011C5F8);
INCLUDE_ASM("asm/nonmatchings/sdk/libm", func_0011C7D8);
INCLUDE_ASM("asm/nonmatchings/sdk/libm", func_0011CAB8);
INCLUDE_ASM("asm/nonmatchings/sdk/libm", func_0011CBA0);
INCLUDE_ASM("asm/nonmatchings/sdk/libm", func_0011D380);
typedef union {
    float value;
    unsigned int word;
} ieee_float_shape_type_x0011D730;
float func_0011D730_x0011D730(float x) __asm__("func_0011D730");
/* __ieee754_sqrtf: from https://github.com/TheRealestNwah/sotc-decomp (src/xff/KERNEL/__ieee754_sqrtf.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
float func_0011D730_x0011D730(float x)
{
    float z;
    unsigned int r, hx;
    int ix, s, q, m, t, i;
    do { ieee_float_shape_type_x0011D730 gf_u; gf_u.value = (x); (ix) = gf_u.word; } while (0);
    hx = ix & 0x7fffffff;
    if (!1) {
        return x * x + x;
    }
    if (((hx) < 0x00800000L)) {
        return x;
    } else if (ix < 0) {
        return (x - x) / (x - x);
    }
    m = (ix >> 23);
    if (0) {
        for (i = 0; (ix & 0x00800000L) == 0; i++) {
            ix <<= 1;
        }
        m -= i - 1;
    }
    m -= 127;
    ix = (ix & 0x007fffffL) | 0x00800000L;
    if (m & 1) {
        ix += ix;
    }
    m >>= 1;
    ix += ix;
    q = s = 0;
    r = 0x01000000L;
    while (r != 0) {
        t = s + r;
        if (t <= ix) {
            s = t + r;
            ix -= t;
            q += r;
        }
        ix += ix;
        r >>= 1;
    }
    if (ix != 0) {
        z = (1.0f) - (1.0e-30f);
        if (z >= (1.0f)) {
            z = (1.0f) + (1.0e-30f);
            if (z > (1.0f)) {
                q += 2;
            } else {
                q += (q & 1);
            }
        }
    }
    ix = (q >> 1) + 0x3f000000L;
    ix += (m << 23);
    do { ieee_float_shape_type_x0011D730 sf_u; sf_u.word = (ix); (z) = sf_u.value; } while (0);
    return z;
}
typedef int __int32_t_x0011D800;
typedef union {
    float value;
    unsigned int word;
} IeeeFloatWord_x0011D800;
float func_0011D800_x0011D800(float x, float y) __asm__("func_0011D800");
/* __kernel_cosf: from https://github.com/crashbashash/DW4_Decomp (src/newlib/kf_cos.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
float func_0011D800_x0011D800(float x, float y)
{
        float a,hz,z,r,qx;
        __int32_t_x0011D800 ix;
        do { IeeeFloatWord_x0011D800 gf_u; gf_u.value = (x); (ix) = gf_u.word; } while (0);
        ix &= 0x7fffffff;
        if(ix<0x32000000) {
            if(((int)x)==0) return ((float)1.0000000000e+00);
        }
        z = x*x;
        r = z*(((float)4.1666667908e-02)+z*(((float)-1.3888889225e-03)+z*(((float)2.4801587642e-05)+z*(((float)-2.7557314297e-07)+z*(((float)2.0875723372e-09)+z*((float)-1.1359647598e-11))))));
        if(ix < 0x3e99999a)
            return ((float)1.0000000000e+00) - ((float)0.5*z - (z*r - x*y));
        else {
            if(ix > 0x3f480000) {
                qx = (float)0.28125;
            } else {
                do { IeeeFloatWord_x0011D800 sf_u; sf_u.word = (ix-0x01000000); (qx) = sf_u.value; } while (0);
            }
            hz = (float)0.5*z-qx;
            a = ((float)1.0000000000e+00)-qx;
            return a - (hz - (z*r-x*y));
        }
}
extern float scalbnf_x0011D950(float, int) __asm__("func_0011F3F8");
extern float floorf_x0011D950(float) __asm__("func_0011F320");
extern const int D_0045EF90_x0011D950[3] __asm__("D_0045E4D8");
extern const float D_0045EFA0_x0011D950[] __asm__("D_0045E4E8");
int func_0011D950_x0011D950(float *x, float *y, int e0, int nx, int prec, const int *ipio2) __asm__("func_0011D950");
/* __kernel_rem_pio2f: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003a3dd8.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_0011D950_x0011D950(float *x, float *y, int e0, int nx, int prec, const int *ipio2)
{
        int jz,jx,jv,jp,jk,carry,n,iq[20],i,j,k,m,q0,ih;
        float z,fw,f[20],fq[20],q[20];
        jk = D_0045EF90_x0011D950[prec];
        jp = jk;
        jx = nx-1;
        jv = (e0-3)/8; if(jv<0) jv=0;
        q0 = e0-8*(jv+1);
        j = jv-jx; m = jx+jk;
        for(i=0;i<=m;i++,j++) f[i] = (j<0)? ((float)0.0) : (float) ipio2[j];
        for (i=0;i<=jk;i++) {
            for(j=0,fw=0.0;j<=jx;j++) fw += x[j]*f[jx+i-j]; q[i] = fw;
        }
        jz = jk;
recompute:
        for(i=0,j=jz,z=q[jz];j>0;i++,j--) {
            fw = (float)((int)(((float)0.00390625)* z));
            iq[i] = (int)(z-((float)256.0)*fw);
            z = q[j-1]+fw;
        }
        z = scalbnf_x0011D950(z,q0);
        z -= (float)8.0*floorf_x0011D950(z*(float)0.125);
        n = (int) z;
        z -= (float)n;
        ih = 0;
        if(q0>0) {
            i = (iq[jz-1]>>(8-q0)); n += i;
            iq[jz-1] -= i<<(8-q0);
            ih = iq[jz-1]>>(7-q0);
        }
        else if(q0==0) ih = iq[jz-1]>>8;
        else if(z>=(float)0.5) ih=2;
        if(ih>0) {
            n += 1; carry = 0;
            for(i=0;i<jz ;i++) {
                j = iq[i];
                if(carry==0) {
                    if(j!=0) {
                        carry = 1; iq[i] = 0x100- j;
                    }
                } else iq[i] = 0xff - j;
            }
            if(q0>0) {
                switch(q0) {
                case 1:
                   iq[jz-1] &= 0x7f; break;
                case 2:
                   iq[jz-1] &= 0x3f; break;
                }
            }
            if(ih==2) {
                z = ((float)1.0) - z;
                if(carry!=0) z -= scalbnf_x0011D950(((float)1.0),q0);
            }
        }
        if(z==((float)0.0)) {
            j = 0;
            for (i=jz-1;i>=jk;i--) j |= iq[i];
            if(j==0) {
                for(k=1;iq[jk-k]==0;k++);
                for(i=jz+1;i<=jz+k;i++) {
                    f[jx+i] = (float) ipio2[jv+i];
                    for(j=0,fw=0.0;j<=jx;j++) fw += x[j]*f[jx+i-j];
                    q[i] = fw;
                }
                jz += k;
                goto recompute;
            }
        }
        if(z==(float)0.0) {
            jz -= 1; q0 -= 8;
            while(iq[jz]==0) { jz--; q0-=8;}
        } else {
            z = scalbnf_x0011D950(z,-q0);
            if(z>=((float)256.0)) {
                fw = (float)((int)(((float)0.00390625)*z));
                iq[jz] = (int)(z-((float)256.0)*fw);
                jz += 1; q0 += 8;
                iq[jz] = (int) fw;
            } else iq[jz] = (int) z ;
        }
        fw = scalbnf_x0011D950(((float)1.0),q0);
        for(i=jz;i>=0;i--) {
            q[i] = fw*(float)iq[i]; fw*=((float)0.00390625);
        }
        for(i=jz;i>=0;i--) {
            for(fw=0.0,k=0;k<=jp&&k<=jz-i;k++) fw += D_0045EFA0_x0011D950[k]*q[i+k];
            fq[jz-i] = fw;
        }
        switch(prec) {
            case 0:
                fw = 0.0;
                for (i=jz;i>=0;i--) fw += fq[i];
                y[0] = (ih==0)? fw: -fw;
                break;
            case 1:
            case 2:
                fw = 0.0;
                for (i=jz;i>=0;i--) fw += fq[i];
                y[0] = (ih==0)? fw: -fw;
                fw = fq[0]-fw;
                for (i=1;i<=jz;i++) fw += fq[i];
                y[1] = (ih==0)? fw: -fw;
                break;
            case 3:
                for (i=jz;i>0;i--) {
                    fw = fq[i-1]+fq[i];
                    fq[i] += fq[i-1]-fw;
                    fq[i-1] = fw;
                }
                for (i=jz;i>1;i--) {
                    fw = fq[i-1]+fq[i];
                    fq[i] += fq[i-1]-fw;
                    fq[i-1] = fw;
                }
                for (fw=0.0,i=jz;i>=2;i--) fw += fq[i];
                if(ih==0) {
                    y[0] = fq[0]; y[1] = fq[1]; y[2] = fw;
                } else {
                    y[0] = -fq[0]; y[1] = -fq[1]; y[2] = -fw;
                }
        }
        return n&7;
}
typedef int __int32_t_x0011E1B8;
typedef union {
    float value;
    unsigned int word;
} IeeeFloatWord_x0011E1B8;
float func_0011E1B8_x0011E1B8(float x, float y, int iy) __asm__("func_0011E1B8");
/* __kernel_sinf: from https://github.com/crashbashash/DW4_Decomp (src/newlib/kf_sin.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
float func_0011E1B8_x0011E1B8(float x, float y, int iy)
{
        float z,r,v;
        __int32_t_x0011E1B8 ix;
        do { IeeeFloatWord_x0011E1B8 gf_u; gf_u.value = (x); (ix) = gf_u.word; } while (0);
        ix &= 0x7fffffff;
        if(ix<0x32000000)
           {if((int)x==0) return x;}
        z = x*x;
        v = z*x;
        r = ((float)8.3333337680e-03)+z*(((float)-1.9841270114e-04)+z*(((float)2.7557314297e-06)+z*(((float)-2.5050759689e-08)+z*((float)1.5896910177e-10))));
        if(iy==0) return x+v*(((float)-1.6666667163e-01)+z*r);
        else return x-((z*(((float)5.0000000000e-01)*y-v*r)-y)-v*((float)-1.6666667163e-01));
}
INCLUDE_ASM("asm/nonmatchings/sdk/libm", func_0011E2C0);
INCLUDE_ASM("asm/nonmatchings/sdk/libm", func_0011E548);
typedef union { double value; struct { unsigned int lsw; unsigned int msw; } parts; } ieee_double_shape_type_x0011EA10;
double func_0011EA10_x0011EA10(double x) __asm__("func_0011EA10");
/* Libc_Fabs: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libgcc/libgcc_3.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
double func_0011EA10_x0011EA10(double x)
{
    unsigned int high;
    do { ieee_double_shape_type_x0011EA10 gh_u; gh_u.value = (x); (high) = gh_u.parts.msw; } while (0);
    do { ieee_double_shape_type_x0011EA10 sh_u; sh_u.value = (x); sh_u.parts.msw = (high & 0x7fffffff); (x) = sh_u.value; } while (0);
    {
        register double r __asm__("$2") = x;
        __asm__ __volatile__("1:" : "+r"(r));
        return r;
    }
}
INCLUDE_ASM("asm/nonmatchings/sdk/libm", func_0011EA48);
