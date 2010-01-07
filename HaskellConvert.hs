{-# LANGUAGE ForeignFunctionInterface #-}
 
module HaskellConvert where
 
import Foreign.C.Types

convert_hs :: CFloat -> CFloat -> CFloat
convert_hs amount rate =  amount*rate

foreign export ccall convert_hs :: CFloat -> CFloat -> CFloat
