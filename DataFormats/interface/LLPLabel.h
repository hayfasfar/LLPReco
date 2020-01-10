#ifndef LLPReco_DataFormats_LLPLabel_h
#define LLPReco_DataFormats_LLPLabel_h

#include "DataFormats/BTauReco/interface/FeaturesTagInfo.h"

namespace llpdnnx {

class LLPLabel {

    public:
        enum class Type {
            isPU,
            isB,
            isBB,
            isGBB,
            isLeptonic_B,
            isLeptonic_C,
            isC,
            isCC,
            isGCC,
            isS,
            isUD,
            isG,
            
            isLLP_L, //prompt lepton
            isLLP_Q, //single light quark
            isLLP_QL, //single light quark + prompt lepton
            isLLP_QQ, //double light quark
            isLLP_QQL, //double light quark + prompt lepton
            isLLP_B, //single b/c quark
            isLLP_BL, //single b/c quark + prompt lepton
            isLLP_BB, //double b/c quark
            isLLP_BBL, //double b/c quark + prompt lepton
            
            isUndefined
            
        };
        
        Type type;
        
        int partonFlavor;
        int hadronFlavor;

        float displacement;
        float displacement_xy;
        float displacement_z;
        float decay_angle;
        
        
        LLPLabel():
            type(Type::isUndefined),
            partonFlavor(0),
            hadronFlavor(0),
            displacement(0),
            displacement_xy(0),
            displacement_z(0),
            decay_angle(0)
        {
        }
};



}

#endif
