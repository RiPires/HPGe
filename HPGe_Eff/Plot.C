#include "TFile.h"
#include "TTree.h"
#include <iostream>
#include "TH2.h"
#include <cmath>
using namespace std;

void Plot(){

     // Open the ROOT file
     TFile *InputTFile = new TFile("add.root", "READ");
     // Check if the file is open successfully
     if (!InputTFile || InputTFile->IsZombie()){
          cout << "Error: Could not open ROOT file." << endl;
          return;
     }  
    
     // Access the tree in the file
     TTree *ScoringTTRee = (TTree*)InputTFile->Get("Scoring");
     // Create a canvas for plotting
     TCanvas* canvas = new TCanvas("canvas", "Energy Scoring", 800, 600);
     // Create a histogram
     TH1D* hist1 = new TH1D("hist", "Energy scoring (Edet)", 100, 0, 0.15);
     // Project the variable into the histogram
     ScoringTTRee->Project("hist1", "Scoring.Edep");
     // Set the histogram style and labels
     hist1->SetLineColor(kBlue);
     hist1->SetLineWidth(2);
     hist1->GetXaxis()->SetTitle("Energy scoring (MeV)");
     hist1->GetYaxis()->SetTitle("Counts");
     // Draw the histogram on the canvas
     hist1->Draw();

     // Access the tree in the file
     TTree *StepsTTRee = (TTree*)InputTFile->Get("Steps");
     // Create a canvas for plotting
     TCanvas* canvas2 = new TCanvas("canvas2", "Energy deposit", 800, 600);
     // Create a histogram
     TH1D* hist2 = new TH1D("hist2", "Energy deposits (Edet)", 100, 0, 0.15);
     // Project the variable into the histogram
     StepsTTRee->Project("hist2", "Steps.edep");
     // Set the histogram style and labels
     hist2->SetLineColor(kBlue);
     hist2->SetLineWidth(2);
     hist2->GetXaxis()->SetTitle("Energy deposits (MeV)");
     hist2->GetYaxis()->SetTitle("Counts");
     // Draw the histogram on the canvas
     hist2->Draw();

     // Count the entries with energy greater than the specified threshold
     Double_t Hits = hist1->Integral(hist1->FindBin(0.12), hist1->GetNbinsX());
     cout << "Nr of hits = " << Hits << endl;

     // Display the canvas
     canvas->Draw();
}
