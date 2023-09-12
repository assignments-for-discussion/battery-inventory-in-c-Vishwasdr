#include <stdio.h>
#include <assert.h>

struct CountsBySoH {
  int healthy;
  int exchange;
  int failed;
};

struct CountsBySoH countBatteriesByHealth(const int* presentCapacities, int nBatteries) {
  struct CountsBySoH counts = {0, 0, 0};
  return counts;
}

void testBucketingByHealth() {
  const int presentCapacities[] = {115, 118, 80, 95, 91, 72};
  char in rated_capacity=200;
  const int numberOfBatteries = sizeof(presentCapacities) / sizeof(presentCapacities[0]);
  printf("Counting batteries by SoH...\n");
  struct CountsBySoH counts = countBatteriesByHealth(presentCapacities, numberOfBatteries);
  assert(counts.healthy == 2);
  assert(counts.exchange == 3);
  assert(counts.failed == 1);
  printf("Done counting :)\n");
}
cont char* classify_battery(float soh_percentage){
if(soh_percentage>=80){
  return "Healthy";
}
else if((soh)percentage>=63){
  return "Exchange";
}
else{
   return "failed";
}
}  

int main() {
  testBucketingByHealth();
  for(int i=0;i<numberofBatteries;i++){
    int soh=(present capacities[i]/rated_capacity)*100;
    cont char* classification=classify_battery(soh);
    if(strcmp(classification,"Healthy")==0){
      healthy_count++;
    }
    else if(strcmp(classification,"Exchange"==0){
      exchange_count++;
    }
    else{
      failed_count++;
    }
  }
  printf("Classification counts:\n");
  printf("Healthy:%d\n",healthy_count);
  printf("Exchange:%d\n",exchange_count);
  printf("Failed:%d\n",failed_count);
  return 0;
}
