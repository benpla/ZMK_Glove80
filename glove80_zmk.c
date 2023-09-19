#define COMBO_TERM_NORMAL 24
#define COMBO_TERM_SHORT  12
#define COMBO_TERM_LONG   51

#undef CUT
#undef COPY
#undef UNDO

#define CUT            LG(X)
#define COPY           LG(C)
#define PASTE          LG(V)
#define UNDO           LG(Z)
#define REDO           LS(UNDO)
#define SELECT_ALL     LG(A)

hm: homerow_mods {
            compatible = "zmk,behavior-hold-tap";
            label = "HOMEROW_MODS";
            #binding-cells = <2>;
            tapping-term-ms = <150>;
            quick-tap-ms = <0>;
            flavor = "tap-preferred";
            bindings = <&kp>, <&kp>;
};

combos {
        compatible = "zmk,combos";

        combo_cut { 
                bindings = <&kp CUT>; 
                key-positions = <48 49>; 
                timeout-ms = <COMBO_TERM_LONG>; 
            };

        combo_copy { 
                bindings = <&kp COPY >; 
                key-positions = <49 50>; 
                timeout-ms = <COMBO_TERM_LONG>; 
            };

        combo_paste { 
                bindings = <&kp PASTE >; 
                key-positions = <48 50>; 
                timeout-ms = <COMBO_TERM_LONG>; 
            };
};