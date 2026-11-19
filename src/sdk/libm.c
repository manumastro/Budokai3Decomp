/* newlib objects were assembled without delay-slot filling: as-flags: -O1 */
#include "common.h"

typedef int __int32_t_x0011B4E8;
typedef unsigned int __uint32_t_x0011B4E8;
typedef union {
    double value;
    struct {
        __uint32_t_x0011B4E8 lsw;
        __uint32_t_x0011B4E8 msw;
    } parts;
} ieee_double_shape_type_x0011B4E8;
extern double atan_x0011B4E8(double x) __asm__("func_0011E548");
extern double fabs_x0011B4E8(double x, ...) __asm__("func_0011EA10");
static const double
tiny_x0011B4E8 = 1.0e-300,
zero_x0011B4E8 = 0.0,
pi_o_4_x0011B4E8 = 7.8539816339744827900E-01,
pi_o_2_x0011B4E8 = 1.5707963267948965580E+00,
pi_x0011B4E8 = 3.1415926535897931160E+00,
pi_lo_x0011B4E8 = 1.2246467991473531772E-16;
double func_0011B4E8_x0011B4E8(double y, double x) __asm__("func_0011B4E8");
/* __ieee754_atan2: from https://github.com/denzi-gh/crashwoc-decomp-ps2 (src/sdk/newlib/libm/math/e_atan2.c, GPL-3.0); ee-gcc 2.96 -O2 -G0 */
double func_0011B4E8_x0011B4E8(double y, double x)
{
    double z;
    __int32_t_x0011B4E8 k, m, hx, hy, ix, iy;
    __uint32_t_x0011B4E8 lx, ly;
    do { ieee_double_shape_type_x0011B4E8 ew_u; ew_u.value = (x); (hx) = ew_u.parts.msw; (lx) = ew_u.parts.lsw; } while (0);
    ix = hx & 0x7fffffff;
    do { ieee_double_shape_type_x0011B4E8 ew_u; ew_u.value = (y); (hy) = ew_u.parts.msw; (ly) = ew_u.parts.lsw; } while (0);
    iy = hy & 0x7fffffff;
    if (((ix | ((lx | -lx) >> 31)) > 0x7ff00000) ||
        ((iy | ((ly | -ly) >> 31)) > 0x7ff00000)) {
        return x + y;
    }
    if (((hx - 0x3ff00000) | lx) == 0) {
        return atan_x0011B4E8(y);
    }
    m = ((hy >> 31) & 1) | ((hx >> 30) & 2);
    if ((iy | ly) == 0) {
        switch (m) {
        case 0:
        case 1:
            return y;
        case 2:
            return pi_x0011B4E8 + tiny_x0011B4E8;
        case 3:
            return -pi_x0011B4E8 - tiny_x0011B4E8;
        }
    }
    if ((ix | lx) == 0) {
        return (hy < 0) ? -pi_o_2_x0011B4E8 - tiny_x0011B4E8 : pi_o_2_x0011B4E8 + tiny_x0011B4E8;
    }
    if (ix == 0x7ff00000) {
        if (iy == 0x7ff00000) {
            switch (m) {
            case 0:
                return pi_o_4_x0011B4E8 + tiny_x0011B4E8;
            case 1:
                return -pi_o_4_x0011B4E8 - tiny_x0011B4E8;
            case 2:
                return 3.0 * pi_o_4_x0011B4E8 + tiny_x0011B4E8;
            case 3:
                return -3.0 * pi_o_4_x0011B4E8 - tiny_x0011B4E8;
            }
        } else {
            switch (m) {
            case 0:
                return zero_x0011B4E8;
            case 1:
                return -zero_x0011B4E8;
            case 2:
                return pi_x0011B4E8 + tiny_x0011B4E8;
            case 3:
                return -pi_x0011B4E8 - tiny_x0011B4E8;
            }
        }
    }
    if (iy == 0x7ff00000) {
        return (hy < 0) ? -pi_o_2_x0011B4E8 - tiny_x0011B4E8 : pi_o_2_x0011B4E8 + tiny_x0011B4E8;
    }
    k = (iy - ix) >> 20;
    if (k > 60) {
        z = pi_o_2_x0011B4E8 + 0.5 * pi_lo_x0011B4E8;
    } else if (hx < 0 && k < -60) {
        z = 0.0;
    } else {
        z = atan_x0011B4E8(fabs_x0011B4E8(y / x));
    }
    switch (m) {
    case 0:
        return z;
    case 1: {
        __uint32_t_x0011B4E8 zh;
        do { ieee_double_shape_type_x0011B4E8 gh_u; gh_u.value = (z); (zh) = gh_u.parts.msw; } while (0);
        do { ieee_double_shape_type_x0011B4E8 sh_u; sh_u.value = (z); sh_u.parts.msw = (zh ^ 0x80000000); (z) = sh_u.value; } while (0);
    }
        return z;
    case 2:
        return pi_x0011B4E8 - (z - pi_lo_x0011B4E8);
    default:
        return (z - pi_lo_x0011B4E8) - pi_x0011B4E8;
    }
}
__asm__("# rebind func_0011B4E8 0x0011B4E8");
__asm__("# noswap func_0011B4E8");
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
typedef union { float value; unsigned int word; } ieee_float_shape_type_x0011C258;
extern float Math_Sqrtf_x0011C258(float x) __asm__("func_0011D730");
extern float Libc_Fabsf_x0011C258(float x) __asm__("func_0011F2F8");
float func_0011C258_x0011C258(float x) __asm__("func_0011C258");
/* Math_AsinfImpl: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libgcc/libgcc_2.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
float func_0011C258_x0011C258(float x)
{
        const float
        one = 1.0000000000e+00,
        huge = 1.000e+30,
        pio2_hi = 1.5707962513e+00,
        pio2_lo = 7.5497894159e-08,
        pio4_hi = 7.8539818525e-01,
        pS0 = 1.6666667163e-01,
        pS1 = -3.2556581497e-01,
        pS2 = 2.0121252537e-01,
        pS3 = -4.0055535734e-02,
        pS4 = 7.9153501429e-04,
        pS5 = 3.4793309169e-05,
        qS1 = -2.4033949375e+00,
        qS2 = 2.0209457874e+00,
        qS3 = -6.8828397989e-01,
        qS4 = 7.7038154006e-02;
        float t,w,p,q,c,r,s;
        int hx,ix;
        do { ieee_float_shape_type_x0011C258 gf_u; gf_u.value = (x); (hx) = gf_u.word; } while (0);
        ix = hx&0x7fffffff;
        if(ix==0x3f800000) {
            return x*pio2_hi+x*pio2_lo;
        } else if(ix> 0x3f800000) {
            return (x-x)/(x-x);
        } else if (ix<0x3f000000) {
            if(ix<0x32000000) {
                if(huge+x>one) return x;
            } else {
                t = x*x;
                p = t*(pS0+t*(pS1+t*(pS2+t*(pS3+t*(pS4+t*pS5)))));
                q = one+t*(qS1+t*(qS2+t*(qS3+t*qS4)));
                w = p/q;
                return x+x*w;
            }
        }
        w = one-Libc_Fabsf_x0011C258(x);
        t = w*(float)0.5;
        p = t*(pS0+t*(pS1+t*(pS2+t*(pS3+t*(pS4+t*pS5)))));
        q = one+t*(qS1+t*(qS2+t*(qS3+t*qS4)));
        s = Math_Sqrtf_x0011C258(t);
        if(ix>=0x3F79999A) {
            w = p/q;
            t = pio2_hi-((float)2.0*(s+s*w)-pio2_lo);
        } else {
            int iw;
            w = s;
            do { ieee_float_shape_type_x0011C258 gf_u; gf_u.value = (w); (iw) = gf_u.word; } while (0);
            do { ieee_float_shape_type_x0011C258 sf_u; sf_u.word = (iw&0xfffff000); (w) = sf_u.value; } while (0);
            c = (t-w*w)/(s+w);
            r = p/q;
            p = (float)2.0*s*r-(pio2_lo-(float)2.0*c);
            q = pio4_hi-(float)2.0*w;
            t = pio4_hi-(p-q);
        }
        if(hx>0) return t; else return -t;
}
typedef union { float value; unsigned int word; } ieee_float_shape_type_x0011C5F8;
extern float Libc_Fabsf_x0011C5F8(float x) __asm__("func_0011F2F8");
extern float Libc_Atanf_x0011C5F8(float x) __asm__("func_0011EE78");
float func_0011C5F8_x0011C5F8(float y, float x) __asm__("func_0011C5F8");
/* Math_Atan2Kernel: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libgcc/libgcc_2.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
float func_0011C5F8_x0011C5F8(float y, float x)
{
        const float
        tiny = 1.0e-30,
        pi_o_2 = 1.5707963705e+00,
        pi = 3.1415925026e+00,
        pi_lo = 1.5099578832e-07;
        float z;
        int k,m,hx,hy,ix,iy;
        do { ieee_float_shape_type_x0011C5F8 gf_u; gf_u.value = (x); (hx) = gf_u.word; } while (0);
        ix = hx&0x7fffffff;
        do { ieee_float_shape_type_x0011C5F8 gf_u; gf_u.value = (y); (hy) = gf_u.word; } while (0);
        iy = hy&0x7fffffff;
        if(hx==0x3f800000) return Libc_Atanf_x0011C5F8(y);
        m = ((hy>>31)&1)|((hx>>30)&2);
        if(iy < 0x00800000L) {
            switch(m) {
                case 0:
                case 1: return y;
                case 2: return pi+tiny;
                case 3: return -pi-tiny;
            }
        }
        if(ix < 0x00800000L) return (hy<0)? -pi_o_2-tiny: pi_o_2+tiny;
        k = (iy-ix)>>23;
        if(k > 60) z=pi_o_2+(float)0.5*pi_lo;
        else if(hx<0&&k<-60) z=0.0;
        else z=Libc_Atanf_x0011C5F8(Libc_Fabsf_x0011C5F8(y/x));
        switch (m) {
            case 0: return z ;
            case 1: {
                      unsigned int zh;
                      do { ieee_float_shape_type_x0011C5F8 gf_u; gf_u.value = (z); (zh) = gf_u.word; } while (0);
                      do { ieee_float_shape_type_x0011C5F8 sf_u; sf_u.word = (zh ^ 0x80000000); (z) = sf_u.value; } while (0);
                    }
                    return z ;
            case 2: return pi-(z-pi_lo);
            default:
                    return (z-pi_lo)-pi;
        }
}
__asm__("# rebind func_0011C5F8 0x0011C5F8");
typedef union { float value; unsigned int word; } ieee_float_shape_type_x0011C7D8;
extern const float two25_x0011C7D8 __asm__("two25");
extern const float zero_x0011C7D8 __asm__("zero");
float func_0011C7D8_x0011C7D8(float x) __asm__("func_0011C7D8");
/* func_0011DDA8: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libgcc/libgcc_11D980.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
float func_0011C7D8_x0011C7D8(float x)
{
        const float
        ln2_hi = 6.9313812256e-01,
        ln2_lo = 9.0580006145e-06,
        Lg1 = 6.6666668653e-01,
        Lg2 = 4.0000000596e-01,
        Lg3 = 2.8571429849e-01,
        Lg4 = 2.2222198546e-01,
        Lg5 = 1.8183572590e-01,
        Lg6 = 1.5313838422e-01,
        Lg7 = 1.4798198640e-01;
        const float two25_x0011C7D8 = 3.355443200e+07;
        const float zero_x0011C7D8 = 0.0;
        float hfsq,f,s,z,R,w,t1,t2,dk;
        int k,ix,i,j;
        do { ieee_float_shape_type_x0011C7D8 gf_u; gf_u.value = (x); (ix) = gf_u.word; } while (0);
        k=0;
        if ((ix&0x7fffffff) < 0x00800000L)
            return -two25_x0011C7D8/zero_x0011C7D8;
        if (ix<0) return (x-x)/zero_x0011C7D8;
        k += (ix>>23)-127;
        ix &= 0x007fffff;
        i = (ix+(0x95f64<<3))&0x800000;
        do { ieee_float_shape_type_x0011C7D8 sf_u; sf_u.word = (ix|(i^0x3f800000)); (x) = sf_u.value; } while (0);
        k += (i>>23);
        f = x-(float)1.0;
        if((0x007fffff&(15+ix))<16) {
            if(f==zero_x0011C7D8) { if(k==0) return zero_x0011C7D8; else {dk=(float)k;
                                 return dk*ln2_hi+dk*ln2_lo;}}
            R = f*f*((float)0.5-(float)0.33333333333333333*f);
            if(k==0) return f-R; else {dk=(float)k;
                     return dk*ln2_hi-((R-dk*ln2_lo)-f);}
        }
        s = f/((float)2.0+f);
        dk = (float)k;
        z = s*s;
        i = ix-(0x6147a<<3);
        w = z*z;
        j = (0x6b851<<3)-ix;
        t1= w*(Lg2+w*(Lg4+w*Lg6));
        t2= z*(Lg1+w*(Lg3+w*(Lg5+w*Lg7)));
        i |= j;
        R = t2+t1;
        if(i>0) {
            hfsq=(float)0.5*f*f;
            if(k==0) return f-(hfsq-s*(hfsq+R)); else
                     return dk*ln2_hi-((hfsq-(s*(hfsq+R)+dk*ln2_lo))-f);
        } else {
            if(k==0) return f-s*(f-R); else
                     return dk*ln2_hi-((s*(f-R)-dk*ln2_lo)-f);
        }
}
__asm__("# rebind func_0011C7D8 0x0011C7D8");
INCLUDE_ASM("asm/nonmatchings/sdk/libm", func_0011CAB8);
typedef union { float value; unsigned int word; } ieee_float_shape_type_x0011CBA0;
extern const float zero_x0011CBA0 __asm__("zero");
extern const float bp_x0011CBA0[] __asm__("D_0045E090");
extern const float dp_h_x0011CBA0[] __asm__("D_0045E098");
extern const float dp_l_x0011CBA0[] __asm__("D_0045E0A0");
extern const float D_004995FC_x0011CBA0 __asm__("D_0045E114");
extern float Math_Sqrtf_x0011CBA0(float x) __asm__("func_0011D730");
extern float Libc_Fabsf_x0011CBA0(float x) __asm__("func_0011F2F8");
extern float scalbnf_x0011CBA0(float x, int n) __asm__("func_0011F3F8");
float func_0011CBA0_x0011CBA0(float x, float y) __asm__("func_0011CBA0");
/* Math_PowfKernel: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libgcc/libgcc_11D980.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
float func_0011CBA0_x0011CBA0(float x, float y)
{
        const float
        zero_x0011CBA0 = 0.0,
        one = 1.0,
        two = 2.0,
        huge = 1.0e30,
        tiny = 1.0e-30,
        L1 = 6.0000002384e-01,
        L2 = 4.2857143283e-01,
        L3 = 3.3333334327e-01,
        L4 = 2.7272811532e-01,
        L5 = 2.3066075146e-01,
        L6 = 2.0697501302e-01,
        P1 = 1.6666667163e-01,
        P2 = -2.7777778450e-03,
        P3 = 6.6137559770e-05,
        P4 = -1.6533901999e-06,
        P5 = 4.1381369442e-08,
        lg2 = 6.9314718246e-01,
        lg2_h = 6.93145752e-01,
        lg2_l = 1.42860654e-06,
        ovt = 4.2995665694e-08,
        cp = 9.6179670095e-01,
        cp_h = 9.6179199219e-01,
        cp_l = 4.7017383622e-06,
        ivln2 = 1.4426950216e+00,
        ivln2_h = 1.4426879883e+00,
        ivln2_l = 7.0526075433e-06;
        float z,ax,z_h,z_l,p_h,p_l;
        float y1,t1,t2,r,s,t,u,v,w;
        int i,j,k,yisint,n;
        int hx,hy,ix,iy,is;
        do { ieee_float_shape_type_x0011CBA0 gf_u; gf_u.value = (x); (hx) = gf_u.word; } while (0);
        do { ieee_float_shape_type_x0011CBA0 gf_u; gf_u.value = (y); (hy) = gf_u.word; } while (0);
        ix = hx&0x7fffffff; iy = hy&0x7fffffff;
        if(iy < 0x00800000L) return one;
        yisint = 0;
        if(hx<0) {
            if(iy>=0x4b800000) yisint = 2;
            else if(iy>=0x3f800000) {
                k = (iy>>23)-0x7f;
                j = iy>>(23-k);
                if((j<<(23-k))==iy) yisint = 2-(j&1);
            }
        }
        if(iy==0x3f800000) {
            if(hy<0) return one/x; else return x;
        }
        if(hy==0x40000000) return x*x;
        if(hy==0x3f000000) {
            if(hx>=0)
            return Math_Sqrtf_x0011CBA0(x);
        }
        ax = Libc_Fabsf_x0011CBA0(x);
        if(ix < 0x00800000L||ix==0x3f800000){
            z = ax;
            if(hy<0) z = one/z;
            if(hx<0) {
                if(((ix-0x3f800000)|yisint)==0) {
                    z = (z-z)/(z-z);
                } else if(yisint==1)
                    z = -z;
            }
            return z;
        }
        if(((((unsigned int)hx>>31)-1)|yisint)==0) return (x-x)/(x-x);
        if(iy>0x4d000000) {
            if(ix<0x3f7ffff8) return (hy<0)? D_004995FC_x0011CBA0:tiny*tiny;
            if(ix>0x3f800007) return (hy>0)? D_004995FC_x0011CBA0:tiny*tiny;
            t = x-1;
            w = (t*t)*((float)0.5-t*((float)0.333333333333-t*(float)0.25));
            u = ivln2_h*t;
            v = t*ivln2_l-w*ivln2;
            t1 = u+v;
            do { ieee_float_shape_type_x0011CBA0 gf_u; gf_u.value = (t1); (is) = gf_u.word; } while (0);
            do { ieee_float_shape_type_x0011CBA0 sf_u; sf_u.word = (is&0xfffff000); (t1) = sf_u.value; } while (0);
            t2 = v-(t1-u);
        } else {
            float s2,s_h,s_l,t_h,t_l;
            n = 0;
            n += ((ix)>>23)-0x7f;
            j = ix&0x007fffff;
            ix = j|0x3f800000;
            if(j<=0x1cc471) k=0;
            else if(j<0x5db3d7) k=1;
            else {k=0;n+=1;ix -= 0x00800000;}
            do { ieee_float_shape_type_x0011CBA0 sf_u; sf_u.word = (ix); (ax) = sf_u.value; } while (0);
            u = ax-bp_x0011CBA0[k];
            v = one/(ax+bp_x0011CBA0[k]);
            s = u*v;
            s_h = s;
            do { ieee_float_shape_type_x0011CBA0 gf_u; gf_u.value = (s_h); (is) = gf_u.word; } while (0);
            do { ieee_float_shape_type_x0011CBA0 sf_u; sf_u.word = (is&0xfffff000); (s_h) = sf_u.value; } while (0);
            do { ieee_float_shape_type_x0011CBA0 sf_u; sf_u.word = (((ix>>1)|0x20000000)+0x0040000+(k<<21)); (t_h) = sf_u.value; } while (0);
            t_l = ax - (t_h-bp_x0011CBA0[k]);
            s_l = v*((u-s_h*t_h)-s_h*t_l);
            s2 = s*s;
            r = s2*s2*(L1+s2*(L2+s2*(L3+s2*(L4+s2*(L5+s2*L6)))));
            r += s_l*(s_h+s);
            s2 = s_h*s_h;
            t_h = (float)3.0+s2+r;
            do { ieee_float_shape_type_x0011CBA0 gf_u; gf_u.value = (t_h); (is) = gf_u.word; } while (0);
            do { ieee_float_shape_type_x0011CBA0 sf_u; sf_u.word = (is&0xfffff000); (t_h) = sf_u.value; } while (0);
            t_l = r-((t_h-(float)3.0)-s2);
            u = s_h*t_h;
            v = s_l*t_h+t_l*s;
            p_h = u+v;
            do { ieee_float_shape_type_x0011CBA0 gf_u; gf_u.value = (p_h); (is) = gf_u.word; } while (0);
            do { ieee_float_shape_type_x0011CBA0 sf_u; sf_u.word = (is&0xfffff000); (p_h) = sf_u.value; } while (0);
            p_l = v-(p_h-u);
            z_h = cp_h*p_h;
            z_l = cp_l*p_h+p_l*cp+dp_l_x0011CBA0[k];
            t = (float)n;
            t1 = (((z_h+z_l)+dp_h_x0011CBA0[k])+t);
            do { ieee_float_shape_type_x0011CBA0 gf_u; gf_u.value = (t1); (is) = gf_u.word; } while (0);
            do { ieee_float_shape_type_x0011CBA0 sf_u; sf_u.word = (is&0xfffff000); (t1) = sf_u.value; } while (0);
            t2 = z_l-(((t1-t)-dp_h_x0011CBA0[k])-z_h);
        }
        s = one;
        if(((((unsigned int)hx>>31)-1)|(yisint-1))==0)
            s = -one;
        do { ieee_float_shape_type_x0011CBA0 gf_u; gf_u.value = (y); (is) = gf_u.word; } while (0);
        do { ieee_float_shape_type_x0011CBA0 sf_u; sf_u.word = (is&0xfffff000); (y1) = sf_u.value; } while (0);
        p_l = (y-y1)*t1+y*t2;
        p_h = y1*t1;
        z = p_l+p_h;
        do { ieee_float_shape_type_x0011CBA0 gf_u; gf_u.value = (z); (j) = gf_u.word; } while (0);
        i = j&0x7fffffff;
        if (j>0) {
            if (i>0x43010000)
                return s*huge*huge;
            else if (i==0x43010000)
                if(p_l+ovt>z-p_h) return s*huge*huge;
        } else if (i>0x42fc0000) {
                return s*tiny*tiny;
        } else if (i==0x42fc0000) {
            if(p_l<=z-p_h) return s*tiny*tiny;
        }
        k = (i>>23)-0x7f;
        n = 0;
        if(i>0x3f000000) {
            n = j+(0x00800000>>(k+1));
            k = ((n&0x7fffffff)>>23)-0x7f;
            do { ieee_float_shape_type_x0011CBA0 sf_u; sf_u.word = (n&~(0x007fffff>>k)); (t) = sf_u.value; } while (0);
            n = ((n&0x007fffff)|0x00800000)>>(23-k);
            if(j<0) n = -n;
            p_h -= t;
        }
        t = p_l+p_h;
        do { ieee_float_shape_type_x0011CBA0 gf_u; gf_u.value = (t); (is) = gf_u.word; } while (0);
        do { ieee_float_shape_type_x0011CBA0 sf_u; sf_u.word = (is&0xfffff000); (t) = sf_u.value; } while (0);
        u = t*lg2_h;
        v = (p_l-(t-p_h))*lg2+t*lg2_l;
        z = u+v;
        w = v-(z-u);
        t = z*z;
        t1 = z - t*(P1+t*(P2+t*(P3+t*(P4+t*P5))));
        r = (z*t1)/(t1-two)-(w+z*w);
        z = one-(r-z);
        do { ieee_float_shape_type_x0011CBA0 gf_u; gf_u.value = (z); (j) = gf_u.word; } while (0);
        j += (n<<23);
        if((j>>23)<=0) z = scalbnf_x0011CBA0(z,(int)n);
        else do { ieee_float_shape_type_x0011CBA0 sf_u; sf_u.word = (j); (z) = sf_u.value; } while (0);
        return s*z;
}
typedef union { float value; unsigned int word; } ieee_float_shape_type_x0011D380;
extern const int two_over_pi_x0011D380[198] __asm__("D_0045E118");
static const int npio2_hw[32] = {
        0x3FC90F00, 0x40490F00, 0x4096CB00, 0x40C90F00, 0x40FB5300, 0x4116CB00, 0x412FED00, 0x41490F00,
        0x41623100, 0x417B5300, 0x418A3A00, 0x4196CB00, 0x41A35C00, 0x41AFED00, 0x41BC7E00, 0x41C90F00,
        0x41D5A000, 0x41E23100, 0x41EEC200, 0x41FB5300, 0x4203F200, 0x420A3A00, 0x42108300, 0x4216CB00,
        0x421D1400, 0x42235C00, 0x4229A500, 0x422FED00, 0x42363600, 0x423C7E00, 0x4242C700, 0x42490F00,
};
extern float Libc_Fabsf_x0011D380(float x) __asm__("func_0011F2F8");
extern int Math_RemPio2Kernel_x0011D380(float *x, float *y, int e0, int nx, int prec, const int *ipio2) __asm__("func_0011D950");
int func_0011D380_x0011D380(float x, float *y) __asm__("func_0011D380");
/* Math_RemPio2: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libgcc/libgcc_11E950.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
int func_0011D380_x0011D380(float x, float *y)
{
        const float
        zero = 0.0000000000e+00,
        half = 5.0000000000e-01,
        two8 = 2.5600000000e+02,
        invpio2 = 6.3661980629e-01,
        pio2_1 = 1.5707855225e+00,
        pio2_1t = 1.0804334124e-05,
        pio2_2 = 1.0804273188e-05,
        pio2_2t = 6.0770999344e-11,
        pio2_3 = 6.0770943833e-11,
        pio2_3t = 6.1232342629e-17;
        float z,w,t,r,fn;
        float tx[3];
        int i,j,n,ix,hx;
        int e0,nx;
        do { ieee_float_shape_type_x0011D380 gf_u; gf_u.value = (x); (hx) = gf_u.word; } while (0);
        ix = hx&0x7fffffff;
        if(ix<=0x3f490fd8)
            {y[0] = x; y[1] = 0; return 0;}
        if(ix<0x4016cbe4) {
            if(hx>0) {
                z = x - pio2_1;
                if((ix&0xfffffff0)!=0x3fc90fd0) {
                    y[0] = z - pio2_1t;
                    y[1] = (z-y[0])-pio2_1t;
                } else {
                    z -= pio2_2;
                    y[0] = z - pio2_2t;
                    y[1] = (z-y[0])-pio2_2t;
                }
                return 1;
            } else {
                z = x + pio2_1;
                if((ix&0xfffffff0)!=0x3fc90fd0) {
                    y[0] = z + pio2_1t;
                    y[1] = (z-y[0])+pio2_1t;
                } else {
                    z += pio2_2;
                    y[0] = z + pio2_2t;
                    y[1] = (z-y[0])+pio2_2t;
                }
                return -1;
            }
        }
        if(ix<=0x43490f80) {
            t = Libc_Fabsf_x0011D380(x);
            n = (int) (t*invpio2+half);
            fn = (float)n;
            r = t-fn*pio2_1;
            w = fn*pio2_1t;
            if(n<32&&(ix&0xffffff00)!=npio2_hw[n-1]) {
                y[0] = r-w;
            } else {
                unsigned int high;
                j = ix>>23;
                y[0] = r-w;
                do { ieee_float_shape_type_x0011D380 gf_u; gf_u.value = (y[0]); (high) = gf_u.word; } while (0);
                i = j-((high>>23)&0xff);
                if(i>8) {
                    t = r;
                    w = fn*pio2_2;
                    r = t-w;
                    w = fn*pio2_2t-((t-r)-w);
                    y[0] = r-w;
                    do { ieee_float_shape_type_x0011D380 gf_u; gf_u.value = (y[0]); (high) = gf_u.word; } while (0);
                    i = j-((high>>23)&0xff);
                    if(i>25) {
                        t = r;
                        w = fn*pio2_3;
                        r = t-w;
                        w = fn*pio2_3t-((t-r)-w);
                        y[0] = r-w;
                    }
                }
            }
            y[1] = (r-y[0])-w;
            if(hx<0) {y[0] = -y[0]; y[1] = -y[1]; return -n;}
            else return n;
        }
        e0 = (int)((ix>>23)-134);
        do { ieee_float_shape_type_x0011D380 sf_u; sf_u.word = (ix - ((int)e0<<23)); (z) = sf_u.value; } while (0);
        for(i=0;i<2;i++) {
                tx[i] = (float)((int)(z));
                z = (z-tx[i])*two8;
        }
        tx[2] = z;
        nx = 3;
        while(tx[nx-1]==zero) nx--;
        n = Math_RemPio2Kernel_x0011D380(tx,y,e0,nx,2,two_over_pi_x0011D380);
        if(hx<0) {y[0] = -y[0]; y[1] = -y[1]; return -n;}
        return n;
}
__asm__("# rebind func_0011D380 0x0011D380");
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
typedef union { float value; unsigned int word; } ieee_float_shape_type_x0011E2C0;
extern const float T_x0011E2C0[] __asm__("D_0045E538");
extern float Libc_Fabsf_x0011E2C0(float x) __asm__("func_0011F2F8");
float func_0011E2C0_x0011E2C0(float x, float y, int iy) __asm__("func_0011E2C0");
/* Math_TanKernel: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libgcc/libgcc_11FBF8.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
float func_0011E2C0_x0011E2C0(float x, float y, int iy)
{
        const float
        one = 1.0000000000e+00,
        pio4 = 7.8539812565e-01,
        pio4lo= 3.7748947079e-08;
        float z,r,v,w,s;
        int ix,hx;
        do { ieee_float_shape_type_x0011E2C0 gf_u; gf_u.value = (x); (hx) = gf_u.word; } while (0);
        ix = hx&0x7fffffff;
        if(ix<0x31800000)
            {if((int)x==0) {
                if((ix|(iy+1))==0) return one/Libc_Fabsf_x0011E2C0(x);
                else return (iy==1)? x: -one/x;
            }
            }
        if(ix>=0x3f2ca140) {
            if(hx<0) {x = -x; y = -y;}
            z = pio4-x;
            w = pio4lo-y;
            x = z+w; y = 0.0;
        }
        z = x*x;
        w = z*z;
        r = T_x0011E2C0[1]+w*(T_x0011E2C0[3]+w*(T_x0011E2C0[5]+w*(T_x0011E2C0[7]+w*(T_x0011E2C0[9]+w*T_x0011E2C0[11]))));
        v = z*(T_x0011E2C0[2]+w*(T_x0011E2C0[4]+w*(T_x0011E2C0[6]+w*(T_x0011E2C0[8]+w*(T_x0011E2C0[10]+w*T_x0011E2C0[12])))));
        s = z*x;
        r = y + z*(s*(r+v)+y);
        r += T_x0011E2C0[0]*s;
        w = x+r;
        if(ix>=0x3f2ca140) {
            v = (float)iy;
            return (float)(1-((hx>>30)&2))*(v-(float)2.0*(x-(w*w/(w+v)-r)));
        }
        if(iy==1) return w;
        else {
            float a,t;
            int i;
            z = w;
            do { ieee_float_shape_type_x0011E2C0 gf_u; gf_u.value = (z); (i) = gf_u.word; } while (0);
            do { ieee_float_shape_type_x0011E2C0 sf_u; sf_u.word = (i&0xfffff000); (z) = sf_u.value; } while (0);
            v = r-(z - x);
            t = a = -(float)1.0/w;
            do { ieee_float_shape_type_x0011E2C0 gf_u; gf_u.value = (t); (i) = gf_u.word; } while (0);
            do { ieee_float_shape_type_x0011E2C0 sf_u; sf_u.word = (i&0xfffff000); (t) = sf_u.value; } while (0);
            s = (float)1.0+t*z;
            return t+a*(s+t*v);
        }
}
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
typedef union { double value; struct { unsigned int lsw; unsigned int msw; } parts; } ieee_double_shape_type_x0011EA48;
extern const double D_00499BA8_x0011EA48 __asm__("D_0045E628");
double func_0011EA48_x0011EA48(double x) __asm__("func_0011EA48");
/* Libc_Floor: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libgcc/libgcc_3.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
double func_0011EA48_x0011EA48(double x)
{
        int i0,i1,j0;
        unsigned int i,j;
        do { ieee_double_shape_type_x0011EA48 ew_u; ew_u.value = (x); (i0) = ew_u.parts.msw; (i1) = ew_u.parts.lsw; } while (0);
        j0 = ((i0>>20)&0x7ff)-0x3ff;
        if(j0<20) {
            if(j0<0) {
                if(x+D_00499BA8_x0011EA48>0.0) {
                    if(i0>=0) {i0=i1=0;}
                    else if(((i0&0x7fffffff)|i1)!=0)
                        { i0=0xbff00000;i1=0;}
                }
            } else {
                i = (0x000fffff)>>j0;
                if(((i0&i)|i1)==0) return x;
                if(x+D_00499BA8_x0011EA48>0.0) {
                    if(i0<0) i0 += (0x00100000)>>j0;
                    i0 &= (~i); i1=0;
                }
            }
        } else if (j0>51) {
            if(j0==0x400) return x+x;
            else return x;
        } else {
            i = ((unsigned int)(0xffffffff))>>(j0-20);
            if((i1&i)==0) return x;
            if(x+D_00499BA8_x0011EA48>0.0) {
                if(i0<0) {
                    if(j0==20) i0+=1;
                    else {
                        j = i1+(1<<(52-j0));
                        if(j<i1) i0 +=1 ;
                        i1=j;
                    }
                }
                i1 &= (~i);
            }
        }
        do { ieee_double_shape_type_x0011EA48 iw_u; iw_u.parts.msw = (i0); iw_u.parts.lsw = (i1); (x) = iw_u.value; } while (0);
        return x;
}
