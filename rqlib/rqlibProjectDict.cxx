// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME rqlibProjectDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "rqlibProjectHeaders.h"

// Header files passed via #pragma extra_include

namespace RQ {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *RQ_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("RQ", 0 /*version*/, "RQ__EventHeader.h", 10,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &RQ_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *RQ_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_RQcLcLEventHeader(void *p = 0);
   static void *newArray_RQcLcLEventHeader(Long_t size, void *p);
   static void delete_RQcLcLEventHeader(void *p);
   static void deleteArray_RQcLcLEventHeader(void *p);
   static void destruct_RQcLcLEventHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RQ::EventHeader*)
   {
      ::RQ::EventHeader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RQ::EventHeader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RQ::EventHeader", ::RQ::EventHeader::Class_Version(), "RQ__EventHeader.h", 19,
                  typeid(::RQ::EventHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RQ::EventHeader::Dictionary, isa_proxy, 4,
                  sizeof(::RQ::EventHeader) );
      instance.SetNew(&new_RQcLcLEventHeader);
      instance.SetNewArray(&newArray_RQcLcLEventHeader);
      instance.SetDelete(&delete_RQcLcLEventHeader);
      instance.SetDeleteArray(&deleteArray_RQcLcLEventHeader);
      instance.SetDestructor(&destruct_RQcLcLEventHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RQ::EventHeader*)
   {
      return GenerateInitInstanceLocal((::RQ::EventHeader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RQ::EventHeader*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RQcLcLDetectorPulses(void *p = 0);
   static void *newArray_RQcLcLDetectorPulses(Long_t size, void *p);
   static void delete_RQcLcLDetectorPulses(void *p);
   static void deleteArray_RQcLcLDetectorPulses(void *p);
   static void destruct_RQcLcLDetectorPulses(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RQ::DetectorPulses*)
   {
      ::RQ::DetectorPulses *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RQ::DetectorPulses >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RQ::DetectorPulses", ::RQ::DetectorPulses::Class_Version(), "RQ__DetectorPulses.h", 28,
                  typeid(::RQ::DetectorPulses), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RQ::DetectorPulses::Dictionary, isa_proxy, 4,
                  sizeof(::RQ::DetectorPulses) );
      instance.SetNew(&new_RQcLcLDetectorPulses);
      instance.SetNewArray(&newArray_RQcLcLDetectorPulses);
      instance.SetDelete(&delete_RQcLcLDetectorPulses);
      instance.SetDeleteArray(&deleteArray_RQcLcLDetectorPulses);
      instance.SetDestructor(&destruct_RQcLcLDetectorPulses);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RQ::DetectorPulses*)
   {
      return GenerateInitInstanceLocal((::RQ::DetectorPulses*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RQ::DetectorPulses*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RQcLcLODPulses(void *p = 0);
   static void *newArray_RQcLcLODPulses(Long_t size, void *p);
   static void delete_RQcLcLODPulses(void *p);
   static void deleteArray_RQcLcLODPulses(void *p);
   static void destruct_RQcLcLODPulses(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RQ::ODPulses*)
   {
      ::RQ::ODPulses *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RQ::ODPulses >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RQ::ODPulses", ::RQ::ODPulses::Class_Version(), "RQ__ODPulses.h", 28,
                  typeid(::RQ::ODPulses), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RQ::ODPulses::Dictionary, isa_proxy, 4,
                  sizeof(::RQ::ODPulses) );
      instance.SetNew(&new_RQcLcLODPulses);
      instance.SetNewArray(&newArray_RQcLcLODPulses);
      instance.SetDelete(&delete_RQcLcLODPulses);
      instance.SetDeleteArray(&deleteArray_RQcLcLODPulses);
      instance.SetDestructor(&destruct_RQcLcLODPulses);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RQ::ODPulses*)
   {
      return GenerateInitInstanceLocal((::RQ::ODPulses*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RQ::ODPulses*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RQcLcLSingleScatters(void *p = 0);
   static void *newArray_RQcLcLSingleScatters(Long_t size, void *p);
   static void delete_RQcLcLSingleScatters(void *p);
   static void deleteArray_RQcLcLSingleScatters(void *p);
   static void destruct_RQcLcLSingleScatters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RQ::SingleScatters*)
   {
      ::RQ::SingleScatters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RQ::SingleScatters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RQ::SingleScatters", ::RQ::SingleScatters::Class_Version(), "RQ__SingleScatters.h", 23,
                  typeid(::RQ::SingleScatters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RQ::SingleScatters::Dictionary, isa_proxy, 4,
                  sizeof(::RQ::SingleScatters) );
      instance.SetNew(&new_RQcLcLSingleScatters);
      instance.SetNewArray(&newArray_RQcLcLSingleScatters);
      instance.SetDelete(&delete_RQcLcLSingleScatters);
      instance.SetDeleteArray(&deleteArray_RQcLcLSingleScatters);
      instance.SetDestructor(&destruct_RQcLcLSingleScatters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RQ::SingleScatters*)
   {
      return GenerateInitInstanceLocal((::RQ::SingleScatters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RQ::SingleScatters*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RQcLcLMultipleScatters(void *p = 0);
   static void *newArray_RQcLcLMultipleScatters(Long_t size, void *p);
   static void delete_RQcLcLMultipleScatters(void *p);
   static void deleteArray_RQcLcLMultipleScatters(void *p);
   static void destruct_RQcLcLMultipleScatters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RQ::MultipleScatters*)
   {
      ::RQ::MultipleScatters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RQ::MultipleScatters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RQ::MultipleScatters", ::RQ::MultipleScatters::Class_Version(), "RQ__MultipleScatters.h", 35,
                  typeid(::RQ::MultipleScatters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RQ::MultipleScatters::Dictionary, isa_proxy, 4,
                  sizeof(::RQ::MultipleScatters) );
      instance.SetNew(&new_RQcLcLMultipleScatters);
      instance.SetNewArray(&newArray_RQcLcLMultipleScatters);
      instance.SetDelete(&delete_RQcLcLMultipleScatters);
      instance.SetDeleteArray(&deleteArray_RQcLcLMultipleScatters);
      instance.SetDestructor(&destruct_RQcLcLMultipleScatters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RQ::MultipleScatters*)
   {
      return GenerateInitInstanceLocal((::RQ::MultipleScatters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RQ::MultipleScatters*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RQcLcLKr83mScatters(void *p = 0);
   static void *newArray_RQcLcLKr83mScatters(Long_t size, void *p);
   static void delete_RQcLcLKr83mScatters(void *p);
   static void deleteArray_RQcLcLKr83mScatters(void *p);
   static void destruct_RQcLcLKr83mScatters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RQ::Kr83mScatters*)
   {
      ::RQ::Kr83mScatters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RQ::Kr83mScatters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RQ::Kr83mScatters", ::RQ::Kr83mScatters::Class_Version(), "RQ__Kr83mScatters.h", 19,
                  typeid(::RQ::Kr83mScatters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RQ::Kr83mScatters::Dictionary, isa_proxy, 4,
                  sizeof(::RQ::Kr83mScatters) );
      instance.SetNew(&new_RQcLcLKr83mScatters);
      instance.SetNewArray(&newArray_RQcLcLKr83mScatters);
      instance.SetDelete(&delete_RQcLcLKr83mScatters);
      instance.SetDeleteArray(&deleteArray_RQcLcLKr83mScatters);
      instance.SetDestructor(&destruct_RQcLcLKr83mScatters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RQ::Kr83mScatters*)
   {
      return GenerateInitInstanceLocal((::RQ::Kr83mScatters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RQ::Kr83mScatters*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RQcLcLOtherScatters(void *p = 0);
   static void *newArray_RQcLcLOtherScatters(Long_t size, void *p);
   static void delete_RQcLcLOtherScatters(void *p);
   static void deleteArray_RQcLcLOtherScatters(void *p);
   static void destruct_RQcLcLOtherScatters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RQ::OtherScatters*)
   {
      ::RQ::OtherScatters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RQ::OtherScatters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RQ::OtherScatters", ::RQ::OtherScatters::Class_Version(), "RQ__OtherScatters.h", 24,
                  typeid(::RQ::OtherScatters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RQ::OtherScatters::Dictionary, isa_proxy, 4,
                  sizeof(::RQ::OtherScatters) );
      instance.SetNew(&new_RQcLcLOtherScatters);
      instance.SetNewArray(&newArray_RQcLcLOtherScatters);
      instance.SetDelete(&delete_RQcLcLOtherScatters);
      instance.SetDeleteArray(&deleteArray_RQcLcLOtherScatters);
      instance.SetDestructor(&destruct_RQcLcLOtherScatters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RQ::OtherScatters*)
   {
      return GenerateInitInstanceLocal((::RQ::OtherScatters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RQ::OtherScatters*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RQcLcLPileUpScatters(void *p = 0);
   static void *newArray_RQcLcLPileUpScatters(Long_t size, void *p);
   static void delete_RQcLcLPileUpScatters(void *p);
   static void deleteArray_RQcLcLPileUpScatters(void *p);
   static void destruct_RQcLcLPileUpScatters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RQ::PileUpScatters*)
   {
      ::RQ::PileUpScatters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RQ::PileUpScatters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RQ::PileUpScatters", ::RQ::PileUpScatters::Class_Version(), "RQ__PileUpScatters.h", 21,
                  typeid(::RQ::PileUpScatters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RQ::PileUpScatters::Dictionary, isa_proxy, 4,
                  sizeof(::RQ::PileUpScatters) );
      instance.SetNew(&new_RQcLcLPileUpScatters);
      instance.SetNewArray(&newArray_RQcLcLPileUpScatters);
      instance.SetDelete(&delete_RQcLcLPileUpScatters);
      instance.SetDeleteArray(&deleteArray_RQcLcLPileUpScatters);
      instance.SetDestructor(&destruct_RQcLcLPileUpScatters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RQ::PileUpScatters*)
   {
      return GenerateInitInstanceLocal((::RQ::PileUpScatters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RQ::PileUpScatters*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RQcLcLRQMCTruthEvent(void *p = 0);
   static void *newArray_RQcLcLRQMCTruthEvent(Long_t size, void *p);
   static void delete_RQcLcLRQMCTruthEvent(void *p);
   static void deleteArray_RQcLcLRQMCTruthEvent(void *p);
   static void destruct_RQcLcLRQMCTruthEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RQ::RQMCTruthEvent*)
   {
      ::RQ::RQMCTruthEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RQ::RQMCTruthEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RQ::RQMCTruthEvent", ::RQ::RQMCTruthEvent::Class_Version(), "RQ__RQMCTruthEvent.h", 19,
                  typeid(::RQ::RQMCTruthEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RQ::RQMCTruthEvent::Dictionary, isa_proxy, 4,
                  sizeof(::RQ::RQMCTruthEvent) );
      instance.SetNew(&new_RQcLcLRQMCTruthEvent);
      instance.SetNewArray(&newArray_RQcLcLRQMCTruthEvent);
      instance.SetDelete(&delete_RQcLcLRQMCTruthEvent);
      instance.SetDeleteArray(&deleteArray_RQcLcLRQMCTruthEvent);
      instance.SetDestructor(&destruct_RQcLcLRQMCTruthEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RQ::RQMCTruthEvent*)
   {
      return GenerateInitInstanceLocal((::RQ::RQMCTruthEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RQ::RQMCTruthEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RQcLcLRQMCTruthPulses(void *p = 0);
   static void *newArray_RQcLcLRQMCTruthPulses(Long_t size, void *p);
   static void delete_RQcLcLRQMCTruthPulses(void *p);
   static void deleteArray_RQcLcLRQMCTruthPulses(void *p);
   static void destruct_RQcLcLRQMCTruthPulses(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RQ::RQMCTruthPulses*)
   {
      ::RQ::RQMCTruthPulses *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RQ::RQMCTruthPulses >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RQ::RQMCTruthPulses", ::RQ::RQMCTruthPulses::Class_Version(), "RQ__RQMCTruthPulses.h", 21,
                  typeid(::RQ::RQMCTruthPulses), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RQ::RQMCTruthPulses::Dictionary, isa_proxy, 4,
                  sizeof(::RQ::RQMCTruthPulses) );
      instance.SetNew(&new_RQcLcLRQMCTruthPulses);
      instance.SetNewArray(&newArray_RQcLcLRQMCTruthPulses);
      instance.SetDelete(&delete_RQcLcLRQMCTruthPulses);
      instance.SetDeleteArray(&deleteArray_RQcLcLRQMCTruthPulses);
      instance.SetDestructor(&destruct_RQcLcLRQMCTruthPulses);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RQ::RQMCTruthPulses*)
   {
      return GenerateInitInstanceLocal((::RQ::RQMCTruthPulses*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RQ::RQMCTruthPulses*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RQcLcLRQMCTruthVertices(void *p = 0);
   static void *newArray_RQcLcLRQMCTruthVertices(Long_t size, void *p);
   static void delete_RQcLcLRQMCTruthVertices(void *p);
   static void deleteArray_RQcLcLRQMCTruthVertices(void *p);
   static void destruct_RQcLcLRQMCTruthVertices(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RQ::RQMCTruthVertices*)
   {
      ::RQ::RQMCTruthVertices *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RQ::RQMCTruthVertices >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RQ::RQMCTruthVertices", ::RQ::RQMCTruthVertices::Class_Version(), "RQ__RQMCTruthVertices.h", 20,
                  typeid(::RQ::RQMCTruthVertices), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RQ::RQMCTruthVertices::Dictionary, isa_proxy, 4,
                  sizeof(::RQ::RQMCTruthVertices) );
      instance.SetNew(&new_RQcLcLRQMCTruthVertices);
      instance.SetNewArray(&newArray_RQcLcLRQMCTruthVertices);
      instance.SetDelete(&delete_RQcLcLRQMCTruthVertices);
      instance.SetDeleteArray(&deleteArray_RQcLcLRQMCTruthVertices);
      instance.SetDestructor(&destruct_RQcLcLRQMCTruthVertices);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RQ::RQMCTruthVertices*)
   {
      return GenerateInitInstanceLocal((::RQ::RQMCTruthVertices*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RQ::RQMCTruthVertices*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RQcLcLRQMCDarkCounts(void *p = 0);
   static void *newArray_RQcLcLRQMCDarkCounts(Long_t size, void *p);
   static void delete_RQcLcLRQMCDarkCounts(void *p);
   static void deleteArray_RQcLcLRQMCDarkCounts(void *p);
   static void destruct_RQcLcLRQMCDarkCounts(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RQ::RQMCDarkCounts*)
   {
      ::RQ::RQMCDarkCounts *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RQ::RQMCDarkCounts >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RQ::RQMCDarkCounts", ::RQ::RQMCDarkCounts::Class_Version(), "RQ__RQMCDarkCounts.h", 19,
                  typeid(::RQ::RQMCDarkCounts), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RQ::RQMCDarkCounts::Dictionary, isa_proxy, 4,
                  sizeof(::RQ::RQMCDarkCounts) );
      instance.SetNew(&new_RQcLcLRQMCDarkCounts);
      instance.SetNewArray(&newArray_RQcLcLRQMCDarkCounts);
      instance.SetDelete(&delete_RQcLcLRQMCDarkCounts);
      instance.SetDeleteArray(&deleteArray_RQcLcLRQMCDarkCounts);
      instance.SetDestructor(&destruct_RQcLcLRQMCDarkCounts);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RQ::RQMCDarkCounts*)
   {
      return GenerateInitInstanceLocal((::RQ::RQMCDarkCounts*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RQ::RQMCDarkCounts*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace RQ {
//______________________________________________________________________________
atomic_TClass_ptr EventHeader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *EventHeader::Class_Name()
{
   return "RQ::EventHeader";
}

//______________________________________________________________________________
const char *EventHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::EventHeader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int EventHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::EventHeader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EventHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::EventHeader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EventHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::EventHeader*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RQ
namespace RQ {
//______________________________________________________________________________
atomic_TClass_ptr DetectorPulses::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DetectorPulses::Class_Name()
{
   return "RQ::DetectorPulses";
}

//______________________________________________________________________________
const char *DetectorPulses::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::DetectorPulses*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DetectorPulses::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::DetectorPulses*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DetectorPulses::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::DetectorPulses*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DetectorPulses::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::DetectorPulses*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RQ
namespace RQ {
//______________________________________________________________________________
atomic_TClass_ptr ODPulses::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ODPulses::Class_Name()
{
   return "RQ::ODPulses";
}

//______________________________________________________________________________
const char *ODPulses::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::ODPulses*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ODPulses::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::ODPulses*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ODPulses::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::ODPulses*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ODPulses::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::ODPulses*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RQ
namespace RQ {
//______________________________________________________________________________
atomic_TClass_ptr SingleScatters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SingleScatters::Class_Name()
{
   return "RQ::SingleScatters";
}

//______________________________________________________________________________
const char *SingleScatters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::SingleScatters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SingleScatters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::SingleScatters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SingleScatters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::SingleScatters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SingleScatters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::SingleScatters*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RQ
namespace RQ {
//______________________________________________________________________________
atomic_TClass_ptr MultipleScatters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MultipleScatters::Class_Name()
{
   return "RQ::MultipleScatters";
}

//______________________________________________________________________________
const char *MultipleScatters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::MultipleScatters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MultipleScatters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::MultipleScatters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MultipleScatters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::MultipleScatters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MultipleScatters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::MultipleScatters*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RQ
namespace RQ {
//______________________________________________________________________________
atomic_TClass_ptr Kr83mScatters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Kr83mScatters::Class_Name()
{
   return "RQ::Kr83mScatters";
}

//______________________________________________________________________________
const char *Kr83mScatters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::Kr83mScatters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Kr83mScatters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::Kr83mScatters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Kr83mScatters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::Kr83mScatters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Kr83mScatters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::Kr83mScatters*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RQ
namespace RQ {
//______________________________________________________________________________
atomic_TClass_ptr OtherScatters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *OtherScatters::Class_Name()
{
   return "RQ::OtherScatters";
}

//______________________________________________________________________________
const char *OtherScatters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::OtherScatters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int OtherScatters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::OtherScatters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *OtherScatters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::OtherScatters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *OtherScatters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::OtherScatters*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RQ
namespace RQ {
//______________________________________________________________________________
atomic_TClass_ptr PileUpScatters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PileUpScatters::Class_Name()
{
   return "RQ::PileUpScatters";
}

//______________________________________________________________________________
const char *PileUpScatters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::PileUpScatters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PileUpScatters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::PileUpScatters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PileUpScatters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::PileUpScatters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PileUpScatters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::PileUpScatters*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RQ
namespace RQ {
//______________________________________________________________________________
atomic_TClass_ptr RQMCTruthEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RQMCTruthEvent::Class_Name()
{
   return "RQ::RQMCTruthEvent";
}

//______________________________________________________________________________
const char *RQMCTruthEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::RQMCTruthEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RQMCTruthEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::RQMCTruthEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RQMCTruthEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::RQMCTruthEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RQMCTruthEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::RQMCTruthEvent*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RQ
namespace RQ {
//______________________________________________________________________________
atomic_TClass_ptr RQMCTruthPulses::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RQMCTruthPulses::Class_Name()
{
   return "RQ::RQMCTruthPulses";
}

//______________________________________________________________________________
const char *RQMCTruthPulses::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::RQMCTruthPulses*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RQMCTruthPulses::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::RQMCTruthPulses*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RQMCTruthPulses::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::RQMCTruthPulses*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RQMCTruthPulses::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::RQMCTruthPulses*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RQ
namespace RQ {
//______________________________________________________________________________
atomic_TClass_ptr RQMCTruthVertices::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RQMCTruthVertices::Class_Name()
{
   return "RQ::RQMCTruthVertices";
}

//______________________________________________________________________________
const char *RQMCTruthVertices::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::RQMCTruthVertices*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RQMCTruthVertices::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::RQMCTruthVertices*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RQMCTruthVertices::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::RQMCTruthVertices*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RQMCTruthVertices::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::RQMCTruthVertices*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RQ
namespace RQ {
//______________________________________________________________________________
atomic_TClass_ptr RQMCDarkCounts::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RQMCDarkCounts::Class_Name()
{
   return "RQ::RQMCDarkCounts";
}

//______________________________________________________________________________
const char *RQMCDarkCounts::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::RQMCDarkCounts*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RQMCDarkCounts::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RQ::RQMCDarkCounts*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RQMCDarkCounts::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::RQMCDarkCounts*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RQMCDarkCounts::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RQ::RQMCDarkCounts*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace RQ
namespace RQ {
//______________________________________________________________________________
void EventHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class RQ::EventHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RQ::EventHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(RQ::EventHeader::Class(),this);
   }
}

} // namespace RQ
namespace ROOT {
   // Wrappers around operator new
   static void *new_RQcLcLEventHeader(void *p) {
      return  p ? new(p) ::RQ::EventHeader : new ::RQ::EventHeader;
   }
   static void *newArray_RQcLcLEventHeader(Long_t nElements, void *p) {
      return p ? new(p) ::RQ::EventHeader[nElements] : new ::RQ::EventHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_RQcLcLEventHeader(void *p) {
      delete ((::RQ::EventHeader*)p);
   }
   static void deleteArray_RQcLcLEventHeader(void *p) {
      delete [] ((::RQ::EventHeader*)p);
   }
   static void destruct_RQcLcLEventHeader(void *p) {
      typedef ::RQ::EventHeader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RQ::EventHeader

namespace RQ {
//______________________________________________________________________________
void DetectorPulses::Streamer(TBuffer &R__b)
{
   // Stream an object of class RQ::DetectorPulses.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RQ::DetectorPulses::Class(),this);
   } else {
      R__b.WriteClassBuffer(RQ::DetectorPulses::Class(),this);
   }
}

} // namespace RQ
namespace ROOT {
   // Wrappers around operator new
   static void *new_RQcLcLDetectorPulses(void *p) {
      return  p ? new(p) ::RQ::DetectorPulses : new ::RQ::DetectorPulses;
   }
   static void *newArray_RQcLcLDetectorPulses(Long_t nElements, void *p) {
      return p ? new(p) ::RQ::DetectorPulses[nElements] : new ::RQ::DetectorPulses[nElements];
   }
   // Wrapper around operator delete
   static void delete_RQcLcLDetectorPulses(void *p) {
      delete ((::RQ::DetectorPulses*)p);
   }
   static void deleteArray_RQcLcLDetectorPulses(void *p) {
      delete [] ((::RQ::DetectorPulses*)p);
   }
   static void destruct_RQcLcLDetectorPulses(void *p) {
      typedef ::RQ::DetectorPulses current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RQ::DetectorPulses

namespace RQ {
//______________________________________________________________________________
void ODPulses::Streamer(TBuffer &R__b)
{
   // Stream an object of class RQ::ODPulses.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RQ::ODPulses::Class(),this);
   } else {
      R__b.WriteClassBuffer(RQ::ODPulses::Class(),this);
   }
}

} // namespace RQ
namespace ROOT {
   // Wrappers around operator new
   static void *new_RQcLcLODPulses(void *p) {
      return  p ? new(p) ::RQ::ODPulses : new ::RQ::ODPulses;
   }
   static void *newArray_RQcLcLODPulses(Long_t nElements, void *p) {
      return p ? new(p) ::RQ::ODPulses[nElements] : new ::RQ::ODPulses[nElements];
   }
   // Wrapper around operator delete
   static void delete_RQcLcLODPulses(void *p) {
      delete ((::RQ::ODPulses*)p);
   }
   static void deleteArray_RQcLcLODPulses(void *p) {
      delete [] ((::RQ::ODPulses*)p);
   }
   static void destruct_RQcLcLODPulses(void *p) {
      typedef ::RQ::ODPulses current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RQ::ODPulses

namespace RQ {
//______________________________________________________________________________
void SingleScatters::Streamer(TBuffer &R__b)
{
   // Stream an object of class RQ::SingleScatters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RQ::SingleScatters::Class(),this);
   } else {
      R__b.WriteClassBuffer(RQ::SingleScatters::Class(),this);
   }
}

} // namespace RQ
namespace ROOT {
   // Wrappers around operator new
   static void *new_RQcLcLSingleScatters(void *p) {
      return  p ? new(p) ::RQ::SingleScatters : new ::RQ::SingleScatters;
   }
   static void *newArray_RQcLcLSingleScatters(Long_t nElements, void *p) {
      return p ? new(p) ::RQ::SingleScatters[nElements] : new ::RQ::SingleScatters[nElements];
   }
   // Wrapper around operator delete
   static void delete_RQcLcLSingleScatters(void *p) {
      delete ((::RQ::SingleScatters*)p);
   }
   static void deleteArray_RQcLcLSingleScatters(void *p) {
      delete [] ((::RQ::SingleScatters*)p);
   }
   static void destruct_RQcLcLSingleScatters(void *p) {
      typedef ::RQ::SingleScatters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RQ::SingleScatters

namespace RQ {
//______________________________________________________________________________
void MultipleScatters::Streamer(TBuffer &R__b)
{
   // Stream an object of class RQ::MultipleScatters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RQ::MultipleScatters::Class(),this);
   } else {
      R__b.WriteClassBuffer(RQ::MultipleScatters::Class(),this);
   }
}

} // namespace RQ
namespace ROOT {
   // Wrappers around operator new
   static void *new_RQcLcLMultipleScatters(void *p) {
      return  p ? new(p) ::RQ::MultipleScatters : new ::RQ::MultipleScatters;
   }
   static void *newArray_RQcLcLMultipleScatters(Long_t nElements, void *p) {
      return p ? new(p) ::RQ::MultipleScatters[nElements] : new ::RQ::MultipleScatters[nElements];
   }
   // Wrapper around operator delete
   static void delete_RQcLcLMultipleScatters(void *p) {
      delete ((::RQ::MultipleScatters*)p);
   }
   static void deleteArray_RQcLcLMultipleScatters(void *p) {
      delete [] ((::RQ::MultipleScatters*)p);
   }
   static void destruct_RQcLcLMultipleScatters(void *p) {
      typedef ::RQ::MultipleScatters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RQ::MultipleScatters

namespace RQ {
//______________________________________________________________________________
void Kr83mScatters::Streamer(TBuffer &R__b)
{
   // Stream an object of class RQ::Kr83mScatters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RQ::Kr83mScatters::Class(),this);
   } else {
      R__b.WriteClassBuffer(RQ::Kr83mScatters::Class(),this);
   }
}

} // namespace RQ
namespace ROOT {
   // Wrappers around operator new
   static void *new_RQcLcLKr83mScatters(void *p) {
      return  p ? new(p) ::RQ::Kr83mScatters : new ::RQ::Kr83mScatters;
   }
   static void *newArray_RQcLcLKr83mScatters(Long_t nElements, void *p) {
      return p ? new(p) ::RQ::Kr83mScatters[nElements] : new ::RQ::Kr83mScatters[nElements];
   }
   // Wrapper around operator delete
   static void delete_RQcLcLKr83mScatters(void *p) {
      delete ((::RQ::Kr83mScatters*)p);
   }
   static void deleteArray_RQcLcLKr83mScatters(void *p) {
      delete [] ((::RQ::Kr83mScatters*)p);
   }
   static void destruct_RQcLcLKr83mScatters(void *p) {
      typedef ::RQ::Kr83mScatters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RQ::Kr83mScatters

namespace RQ {
//______________________________________________________________________________
void OtherScatters::Streamer(TBuffer &R__b)
{
   // Stream an object of class RQ::OtherScatters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RQ::OtherScatters::Class(),this);
   } else {
      R__b.WriteClassBuffer(RQ::OtherScatters::Class(),this);
   }
}

} // namespace RQ
namespace ROOT {
   // Wrappers around operator new
   static void *new_RQcLcLOtherScatters(void *p) {
      return  p ? new(p) ::RQ::OtherScatters : new ::RQ::OtherScatters;
   }
   static void *newArray_RQcLcLOtherScatters(Long_t nElements, void *p) {
      return p ? new(p) ::RQ::OtherScatters[nElements] : new ::RQ::OtherScatters[nElements];
   }
   // Wrapper around operator delete
   static void delete_RQcLcLOtherScatters(void *p) {
      delete ((::RQ::OtherScatters*)p);
   }
   static void deleteArray_RQcLcLOtherScatters(void *p) {
      delete [] ((::RQ::OtherScatters*)p);
   }
   static void destruct_RQcLcLOtherScatters(void *p) {
      typedef ::RQ::OtherScatters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RQ::OtherScatters

namespace RQ {
//______________________________________________________________________________
void PileUpScatters::Streamer(TBuffer &R__b)
{
   // Stream an object of class RQ::PileUpScatters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RQ::PileUpScatters::Class(),this);
   } else {
      R__b.WriteClassBuffer(RQ::PileUpScatters::Class(),this);
   }
}

} // namespace RQ
namespace ROOT {
   // Wrappers around operator new
   static void *new_RQcLcLPileUpScatters(void *p) {
      return  p ? new(p) ::RQ::PileUpScatters : new ::RQ::PileUpScatters;
   }
   static void *newArray_RQcLcLPileUpScatters(Long_t nElements, void *p) {
      return p ? new(p) ::RQ::PileUpScatters[nElements] : new ::RQ::PileUpScatters[nElements];
   }
   // Wrapper around operator delete
   static void delete_RQcLcLPileUpScatters(void *p) {
      delete ((::RQ::PileUpScatters*)p);
   }
   static void deleteArray_RQcLcLPileUpScatters(void *p) {
      delete [] ((::RQ::PileUpScatters*)p);
   }
   static void destruct_RQcLcLPileUpScatters(void *p) {
      typedef ::RQ::PileUpScatters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RQ::PileUpScatters

namespace RQ {
//______________________________________________________________________________
void RQMCTruthEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class RQ::RQMCTruthEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RQ::RQMCTruthEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(RQ::RQMCTruthEvent::Class(),this);
   }
}

} // namespace RQ
namespace ROOT {
   // Wrappers around operator new
   static void *new_RQcLcLRQMCTruthEvent(void *p) {
      return  p ? new(p) ::RQ::RQMCTruthEvent : new ::RQ::RQMCTruthEvent;
   }
   static void *newArray_RQcLcLRQMCTruthEvent(Long_t nElements, void *p) {
      return p ? new(p) ::RQ::RQMCTruthEvent[nElements] : new ::RQ::RQMCTruthEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_RQcLcLRQMCTruthEvent(void *p) {
      delete ((::RQ::RQMCTruthEvent*)p);
   }
   static void deleteArray_RQcLcLRQMCTruthEvent(void *p) {
      delete [] ((::RQ::RQMCTruthEvent*)p);
   }
   static void destruct_RQcLcLRQMCTruthEvent(void *p) {
      typedef ::RQ::RQMCTruthEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RQ::RQMCTruthEvent

namespace RQ {
//______________________________________________________________________________
void RQMCTruthPulses::Streamer(TBuffer &R__b)
{
   // Stream an object of class RQ::RQMCTruthPulses.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RQ::RQMCTruthPulses::Class(),this);
   } else {
      R__b.WriteClassBuffer(RQ::RQMCTruthPulses::Class(),this);
   }
}

} // namespace RQ
namespace ROOT {
   // Wrappers around operator new
   static void *new_RQcLcLRQMCTruthPulses(void *p) {
      return  p ? new(p) ::RQ::RQMCTruthPulses : new ::RQ::RQMCTruthPulses;
   }
   static void *newArray_RQcLcLRQMCTruthPulses(Long_t nElements, void *p) {
      return p ? new(p) ::RQ::RQMCTruthPulses[nElements] : new ::RQ::RQMCTruthPulses[nElements];
   }
   // Wrapper around operator delete
   static void delete_RQcLcLRQMCTruthPulses(void *p) {
      delete ((::RQ::RQMCTruthPulses*)p);
   }
   static void deleteArray_RQcLcLRQMCTruthPulses(void *p) {
      delete [] ((::RQ::RQMCTruthPulses*)p);
   }
   static void destruct_RQcLcLRQMCTruthPulses(void *p) {
      typedef ::RQ::RQMCTruthPulses current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RQ::RQMCTruthPulses

namespace RQ {
//______________________________________________________________________________
void RQMCTruthVertices::Streamer(TBuffer &R__b)
{
   // Stream an object of class RQ::RQMCTruthVertices.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RQ::RQMCTruthVertices::Class(),this);
   } else {
      R__b.WriteClassBuffer(RQ::RQMCTruthVertices::Class(),this);
   }
}

} // namespace RQ
namespace ROOT {
   // Wrappers around operator new
   static void *new_RQcLcLRQMCTruthVertices(void *p) {
      return  p ? new(p) ::RQ::RQMCTruthVertices : new ::RQ::RQMCTruthVertices;
   }
   static void *newArray_RQcLcLRQMCTruthVertices(Long_t nElements, void *p) {
      return p ? new(p) ::RQ::RQMCTruthVertices[nElements] : new ::RQ::RQMCTruthVertices[nElements];
   }
   // Wrapper around operator delete
   static void delete_RQcLcLRQMCTruthVertices(void *p) {
      delete ((::RQ::RQMCTruthVertices*)p);
   }
   static void deleteArray_RQcLcLRQMCTruthVertices(void *p) {
      delete [] ((::RQ::RQMCTruthVertices*)p);
   }
   static void destruct_RQcLcLRQMCTruthVertices(void *p) {
      typedef ::RQ::RQMCTruthVertices current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RQ::RQMCTruthVertices

namespace RQ {
//______________________________________________________________________________
void RQMCDarkCounts::Streamer(TBuffer &R__b)
{
   // Stream an object of class RQ::RQMCDarkCounts.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RQ::RQMCDarkCounts::Class(),this);
   } else {
      R__b.WriteClassBuffer(RQ::RQMCDarkCounts::Class(),this);
   }
}

} // namespace RQ
namespace ROOT {
   // Wrappers around operator new
   static void *new_RQcLcLRQMCDarkCounts(void *p) {
      return  p ? new(p) ::RQ::RQMCDarkCounts : new ::RQ::RQMCDarkCounts;
   }
   static void *newArray_RQcLcLRQMCDarkCounts(Long_t nElements, void *p) {
      return p ? new(p) ::RQ::RQMCDarkCounts[nElements] : new ::RQ::RQMCDarkCounts[nElements];
   }
   // Wrapper around operator delete
   static void delete_RQcLcLRQMCDarkCounts(void *p) {
      delete ((::RQ::RQMCDarkCounts*)p);
   }
   static void deleteArray_RQcLcLRQMCDarkCounts(void *p) {
      delete [] ((::RQ::RQMCDarkCounts*)p);
   }
   static void destruct_RQcLcLRQMCDarkCounts(void *p) {
      typedef ::RQ::RQMCDarkCounts current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RQ::RQMCDarkCounts

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlEintgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlEintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlEintgRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEvectorlEintgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlEintgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlEintgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlEintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<int> > >*)
   {
      vector<vector<vector<int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<int> > >", -2, "vector", 214,
                  typeid(vector<vector<vector<int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlEintgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<vector<int> > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlEintgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlEintgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlEintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlEintgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlEintgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<int> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<vector<int> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlEintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<vector<int> > >*)0x0)->GetClass();
      vectorlEvectorlEvectorlEintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlEintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlEintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<int> > > : new vector<vector<vector<int> > >;
   }
   static void *newArray_vectorlEvectorlEvectorlEintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<int> > >[nElements] : new vector<vector<vector<int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlEintgRsPgRsPgR(void *p) {
      delete ((vector<vector<vector<int> > >*)p);
   }
   static void deleteArray_vectorlEvectorlEvectorlEintgRsPgRsPgR(void *p) {
      delete [] ((vector<vector<vector<int> > >*)p);
   }
   static void destruct_vectorlEvectorlEvectorlEintgRsPgRsPgR(void *p) {
      typedef vector<vector<vector<int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<int> > >

namespace ROOT {
   static TClass *vectorlEvectorlEunsignedsPshortgRsPgR_Dictionary();
   static void vectorlEvectorlEunsignedsPshortgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEunsignedsPshortgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEunsignedsPshortgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEunsignedsPshortgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEunsignedsPshortgRsPgR(void *p);
   static void destruct_vectorlEvectorlEunsignedsPshortgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<unsigned short> >*)
   {
      vector<vector<unsigned short> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<unsigned short> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<unsigned short> >", -2, "vector", 214,
                  typeid(vector<vector<unsigned short> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEunsignedsPshortgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<unsigned short> >) );
      instance.SetNew(&new_vectorlEvectorlEunsignedsPshortgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEunsignedsPshortgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEunsignedsPshortgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEunsignedsPshortgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEunsignedsPshortgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<unsigned short> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<unsigned short> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEunsignedsPshortgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<unsigned short> >*)0x0)->GetClass();
      vectorlEvectorlEunsignedsPshortgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEunsignedsPshortgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEunsignedsPshortgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<unsigned short> > : new vector<vector<unsigned short> >;
   }
   static void *newArray_vectorlEvectorlEunsignedsPshortgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<unsigned short> >[nElements] : new vector<vector<unsigned short> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEunsignedsPshortgRsPgR(void *p) {
      delete ((vector<vector<unsigned short> >*)p);
   }
   static void deleteArray_vectorlEvectorlEunsignedsPshortgRsPgR(void *p) {
      delete [] ((vector<vector<unsigned short> >*)p);
   }
   static void destruct_vectorlEvectorlEunsignedsPshortgRsPgR(void *p) {
      typedef vector<vector<unsigned short> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<unsigned short> >

namespace ROOT {
   static TClass *vectorlEvectorlEunsignedsPintgRsPgR_Dictionary();
   static void vectorlEvectorlEunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEunsignedsPintgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEunsignedsPintgRsPgR(void *p);
   static void destruct_vectorlEvectorlEunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<unsigned int> >*)
   {
      vector<vector<unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<unsigned int> >", -2, "vector", 214,
                  typeid(vector<vector<unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEunsignedsPintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<unsigned int> >) );
      instance.SetNew(&new_vectorlEvectorlEunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEunsignedsPintgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEunsignedsPintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<unsigned int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<unsigned int> >*)0x0)->GetClass();
      vectorlEvectorlEunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<unsigned int> > : new vector<vector<unsigned int> >;
   }
   static void *newArray_vectorlEvectorlEunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<unsigned int> >[nElements] : new vector<vector<unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEunsignedsPintgRsPgR(void *p) {
      delete ((vector<vector<unsigned int> >*)p);
   }
   static void deleteArray_vectorlEvectorlEunsignedsPintgRsPgR(void *p) {
      delete [] ((vector<vector<unsigned int> >*)p);
   }
   static void destruct_vectorlEvectorlEunsignedsPintgRsPgR(void *p) {
      typedef vector<vector<unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<unsigned int> >

namespace ROOT {
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary();
   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEintgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEintgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p);
   static void destruct_vectorlEvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<int> >*)
   {
      vector<vector<int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<int> >", -2, "vector", 214,
                  typeid(vector<vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<int> >) );
      instance.SetNew(&new_vectorlEvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEintgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<int> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<int> >*)0x0)->GetClass();
      vectorlEvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> > : new vector<vector<int> >;
   }
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> >[nElements] : new vector<vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEintgRsPgR(void *p) {
      delete ((vector<vector<int> >*)p);
   }
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p) {
      delete [] ((vector<vector<int> >*)p);
   }
   static void destruct_vectorlEvectorlEintgRsPgR(void *p) {
      typedef vector<vector<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<int> >

namespace ROOT {
   static TClass *vectorlEvectorlEfloatgRsPgR_Dictionary();
   static void vectorlEvectorlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEfloatgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEfloatgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEfloatgRsPgR(void *p);
   static void destruct_vectorlEvectorlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<float> >*)
   {
      vector<vector<float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<float> >", -2, "vector", 214,
                  typeid(vector<vector<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEfloatgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<float> >) );
      instance.SetNew(&new_vectorlEvectorlEfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<float> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<float> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<float> >*)0x0)->GetClass();
      vectorlEvectorlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<float> > : new vector<vector<float> >;
   }
   static void *newArray_vectorlEvectorlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<float> >[nElements] : new vector<vector<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEfloatgRsPgR(void *p) {
      delete ((vector<vector<float> >*)p);
   }
   static void deleteArray_vectorlEvectorlEfloatgRsPgR(void *p) {
      delete [] ((vector<vector<float> >*)p);
   }
   static void destruct_vectorlEvectorlEfloatgRsPgR(void *p) {
      typedef vector<vector<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<float> >

namespace ROOT {
   static TClass *vectorlEvectorlEboolgRsPgR_Dictionary();
   static void vectorlEvectorlEboolgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEboolgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEboolgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEboolgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEboolgRsPgR(void *p);
   static void destruct_vectorlEvectorlEboolgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<bool> >*)
   {
      vector<vector<bool> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<bool> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<bool> >", -2, "vector", 214,
                  typeid(vector<vector<bool> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEboolgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<bool> >) );
      instance.SetNew(&new_vectorlEvectorlEboolgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEboolgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEboolgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEboolgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEboolgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<bool> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<bool> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEboolgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<bool> >*)0x0)->GetClass();
      vectorlEvectorlEboolgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEboolgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEboolgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<bool> > : new vector<vector<bool> >;
   }
   static void *newArray_vectorlEvectorlEboolgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<bool> >[nElements] : new vector<vector<bool> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEboolgRsPgR(void *p) {
      delete ((vector<vector<bool> >*)p);
   }
   static void deleteArray_vectorlEvectorlEboolgRsPgR(void *p) {
      delete [] ((vector<vector<bool> >*)p);
   }
   static void destruct_vectorlEvectorlEboolgRsPgR(void *p) {
      typedef vector<vector<bool> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<bool> >

namespace ROOT {
   static TClass *vectorlEunsignedsPshortgR_Dictionary();
   static void vectorlEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPshortgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPshortgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPshortgR(void *p);
   static void deleteArray_vectorlEunsignedsPshortgR(void *p);
   static void destruct_vectorlEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned short>*)
   {
      vector<unsigned short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned short>", -2, "vector", 214,
                  typeid(vector<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPshortgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned short>) );
      instance.SetNew(&new_vectorlEunsignedsPshortgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPshortgR);
      instance.SetDelete(&delete_vectorlEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPshortgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned short> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<unsigned short>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned short>*)0x0)->GetClass();
      vectorlEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned short> : new vector<unsigned short>;
   }
   static void *newArray_vectorlEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned short>[nElements] : new vector<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPshortgR(void *p) {
      delete ((vector<unsigned short>*)p);
   }
   static void deleteArray_vectorlEunsignedsPshortgR(void *p) {
      delete [] ((vector<unsigned short>*)p);
   }
   static void destruct_vectorlEunsignedsPshortgR(void *p) {
      typedef vector<unsigned short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned short>

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 214,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned int>*)0x0)->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete ((vector<unsigned int>*)p);
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] ((vector<unsigned int>*)p);
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = 0);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 214,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<string>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<string>*)0x0)->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete ((vector<string>*)p);
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] ((vector<string>*)p);
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 214,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = 0);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 214,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<float>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)0x0)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 214,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlEboolgR_Dictionary();
   static void vectorlEboolgR_TClassManip(TClass*);
   static void *new_vectorlEboolgR(void *p = 0);
   static void *newArray_vectorlEboolgR(Long_t size, void *p);
   static void delete_vectorlEboolgR(void *p);
   static void deleteArray_vectorlEboolgR(void *p);
   static void destruct_vectorlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bool>*)
   {
      vector<bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bool>", -2, "vector", 526,
                  typeid(vector<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEboolgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<bool>) );
      instance.SetNew(&new_vectorlEboolgR);
      instance.SetNewArray(&newArray_vectorlEboolgR);
      instance.SetDelete(&delete_vectorlEboolgR);
      instance.SetDeleteArray(&deleteArray_vectorlEboolgR);
      instance.SetDestructor(&destruct_vectorlEboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bool> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<bool>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bool>*)0x0)->GetClass();
      vectorlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool> : new vector<bool>;
   }
   static void *newArray_vectorlEboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool>[nElements] : new vector<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEboolgR(void *p) {
      delete ((vector<bool>*)p);
   }
   static void deleteArray_vectorlEboolgR(void *p) {
      delete [] ((vector<bool>*)p);
   }
   static void destruct_vectorlEboolgR(void *p) {
      typedef vector<bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bool>

namespace {
  void TriggerDictionaryInitialization_rqlibProjectDict_Impl() {
    static const char* headers[] = {
"rqlibProjectHeaders.h",
0
    };
    static const char* includePaths[] = {
"/cvmfs/sft.cern.ch/lcg/app/releases/ROOT/6.06.08/x86_64-slc6-gcc49-opt/root/include",
"/cvmfs/sft.cern.ch/lcg/releases/R/3.2.5-c6012/x86_64-slc6-gcc49-opt/lib64/R/include",
"/cvmfs/sft.cern.ch/lcg/releases/R/3.2.5-c6012/x86_64-slc6-gcc49-opt/lib64/R/library/RInside/include",
"/cvmfs/sft.cern.ch/lcg/releases/R/3.2.5-c6012/x86_64-slc6-gcc49-opt/lib64/R/library/Rcpp/include",
"/cvmfs/sft.cern.ch/lcg/app/releases/ROOT/6.06.08/x86_64-slc6-gcc49-opt/root/etc",
"/cvmfs/sft.cern.ch/lcg/app/releases/ROOT/6.06.08/x86_64-slc6-gcc49-opt/root/include",
"/cvmfs/sft.cern.ch/lcg/contrib/gcc/4.9.3/x86_64-slc6/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.9.3/../../../../include/c++/4.9.3",
"/cvmfs/sft.cern.ch/lcg/contrib/gcc/4.9.3/x86_64-slc6/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.9.3/../../../../include/c++/4.9.3/x86_64-unknown-linux-gnu",
"/cvmfs/sft.cern.ch/lcg/contrib/gcc/4.9.3/x86_64-slc6/bin/../lib/gcc/x86_64-unknown-linux-gnu/4.9.3/../../../../include/c++/4.9.3/backward",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/build/root_v6.06.08-cmake/interpreter/cling/include",
"/cvmfs/sft.cern.ch/lcg/app/releases/ROOT/6.06.08/x86_64-slc6-gcc49-opt/root/etc/cling",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/sources/root_v6.06.08/root-6.06.08",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/build/root_v6.06.08-cmake/include",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/sources/root_v6.06.08/root-6.06.08/graf3d/g3d/inc",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/sources/root_v6.06.08/root-6.06.08/gui/gui/inc",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/sources/root_v6.06.08/root-6.06.08/io/io/inc",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/sources/root_v6.06.08/root-6.06.08/core/base/../textinput/src",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/build/root_v6.06.08-cmake/core/base/",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/build/root_v6.06.08-cmake/core/rint/",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/build/root_v6.06.08-cmake/core/thread/",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/build/root_v6.06.08-cmake/io/io/",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/sources/root_v6.06.08/root-6.06.08/hist/hist/inc",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/build/root_v6.06.08-cmake/math/mathcore/",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/build/root_v6.06.08-cmake/net/net/",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/build/root_v6.06.08-cmake/tree/tree/",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/sources/root_v6.06.08/root-6.06.08/interpreter/llvm/src/include",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/build/root_v6.06.08-cmake/interpreter/llvm/src/include",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/sources/root_v6.06.08/root-6.06.08/interpreter/llvm/src/tools/clang/include",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/build/root_v6.06.08-cmake/interpreter/llvm/src/tools/clang/include",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/sources/root_v6.06.08/root-6.06.08/interpreter/cling/include",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/build/root_v6.06.08-cmake/etc/cling/cint",
"/mnt/build/jenkins/workspace/root-release-6.06/BUILDTYPE/Release/COMPILER/gcc49/LABEL/slc6/build/root_v6.06.08-cmake/core/metautils/",
"/cvmfs/sft.cern.ch/lcg/app/releases/ROOT/6.06.08/x86_64-slc6-gcc49-opt/root/include",
"/hepstore/wturner/LZ/LZanaDQM_v0/rqlib/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "rqlibProjectDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace RQ{class __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$rqlibProjectHeaders.h")))  EventHeader;}
namespace RQ{class __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$rqlibProjectHeaders.h")))  DetectorPulses;}
namespace RQ{class __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$rqlibProjectHeaders.h")))  ODPulses;}
namespace RQ{class __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$rqlibProjectHeaders.h")))  SingleScatters;}
namespace RQ{class __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$rqlibProjectHeaders.h")))  MultipleScatters;}
namespace RQ{class __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$rqlibProjectHeaders.h")))  Kr83mScatters;}
namespace RQ{class __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$rqlibProjectHeaders.h")))  OtherScatters;}
namespace RQ{class __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$rqlibProjectHeaders.h")))  PileUpScatters;}
namespace RQ{class __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$rqlibProjectHeaders.h")))  RQMCTruthEvent;}
namespace RQ{class __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$rqlibProjectHeaders.h")))  RQMCTruthPulses;}
namespace RQ{class __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$rqlibProjectHeaders.h")))  RQMCTruthVertices;}
namespace RQ{class __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Generated by MakeProject.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$rqlibProjectHeaders.h")))  RQMCDarkCounts;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "rqlibProjectDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "rqlibProjectHeaders.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"RQ::DetectorPulses", payloadCode, "@",
"RQ::EventHeader", payloadCode, "@",
"RQ::Kr83mScatters", payloadCode, "@",
"RQ::MultipleScatters", payloadCode, "@",
"RQ::ODPulses", payloadCode, "@",
"RQ::OtherScatters", payloadCode, "@",
"RQ::PileUpScatters", payloadCode, "@",
"RQ::RQMCDarkCounts", payloadCode, "@",
"RQ::RQMCTruthEvent", payloadCode, "@",
"RQ::RQMCTruthPulses", payloadCode, "@",
"RQ::RQMCTruthVertices", payloadCode, "@",
"RQ::SingleScatters", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("rqlibProjectDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_rqlibProjectDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_rqlibProjectDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_rqlibProjectDict() {
  TriggerDictionaryInitialization_rqlibProjectDict_Impl();
}
