#include <iostream>
#include <cstdlib>
#include <stdexcept>

#include "xorshift_func.h"

typedef uint64_t (*xorshift_func_t)(uint64_t rng_state);

// All generated functions
static const xorshift_func_t all_func[] =
{
    xorshift_func_1_1_54,
    xorshift_func_1_1_55,
    xorshift_func_1_3_45,
    xorshift_func_1_7_9,
    xorshift_func_1_7_44,
    xorshift_func_1_7_46,
    xorshift_func_1_9_50,
    xorshift_func_1_11_35,
    xorshift_func_1_11_50,
    xorshift_func_1_13_45,
    xorshift_func_1_15_4,
    xorshift_func_1_15_63,
    xorshift_func_1_19_6,
    xorshift_func_1_19_16,
    xorshift_func_1_23_14,
    xorshift_func_1_23_29,
    xorshift_func_1_29_34,
    xorshift_func_1_35_5,
    xorshift_func_1_35_11,
    xorshift_func_1_35_34,
    xorshift_func_1_45_37,
    xorshift_func_1_51_13,
    xorshift_func_1_53_3,
    xorshift_func_1_59_14,
    xorshift_func_2_13_23,
    xorshift_func_2_31_51,
    xorshift_func_2_31_53,
    xorshift_func_2_43_27,
    xorshift_func_2_47_49,
    xorshift_func_3_1_11,
    xorshift_func_3_5_21,
    xorshift_func_3_13_59,
    xorshift_func_3_21_31,
    xorshift_func_3_25_20,
    xorshift_func_3_25_31,
    xorshift_func_3_25_56,
    xorshift_func_3_29_40,
    xorshift_func_3_29_47,
    xorshift_func_3_29_49,
    xorshift_func_3_35_14,
    xorshift_func_3_37_17,
    xorshift_func_3_43_4,
    xorshift_func_3_43_6,
    xorshift_func_3_43_11,
    xorshift_func_3_51_16,
    xorshift_func_3_53_7,
    xorshift_func_3_61_17,
    xorshift_func_3_61_26,
    xorshift_func_4_7_19,
    xorshift_func_4_9_13,
    xorshift_func_4_15_51,
    xorshift_func_4_15_53,
    xorshift_func_4_29_45,
    xorshift_func_4_29_49,
    xorshift_func_4_31_33,
    xorshift_func_4_35_15,
    xorshift_func_4_35_21,
    xorshift_func_4_37_11,
    xorshift_func_4_37_21,
    xorshift_func_4_41_19,
    xorshift_func_4_41_45,
    xorshift_func_4_43_21,
    xorshift_func_4_43_31,
    xorshift_func_4_53_7,
    xorshift_func_5_9_23,
    xorshift_func_5_11_54,
    xorshift_func_5_15_27,
    xorshift_func_5_17_11,
    xorshift_func_5_23_36,
    xorshift_func_5_33_29,
    xorshift_func_5_41_20,
    xorshift_func_5_45_16,
    xorshift_func_5_47_23,
    xorshift_func_5_53_20,
    xorshift_func_5_59_33,
    xorshift_func_5_59_35,
    xorshift_func_5_59_63,
    xorshift_func_6_1_17,
    xorshift_func_6_3_49,
    xorshift_func_6_17_47,
    xorshift_func_6_23_27,
    xorshift_func_6_27_7,
    xorshift_func_6_43_21,
    xorshift_func_6_49_29,
    xorshift_func_6_55_17,
    xorshift_func_7_5_41,
    xorshift_func_7_5_47,
    xorshift_func_7_5_55,
    xorshift_func_7_7_20,
    xorshift_func_7_9_38,
    xorshift_func_7_11_10,
    xorshift_func_7_11_35,
    xorshift_func_7_13_58,
    xorshift_func_7_19_17,
    xorshift_func_7_19_54,
    xorshift_func_7_23_8,
    xorshift_func_7_25_58,
    xorshift_func_7_27_59,
    xorshift_func_7_33_8,
    xorshift_func_7_41_40,
    xorshift_func_7_43_28,
    xorshift_func_7_51_24,
    xorshift_func_7_57_12,
    xorshift_func_8_5_59,
    xorshift_func_8_9_25,
    xorshift_func_8_13_25,
    xorshift_func_8_13_61,
    xorshift_func_8_15_21,
    xorshift_func_8_25_59,
    xorshift_func_8_29_19,
    xorshift_func_8_31_17,
    xorshift_func_8_37_21,
    xorshift_func_8_51_21,
    xorshift_func_9_1_27,
    xorshift_func_9_5_36,
    xorshift_func_9_5_43,
    xorshift_func_9_7_18,
    xorshift_func_9_19_18,
    xorshift_func_9_21_11,
    xorshift_func_9_21_20,
    xorshift_func_9_21_40,
    xorshift_func_9_23_57,
    xorshift_func_9_27_10,
    xorshift_func_9_29_12,
    xorshift_func_9_29_37,
    xorshift_func_9_37_31,
    xorshift_func_9_41_45,
    xorshift_func_10_7_33,
    xorshift_func_10_27_59,
    xorshift_func_10_53_13,
    xorshift_func_11_5_32,
    xorshift_func_11_5_34,
    xorshift_func_11_5_43,
    xorshift_func_11_5_45,
    xorshift_func_11_9_14,
    xorshift_func_11_9_34,
    xorshift_func_11_13_40,
    xorshift_func_11_15_37,
    xorshift_func_11_23_42,
    xorshift_func_11_23_56,
    xorshift_func_11_25_48,
    xorshift_func_11_27_26,
    xorshift_func_11_29_14,
    xorshift_func_11_31_18,
    xorshift_func_11_53_23,
    xorshift_func_12_1_31,
    xorshift_func_12_3_13,
    xorshift_func_12_3_49,
    xorshift_func_12_7_13,
    xorshift_func_12_11_47,
    xorshift_func_12_25_27,
    xorshift_func_12_39_49,
    xorshift_func_12_43_19,
    xorshift_func_13_3_40,
    xorshift_func_13_3_53,
    xorshift_func_13_7_17,
    xorshift_func_13_9_15,
    xorshift_func_13_9_50,
    xorshift_func_13_13_19,
    xorshift_func_13_17_43,
    xorshift_func_13_19_28,
    xorshift_func_13_19_47,
    xorshift_func_13_21_18,
    xorshift_func_13_21_49,
    xorshift_func_13_29_35,
    xorshift_func_13_35_30,
    xorshift_func_13_35_38,
    xorshift_func_13_47_23,
    xorshift_func_13_51_21,
    xorshift_func_14_13_17,
    xorshift_func_14_15_19,
    xorshift_func_14_23_33,
    xorshift_func_14_31_45,
    xorshift_func_14_47_15,
    xorshift_func_15_1_19,
    xorshift_func_15_5_37,
    xorshift_func_15_13_28,
    xorshift_func_15_13_52,
    xorshift_func_15_17_27,
    xorshift_func_15_19_63,
    xorshift_func_15_21_46,
    xorshift_func_15_23_23,
    xorshift_func_15_45_17,
    xorshift_func_15_47_16,
    xorshift_func_15_49_26,
    xorshift_func_16_5_17,
    xorshift_func_16_7_39,
    xorshift_func_16_11_19,
    xorshift_func_16_11_27,
    xorshift_func_16_13_55,
    xorshift_func_16_21_35,
    xorshift_func_16_25_43,
    xorshift_func_16_27_53,
    xorshift_func_16_47_17,
    xorshift_func_17_15_58,
    xorshift_func_17_23_29,
    xorshift_func_17_23_51,
    xorshift_func_17_23_52,
    xorshift_func_17_27_22,
    xorshift_func_17_45_22,
    xorshift_func_17_47_28,
    xorshift_func_17_47_29,
    xorshift_func_17_47_54,
    xorshift_func_18_1_25,
    xorshift_func_18_3_43,
    xorshift_func_18_19_19,
    xorshift_func_18_25_21,
    xorshift_func_18_41_23,
    xorshift_func_19_7_36,
    xorshift_func_19_7_55,
    xorshift_func_19_13_37,
    xorshift_func_19_15_46,
    xorshift_func_19_21_52,
    xorshift_func_19_25_20,
    xorshift_func_19_41_21,
    xorshift_func_19_43_27,
    xorshift_func_20_1_31,
    xorshift_func_20_5_29,
    xorshift_func_21_1_27,
    xorshift_func_21_9_29,
    xorshift_func_21_13_52,
    xorshift_func_21_15_28,
    xorshift_func_21_15_29,
    xorshift_func_21_17_24,
    xorshift_func_21_17_30,
    xorshift_func_21_17_48,
    xorshift_func_21_21_32,
    xorshift_func_21_21_34,
    xorshift_func_21_21_37,
    xorshift_func_21_21_38,
    xorshift_func_21_21_40,
    xorshift_func_21_21_41,
    xorshift_func_21_21_43,
    xorshift_func_21_41_23,
    xorshift_func_22_3_39,
    xorshift_func_23_9_38,
    xorshift_func_23_9_48,
    xorshift_func_23_9_57,
    xorshift_func_23_13_38,
    xorshift_func_23_13_58,
    xorshift_func_23_13_61,
    xorshift_func_23_17_25,
    xorshift_func_23_17_54,
    xorshift_func_23_17_56,
    xorshift_func_23_17_62,
    xorshift_func_23_41_34,
    xorshift_func_23_41_51,
    xorshift_func_24_9_35,
    xorshift_func_24_11_29,
    xorshift_func_24_25_25,
    xorshift_func_24_31_35,
    xorshift_func_25_7_46,
    xorshift_func_25_7_49,
    xorshift_func_25_9_39,
    xorshift_func_25_11_57,
    xorshift_func_25_13_29,
    xorshift_func_25_13_39,
    xorshift_func_25_13_62,
    xorshift_func_25_15_47,
    xorshift_func_25_21_44,
    xorshift_func_25_27_27,
    xorshift_func_25_27_53,
    xorshift_func_25_33_36,
    xorshift_func_25_39_54,
    xorshift_func_28_9_55,
    xorshift_func_28_11_53,
    xorshift_func_29_27_37,
    xorshift_func_31_1_51,
    xorshift_func_31_25_37,
    xorshift_func_31_27_35,
    xorshift_func_33_31_43,
    xorshift_func_33_31_55,
    xorshift_func_43_21_46,
    xorshift_func_49_15_61,
    xorshift_func_55_9_56
};

int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    // Go through all xorshift functions and run them
    for (auto xorshift_func: all_func)
    {
        // Start value can be any integer (except 0)
        const uint64_t start_value { 42 };

        // State of the xorshift RNG
        uint64_t state { start_value };

        // Execute function and check for possible invalid return values
        for (size_t i = 0; i < 1000000; ++i)
        {
            state = xorshift_func(state);

            if (state == 0)
            {
                throw std::runtime_error("xorshift algorithm reached invalid value: 0");
            }

            if (state == start_value)
            {
                throw std::runtime_error("xorshift algorithm reached start value");
            }
        }
    }

    return EXIT_SUCCESS;
}
catch (std::runtime_error &ex)
{
    std::cerr << "Error, exception: " << ex.what() << std::endl;
    return EXIT_FAILURE;
}
catch (...)
{
    std::cerr << "Error, exception" << std::endl;
    return EXIT_FAILURE;
}
