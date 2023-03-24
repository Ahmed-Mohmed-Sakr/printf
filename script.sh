#!/bin/bash
echo '#!/bin/bash' > "$1"
echo "$2" >> "$1"
chmod 755 "$1"
git add .
git commit -m "CharmQuark"
git push