
#ifndef DataFormats_SiStripCommon_testSiStripNullKey_H
#define DataFormats_SiStripCommon_testSiStripNullKey_H

#include "FWCore/Framework/interface/EDAnalyzer.h"

/**
   @class testSiStripNullKey 
   @author R.Bainbridge
   @brief Simple class that tests SiStripNullKey.
*/
class testSiStripNullKey : public edm::EDAnalyzer {

 public:
  
  testSiStripNullKey( const edm::ParameterSet& );
  ~testSiStripNullKey();
  
  void beginJob();
  void analyze( const edm::Event&, const edm::EventSetup& );
  void endJob() {;}
  
};

#endif // DataFormats_SiStripCommon_testSiStripNullKey_H

